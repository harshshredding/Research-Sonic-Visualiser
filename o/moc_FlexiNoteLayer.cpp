/****************************************************************************
** Meta object code from reading C++ file 'FlexiNoteLayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/layer/FlexiNoteLayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlexiNoteLayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlexiNoteLayer_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlexiNoteLayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlexiNoteLayer_t qt_meta_stringdata_FlexiNoteLayer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FlexiNoteLayer"
QT_MOC_LITERAL(1, 15, 15), // "reAnalyseRegion"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "sv_frame_t"
QT_MOC_LITERAL(4, 43, 21) // "materialiseReAnalysis"

    },
    "FlexiNoteLayer\0reAnalyseRegion\0\0"
    "sv_frame_t\0materialiseReAnalysis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlexiNoteLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   24,    2, 0x06 /* Public */,
       4,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void FlexiNoteLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FlexiNoteLayer *_t = static_cast<FlexiNoteLayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reAnalyseRegion((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 1: _t->materialiseReAnalysis(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FlexiNoteLayer::*_t)(sv_frame_t , sv_frame_t , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlexiNoteLayer::reAnalyseRegion)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FlexiNoteLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlexiNoteLayer::materialiseReAnalysis)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject FlexiNoteLayer::staticMetaObject = {
    { &SingleColourLayer::staticMetaObject, qt_meta_stringdata_FlexiNoteLayer.data,
      qt_meta_data_FlexiNoteLayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FlexiNoteLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlexiNoteLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlexiNoteLayer.stringdata0))
        return static_cast<void*>(const_cast< FlexiNoteLayer*>(this));
    if (!strcmp(_clname, "VerticalScaleLayer"))
        return static_cast< VerticalScaleLayer*>(const_cast< FlexiNoteLayer*>(this));
    return SingleColourLayer::qt_metacast(_clname);
}

int FlexiNoteLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FlexiNoteLayer::reAnalyseRegion(sv_frame_t _t1, sv_frame_t _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlexiNoteLayer::materialiseReAnalysis()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
