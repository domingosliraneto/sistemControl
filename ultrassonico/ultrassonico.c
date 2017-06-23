#include <uRTOS_2.21.h>

__sbit __at (0x92) TrigPin;
unsigned int Echo=0x00;
unsigned char TrigCont=100;
char __code Tit1[16]= "Distancia (cm):";

void RTproc_1(){
}

void RTproc_2(){
 TrigCont--;
 if (TrigCont==0){
    TrigPin=1 ;
    TrigCont=4;
    while(TrigCont)TrigCont--;
    TrigCont=100 ;
    TrigPin=0;
 } 
}

void ext_1 (void) __interrupt(2){
    Echo=TH1<<8;
    Echo=Echo+TL1;
    TL1=0x00;
    TH1=0x00;
}
void main (){
    unsigned char i=0;
    unsigned char distCM=0;
    TrigPin=0;
    inic();
    TMOD=0x92;
    IT1=1;
    EX1=1;
    for(i=0;i<15;i++){
        wrLCD4(letra, Tit1[i]);
    }
    while(1){
        distCM=(Echo/58);
        char2LCD(0xC0,distCM,4);
    }
}