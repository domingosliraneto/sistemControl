#include "storage.h"

template <typename Type>
fileHandler::storage<Type>::storage(const std::string &fileName)
{
    this->fileName = fileName;
    this->myfile.open(this->fileName.c_str());
}

template <typename Type>
void fileHandler::storage<Type>::setFileName(const std::string &fileName)
{
    this->fileName = fileName;
    this->myfile.open(this->fileName.c_str());
}

template <typename Type>
void fileHandler::storage<Type>::operator <<(LinAlg::Matrix<Type> input)
{
    std::string str; str <<= input;
    myfile << str.c_str();
}

template <typename Type>
void fileHandler::storage<Type>::operator >>(LinAlg::Matrix<Type> &output)
{
    std::string lineOfFile;
    LinAlg::Matrix<Type> fileContent;

    this->myfile.close();
    this->myfile.open(this->fileName.c_str());

    while(getline (this->myfile,lineOfFile))
    {
        fileContent = lineOfFile.c_str();
        output = output|fileContent;
    }
//    output = fileContent.c_str();
}
