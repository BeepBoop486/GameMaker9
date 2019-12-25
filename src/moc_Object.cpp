/****************************************************************************
** Meta object code from reading C++ file 'Object.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "Object.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Object.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Object_t {
    QByteArrayData data[12];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Object_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Object_t qt_meta_stringdata_Object = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Object"
QT_MOC_LITERAL(1, 7, 16), // "OkButton_clicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 22), // "AddEventButton_clicked"
QT_MOC_LITERAL(4, 48, 25), // "RemoveEventButton_clicked"
QT_MOC_LITERAL(5, 74, 18), // "EditButton_clicked"
QT_MOC_LITERAL(6, 93, 24), // "AddEventAction_triggered"
QT_MOC_LITERAL(7, 118, 4), // "type"
QT_MOC_LITERAL(8, 123, 20), // "AddSprButton_clicked"
QT_MOC_LITERAL(9, 144, 21), // "EditSprButton_clicked"
QT_MOC_LITERAL(10, 166, 19), // "SpriteBox_activated"
QT_MOC_LITERAL(11, 186, 5) // "index"

    },
    "Object\0OkButton_clicked\0\0"
    "AddEventButton_clicked\0RemoveEventButton_clicked\0"
    "EditButton_clicked\0AddEventAction_triggered\0"
    "type\0AddSprButton_clicked\0"
    "EditSprButton_clicked\0SpriteBox_activated\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Object[] = {

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
       6,    1,   58,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void Object::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Object *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OkButton_clicked(); break;
        case 1: _t->AddEventButton_clicked(); break;
        case 2: _t->RemoveEventButton_clicked(); break;
        case 3: _t->EditButton_clicked(); break;
        case 4: _t->AddEventAction_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->AddSprButton_clicked(); break;
        case 6: _t->EditSprButton_clicked(); break;
        case 7: _t->SpriteBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Object::staticMetaObject = { {
    QMetaObject::SuperData::link<Item::staticMetaObject>(),
    qt_meta_stringdata_Object.data,
    qt_meta_data_Object,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Object::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Object::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Object.stringdata0))
        return static_cast<void*>(this);
    return Item::qt_metacast(_clname);
}

int Object::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Item::qt_metacall(_c, _id, _a);
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
