#ifndef STORAGE_H
#define STORAGE_H
#include "SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include "fstream"

namespace fileHandler {

    template <class Type>
    class storage
    {
    public:
        storage(){}
        storage(const std::string &fileName);
        ~storage(){this->myfile.close();}
        void setFileName(const std::string &fileName);
        void operator <<(LinAlg::Matrix<Type> input);
        void operator >>(LinAlg::Matrix<Type> &output);

    private:
        std::fstream myfile;
        std::string  fileName;
    };
}

#include "storage.hpp"
#endif // STORAGE_H
