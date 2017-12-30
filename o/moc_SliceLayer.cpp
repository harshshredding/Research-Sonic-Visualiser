/****************************************************************************
** Meta object code from reading C++ file 'SliceLayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/layer/SliceLayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SliceLayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SliceLayer_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SliceLayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SliceLayer_t qt_meta_stringdata_SliceLayer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SliceLayer"
QT_MOC_LITERAL(1, 11, 22), // "sliceableModelReplaced"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "const Model*"
QT_MOC_LITERAL(4, 48, 21), // "modelAboutToBeDeleted"
QT_MOC_LITERAL(5, 70, 6) // "Model*"

    },
    "SliceLayer\0sliceableModelReplaced\0\0"
    "const Model*\0modelAboutToBeDeleted\0"
    "Model*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SliceLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       4,    1,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void SliceLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SliceLayer *_t = static_cast<SliceLayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliceableModelReplaced((*reinterpret_cast< const Model*(*)>(_a[1])),(*reinterpret_cast< const Model*(*)>(_a[2]))); break;
        case 1: _t->modelAboutToBeDeleted((*reinterpret_cast< Model*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Model* >(); break;
            }
            break;
        }
    }
}

const QMetaObject SliceLayer::staticMetaObject = {
    { &SingleColourLayer::staticMetaObject, qt_meta_stringdata_SliceLayer.data,
      qt_meta_data_SliceLayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SliceLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SliceLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SliceLayer.stringdata0))
        return static_cast<void*>(const_cast< SliceLayer*>(this));
    return SingleColourLayer::qt_metacast(_clname);
}

int SliceLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SingleColourLayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
