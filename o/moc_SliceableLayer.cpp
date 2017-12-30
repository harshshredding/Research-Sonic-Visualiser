/****************************************************************************
** Meta object code from reading C++ file 'SliceableLayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/layer/SliceableLayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SliceableLayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SliceableLayer_t {
    QByteArrayData data[6];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SliceableLayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SliceableLayer_t qt_meta_stringdata_SliceableLayer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SliceableLayer"
QT_MOC_LITERAL(1, 15, 22), // "sliceableModelReplaced"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "const Model*"
QT_MOC_LITERAL(4, 52, 17), // "modelToBeReplaced"
QT_MOC_LITERAL(5, 70, 11) // "replacement"

    },
    "SliceableLayer\0sliceableModelReplaced\0"
    "\0const Model*\0modelToBeReplaced\0"
    "replacement"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SliceableLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};

void SliceableLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SliceableLayer *_t = static_cast<SliceableLayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliceableModelReplaced((*reinterpret_cast< const Model*(*)>(_a[1])),(*reinterpret_cast< const Model*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SliceableLayer::*_t)(const Model * , const Model * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SliceableLayer::sliceableModelReplaced)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SliceableLayer::staticMetaObject = {
    { &Layer::staticMetaObject, qt_meta_stringdata_SliceableLayer.data,
      qt_meta_data_SliceableLayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SliceableLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SliceableLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SliceableLayer.stringdata0))
        return static_cast<void*>(const_cast< SliceableLayer*>(this));
    return Layer::qt_metacast(_clname);
}

int SliceableLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Layer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SliceableLayer::sliceableModelReplaced(const Model * _t1, const Model * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
