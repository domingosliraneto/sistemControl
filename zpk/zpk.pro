#-------------------------------------------------
#
# Project created by QtCreator 2017-03-03T21:33:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets\
                                        printsupport # permite imprimir o grafico

TARGET = controle1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    SistemasdeControle/headers/graphicLibs/QCustomPlot/qcustomplot.cpp

HEADERS  += mainwindow.h \
    SistemasdeControle/headers/graphicLibs/QCustomPlot/qcustomplot.h \
    SistemasdeControle/headers/graphicLibs/plot.h \
    SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h \
    SistemasdeControle/src/graphicLibs/plot.hpp \
    SistemasdeControle/src/primitiveLibs/LinAlg/matrix.hpp \
    SistemasdeControle/headers/modelLibs/transferfunction.h \
    SistemasdeControle/src/modelLibs/model.hpp \
    SistemasdeControle/src/modelLibs/transferfunction.hpp \
    ../../SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h \
    ../../SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h \
    ../../SistemasdeControle/src/primitiveLibs/LinAlg/linalg.hpp \
    ../../SistemasdeControle/src/primitiveLibs/LinAlg/matrix.hpp \
    SistemasdeControle/src/primitiveLibs/LinAlg/linalg.hpp \
    SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h \
    ../../SistemasdeControle/headers/primitiveLibs/polynom.h \
    ../../SistemasdeControle/src/primitiveLibs/polynom.hpp

FORMS    += mainwindow.ui
