/****************************************************************************
** Meta object code from reading C++ file 'Sprite.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "Sprite.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Sprite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sprite_t {
    QByteArrayData data[10];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sprite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sprite_t qt_meta_stringdata_Sprite = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Sprite"
QT_MOC_LITERAL(1, 7, 16), // "OkButton_clicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 17), // "AddButton_clicked"
QT_MOC_LITERAL(4, 43, 18), // "EditButton_clicked"
QT_MOC_LITERAL(5, 62, 24), // "AutoCenterButton_Clicked"
QT_MOC_LITERAL(6, 87, 20), // "TextureBox_activated"
QT_MOC_LITERAL(7, 108, 5), // "index"
QT_MOC_LITERAL(8, 114, 27), // "CenterXEdit_editingFinished"
QT_MOC_LITERAL(9, 142, 27) // "CenterYEdit_editingFinished"

    },
    "Sprite\0OkButton_clicked\0\0AddButton_clicked\0"
    "EditButton_clicked\0AutoCenterButton_Clicked\0"
    "TextureBox_activated\0index\0"
    "CenterXEdit_editingFinished\0"
    "CenterYEdit_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sprite[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Sprite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sprite *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OkButton_clicked(); break;
        case 1: _t->AddButton_clicked(); break;
        case 2: _t->EditButton_clicked(); break;
        case 3: _t->AutoCenterButton_Clicked(); break;
        case 4: _t->TextureBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->CenterXEdit_editingFinished(); break;
        case 6: _t->CenterYEdit_editingFinished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Sprite::staticMetaObject = { {
    QMetaObject::SuperData::link<Item::staticMetaObject>(),
    qt_meta_stringdata_Sprite.data,
    qt_meta_data_Sprite,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Sprite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sprite::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sprite.stringdata0))
        return static_cast<void*>(this);
    return Item::qt_metacast(_clname);
}

int Sprite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
