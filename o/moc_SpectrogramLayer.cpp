/****************************************************************************
** Meta object code from reading C++ file 'SpectrogramLayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/layer/SpectrogramLayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpectrogramLayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpectrogramLayer_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpectrogramLayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpectrogramLayer_t qt_meta_stringdata_SpectrogramLayer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SpectrogramLayer"
QT_MOC_LITERAL(1, 17, 12), // "cacheInvalid"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "sv_frame_t"
QT_MOC_LITERAL(4, 42, 10), // "startFrame"
QT_MOC_LITERAL(5, 53, 8), // "endFrame"
QT_MOC_LITERAL(6, 62, 17), // "preferenceChanged"
QT_MOC_LITERAL(7, 80, 31), // "PropertyContainer::PropertyName"
QT_MOC_LITERAL(8, 112, 4) // "name"

    },
    "SpectrogramLayer\0cacheInvalid\0\0"
    "sv_frame_t\0startFrame\0endFrame\0"
    "preferenceChanged\0PropertyContainer::PropertyName\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpectrogramLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       1,    2,   30,    2, 0x09 /* Protected */,
       6,    1,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void SpectrogramLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpectrogramLayer *_t = static_cast<SpectrogramLayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cacheInvalid(); break;
        case 1: _t->cacheInvalid((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 2: _t->preferenceChanged((*reinterpret_cast< PropertyContainer::PropertyName(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SpectrogramLayer::staticMetaObject = {
    { &VerticalBinLayer::staticMetaObject, qt_meta_stringdata_SpectrogramLayer.data,
      qt_meta_data_SpectrogramLayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpectrogramLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpectrogramLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrogramLayer.stringdata0))
        return static_cast<void*>(const_cast< SpectrogramLayer*>(this));
    if (!strcmp(_clname, "PowerOfSqrtTwoZoomConstraint"))
        return static_cast< PowerOfSqrtTwoZoomConstraint*>(const_cast< SpectrogramLayer*>(this));
    return VerticalBinLayer::qt_metacast(_clname);
}

int SpectrogramLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VerticalBinLayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
