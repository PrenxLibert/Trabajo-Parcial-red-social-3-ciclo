/****************************************************************************
** Meta object code from reading C++ file 'interfas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../interfas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interfas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Interfas_t {
    QByteArrayData data[10];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Interfas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Interfas_t qt_meta_stringdata_Interfas = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Interfas"
QT_MOC_LITERAL(1, 9, 20), // "on_btnEnviar_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "on_btnPublic_clicked"
QT_MOC_LITERAL(4, 52, 19), // "on_btnVchat_clicked"
QT_MOC_LITERAL(5, 72, 20), // "on_btnSearch_clicked"
QT_MOC_LITERAL(6, 93, 20), // "on_btnOlikes_clicked"
QT_MOC_LITERAL(7, 114, 20), // "on_btnFollow_clicked"
QT_MOC_LITERAL(8, 135, 21), // "on_btnMFollow_clicked"
QT_MOC_LITERAL(9, 157, 22) // "on_btnComentar_clicked"

    },
    "Interfas\0on_btnEnviar_clicked\0\0"
    "on_btnPublic_clicked\0on_btnVchat_clicked\0"
    "on_btnSearch_clicked\0on_btnOlikes_clicked\0"
    "on_btnFollow_clicked\0on_btnMFollow_clicked\0"
    "on_btnComentar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Interfas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void Interfas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Interfas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnEnviar_clicked(); break;
        case 1: _t->on_btnPublic_clicked(); break;
        case 2: _t->on_btnVchat_clicked(); break;
        case 3: _t->on_btnSearch_clicked(); break;
        case 4: _t->on_btnOlikes_clicked(); break;
        case 5: _t->on_btnFollow_clicked(); break;
        case 6: _t->on_btnMFollow_clicked(); break;
        case 7: _t->on_btnComentar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Interfas::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Interfas.data,
    qt_meta_data_Interfas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Interfas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Interfas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Interfas.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Interfas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
