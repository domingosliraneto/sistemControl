/*
O algoritmo utiliza esta estratégia de reprodução / abate:
Mantem o melhor caminho inalterado.
Execute mutações no restante dos 50% superiores das rotas classificadas.
Randomiza as rotas classificadas da metade inferior (basicamente jogue fora e substitua)
Eu decidi contra o cruzamento porque não acho que seja justificado dada a natureza do
Problema: o pedido é tudo o que importa. Se você olhar para o problema de amostra dado, o crossover geralmente
completamente suja a ordem de modo que nenhum segmento se assemelhe a seu pai.
*/

#include <QCoreApplication>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <fstream>
#include <cstring>

#define 	MAX_CITIES 	7 	// Número máximo / padrão de cidades permitido
#define 	GRID_X 			200 // Largura da grade
#define 	GRID_Y 			200 // Altura da grade
#define		SIZE 	 			100 // Número total de rotas na população

using namespace std;

// Este mapa contém todas as informações sobre o layout da cidade
struct Map{
    int cityNum; 														// Número de cidades
    int start;															// Número da cidade inicial
    int xCoord[MAX_CITIES]; 								// X-coordenada de cada cidade
    int yCoord[MAX_CITIES]; 								// Y-coordenada de cada cidade
    int distances[MAX_CITIES][MAX_CITIES]; 	// LUT mantendo a distância entre duas cidades
};

// Funções auxiliares
bool checkCoordinates(Map map, int x, int y, int city);
void printCities(Map map);

int main(int argc, char* argv[]){
    Map map; 						// Struct contendo todas as informações do mapa
    int response = 0;		// Controla as repetições no loop principal
    srand(time(NULL));
    std::string path;

    // Receba o usuário, explique o uso
    cout << "\n\n\n Verifique o  Algoritmo Genetico para o problema do Caixeiro Viajante ! \n";;
    cout << "\nUSE: ./a.out <arquivo de texto>";
    cout << "\n(Se voce nao forneceu um argumento de arquivo de texto, uma lista aleatoria de ";
    cout << "\n7 cidades sera criado para voce.)\n\n\n";
    cout << "Primeiro, este programa ira construir o Mapa e exibir uma visao geral dos locaisda Cidade e, em seguida, comecar a encontrar uma solucao.\n";
    cout << "Pressione Enter para comecar\n";
    std::cin >> path;

    /*
     *
     * (1) CONFIGURAÇÃO: Inicialize o mapa da cidade e a população original
     *
     */

    // Se houver um segundo argumento, verifique se é um arquivo válido e obtenha as coordenadas da cidade
    if(path.length() > 2){
        // Leia o arquivo no Mapa. Mensagem de erro e saia se não estiver em um formato válido.

        char ch;
        int index, x, y;
        ifstream fs;
        fs.open(path);
        fs >> map.cityNum;

        // Percorra a lista de cidades
        for(int i = 0; i < map.cityNum; i++){
            fs >> index >> x >>  y;
            map.xCoord[index-1] = x;
            map.yCoord[index-1] = y;
        }
        fs >> map.start;
        fs.close();
    }

    // Caso contrário, crie um conjunto aleatório de coordenadas da cidade
    else{
        int x;
        int y;
        map.cityNum = MAX_CITIES;
        for(int i = 0; i < map.cityNum; i++){
            do{
                x = rand()%GRID_X;
                y = rand()%GRID_Y;
            }while(checkCoordinates(map, x, y, i));
            map.start = 1;
            map.xCoord[i] = x;
            map.yCoord[i] = y;
        }
    }

    // Construa o LUT para todas as distâncias entre cada par de cidades
    for( int i = 0; i < map.cityNum; i++){
        for(int j = 0; j < map.cityNum; j++) map.distances[i][j] = abs(map.xCoord[i] - map.xCoord[j]) + abs(map.yCoord[i] - map.yCoord[j]);
    }

    // Imprima os detalhes do mapa
    printCities(map);

    // Inicializar uma população de rotas randomizadas
    // Foi mais simples passar as matrizes 1D para random_shuffle (), então isso aleatoriza uma matriz falsa chamada randomOrder.
    int route[SIZE][map.cityNum];
    for(int i = 0; i < SIZE; i++){
        int randomOrder[map.cityNum];
        for(int j = 0; j < map.cityNum; j++) randomOrder[j] = j + 1;
        // Precisa colocar a cidade inicial no primeiro índice. Então, devemos fazer uma mudança se ainda não estiver na primeira posição.
        if(randomOrder[0] != map.start) {
            int buf = randomOrder[0];
            randomOrder[0] = map.start;
            int i = 1;
            while(randomOrder[i] != map.start) i++;
            randomOrder[i] = buf;
        }
        random_shuffle(&randomOrder[1], &randomOrder[map.cityNum]);
        for(int j = 0; j < map.cityNum; j++) route[i][j] = randomOrder[j];

        // Imprima todas as rotas (somente Debug)
        //for(int j = 0; j < map.cityNum; j++) cout<<route[i][j]<<" ";
        //cout<<endl;
    }

    /*
     *
     * (2) PRINCIPAL LOOP: Fitness Eval-> Elitism / Mutation / Randomize-> Report Best Route-> Repeat
     *
     */

    do{
        int fitness[SIZE];
        int best = 20000;			// Valor de aptidao da melhor rota
        int bestindex;				// Localizacao da melhor rota na populacao
        int median;						// O valor medio na populacao

        // Obter o valor da aptidao para cada rota
        for(int i = 0; i < SIZE; i++){
            fitness[i] = 0;
            for(int j = 0; j < map.cityNum; j++) {
                int cityOne = route[i][j];
                int cityTwo = route[i][(j+1)%(map.cityNum)];
                fitness[i] += map.distances[cityOne-1][cityTwo-1];
            }
            //fitness[i] += map.distances[start-1][cityTwo-1]
            //cout << "Fitness " << i << ": " << fitness[i]<<endl;
            if(fitness[i] < best){ best = fitness[i]; bestindex = i;}
        }

        // Obter o valor medio
        int buf[SIZE];
        copy(&fitness[0], &fitness[SIZE], buf);
        sort(&buf[0], &buf[SIZE]);
        median = buf[SIZE/2];

        // Dependendo do valor de aptidao de cada rota, seja Mutate, Randomize ou Mantenha-o.
        for(int i = 0; i < SIZE; i++){
            // Melhor Rota - Deixe-o sozinho
            if(fitness[i] == best) ;
            // Mutate - mude duas cidades na rota, mas certifiquese de nao mover a primeira cidade
            else if(fitness[i] < median){
                int cityOne = rand()%(map.cityNum-1) + 1;
                int cityTwo = rand()%(map.cityNum-1) + 1;
                int buf = route[i][cityOne];
                route[i][cityOne] = route[i][cityTwo];
                route[i][cityTwo] = buf;
            }
            // Aleatorio - esta rota e ruim. Gerar um novo aleatório
            else {
                int random[map.cityNum];
                for(int j = 0; j < map.cityNum; j++) random[j] = route[i][j];
                random_shuffle(&random[1], &random[map.cityNum]);
                for(int j = 1; j < map.cityNum; j++) route[i][j] = random[j];
            }
        }

        // Imprima informacoes e verifique se o usuario deseja repetir
        if(response <= 0){
                // Imprima todas as rotas (apenas Debug)
                //for(int j = 0; j < map.cityNum; j++) cout<<route[i][j]<<" ";
                //cout<<endl;
                //cout <<"\nMelhor Indice de Rota: " << bestindex;
            cout << "\nMelhor rota encontrada:";
            for(int j = 0; j < map.cityNum; j++) cout << route[bestindex][j] << " ";
          cout << route[bestindex][0] << " ";
            cout << "\n\nDistancia total desta rota:" << best;
            cout << "\n\nQuantas geracoes voce gostaria de avancar? (0 programa de saidas):";
            cin >> response;
            if(response > 10000) {cout<<"\n Isso e demais! Vamos fazer 10000.\n"; response = 10000;}
        }
        response--;
    }while(response >= 0);

    return 0;
}

// Verifica se ja existe uma cidade nessas coordenadas. Assume o numero "cidade" que voce colocou
// E o indice maximo ate agora.
// Retorna verdadeiro se o ponto for tomado, falso se nao.
bool checkCoordinates(Map map, int x, int y, int city){
    for(int i = 0; i < city; i++){
        if( (map.xCoord[i] == x) && (map.yCoord[i] == y) ) return true;
    }

    return false;
}

// Imprime a matriz da distância
void printCities(Map map){

    // Imprima a lista de cidades
    cout << "\nLista de locais da cidade:\n";
    for( int i = 0; i < map.cityNum; i++){
        cout << "Cidade " << i + 1 << ": (" << map.xCoord[i] << ", " << map.yCoord[i] << ")\n";
    }

    cout << "Comece na cidade " << map.start << endl;

    // Imprima a matriz da distancia
    cout << "\n\nTabela de distancias entre cidades:\n  ";
    for(int i = 0; i < map.cityNum; i++) {if(i < 9) cout << " "; cout << "  " << i + 1;}
    cout << endl;
    for( int i = 0; i < map.cityNum; i++){
        if(i < 9) cout << " ";
        cout << i + 1;
        for(int j = 0; j < map.cityNum; j++){
            cout << " ";
            int d = map.distances[i][j];
            if( d < 100) cout << " ";
            if( d < 10 ) cout << " ";
            cout << d;
        }
        cout << endl;
    }

}
