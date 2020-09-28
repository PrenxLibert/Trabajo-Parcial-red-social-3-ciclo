/****************************************************************************
** Meta object code from reading C++ file 'interfast.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Red_Social/interfast.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interfast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_interfast_t {
    QByteArrayData data[11];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_interfast_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_interfast_t qt_meta_stringdata_interfast = {
    {
QT_MOC_LITERAL(0, 0, 9), // "interfast"
QT_MOC_LITERAL(1, 10, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 27), // "on_pshbu_mos_perfil_clicked"
QT_MOC_LITERAL(4, 61, 20), // "on_btnAccept_clicked"
QT_MOC_LITERAL(5, 82, 21), // "on_btnDecline_clicked"
QT_MOC_LITERAL(6, 104, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(7, 128, 26), // "on_psbu_solicitud1_clicked"
QT_MOC_LITERAL(8, 155, 26), // "on_psbu_solicitud2_clicked"
QT_MOC_LITERAL(9, 182, 26), // "on_psbu_solicitud3_clicked"
QT_MOC_LITERAL(10, 209, 23) // "on_pushButton_5_clicked"

    },
    "interfast\0on_pushButton_clicked\0\0"
    "on_pshbu_mos_perfil_clicked\0"
    "on_btnAccept_clicked\0on_btnDecline_clicked\0"
    "on_pushButton_4_clicked\0"
    "on_psbu_solicitud1_clicked\0"
    "on_psbu_solicitud2_clicked\0"
    "on_psbu_solicitud3_clicked\0"
    "on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_interfast[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void interfast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<interfast *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pshbu_mos_perfil_clicked(); break;
        case 2: _t->on_btnAccept_clicked(); break;
        case 3: _t->on_btnDecline_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_psbu_solicitud1_clicked(); break;
        case 6: _t->on_psbu_solicitud2_clicked(); break;
        case 7: _t->on_psbu_solicitud3_clicked(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject interfast::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_interfast.data,
    qt_meta_data_interfast,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *interfast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *interfast::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_interfast.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int interfast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
