/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Serial QT/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 28), // "on_ConnectPushButton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 31), // "on_DisconnectPushButton_clicked"
QT_MOC_LITERAL(4, 73, 26), // "on_ClearPushButton_clicked"
QT_MOC_LITERAL(5, 100, 25), // "on_SendPushButton_clicked"
QT_MOC_LITERAL(6, 126, 24), // "on_progressBar_destroyed"
QT_MOC_LITERAL(7, 151, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 173, 23), // "on_pushButton_2_toggled"
QT_MOC_LITERAL(9, 197, 7), // "checked"
QT_MOC_LITERAL(10, 205, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 229, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 253, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(13, 285, 8), // "position"
QT_MOC_LITERAL(14, 294, 21), // "updateSliderOnChanged"
QT_MOC_LITERAL(15, 316, 15), // "setMalhaFechada"
QT_MOC_LITERAL(16, 332, 16), // "setPIDParametros"
QT_MOC_LITERAL(17, 349, 7), // "sendPID"
QT_MOC_LITERAL(18, 357, 11), // "std::string"
QT_MOC_LITERAL(19, 369, 2), // "kp"
QT_MOC_LITERAL(20, 372, 2), // "ki"
QT_MOC_LITERAL(21, 375, 2), // "kd"
QT_MOC_LITERAL(22, 378, 6), // "modulo"
QT_MOC_LITERAL(23, 385, 6) // "numero"

    },
    "MainWindow\0on_ConnectPushButton_clicked\0"
    "\0on_DisconnectPushButton_clicked\0"
    "on_ClearPushButton_clicked\0"
    "on_SendPushButton_clicked\0"
    "on_progressBar_destroyed\0on_pushButton_clicked\0"
    "on_pushButton_2_toggled\0checked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0updateSliderOnChanged\0"
    "setMalhaFechada\0setPIDParametros\0"
    "sendPID\0std::string\0kp\0ki\0kd\0modulo\0"
    "numero"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    1,  100,    2, 0x08 /* Private */,
      14,    1,  103,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    3,  108,    2, 0x08 /* Private */,
      22,    1,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18, 0x80000000 | 18,   19,   20,   21,
    QMetaType::Double, QMetaType::Double,   23,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ConnectPushButton_clicked(); break;
        case 1: _t->on_DisconnectPushButton_clicked(); break;
        case 2: _t->on_ClearPushButton_clicked(); break;
        case 3: _t->on_SendPushButton_clicked(); break;
        case 4: _t->on_progressBar_destroyed(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_pushButton_3_clicked(); break;
        case 9: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateSliderOnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setMalhaFechada(); break;
        case 12: _t->setPIDParametros(); break;
        case 13: _t->sendPID((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 14: { double _r = _t->modulo((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
