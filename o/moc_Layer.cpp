/****************************************************************************
** Meta object code from reading C++ file 'Layer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/layer/Layer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Layer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Layer_t {
    QByteArrayData data[18];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Layer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Layer_t qt_meta_stringdata_Layer = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Layer"
QT_MOC_LITERAL(1, 6, 12), // "modelChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 22), // "modelCompletionChanged"
QT_MOC_LITERAL(4, 43, 31), // "modelAlignmentCompletionChanged"
QT_MOC_LITERAL(5, 75, 18), // "modelChangedWithin"
QT_MOC_LITERAL(6, 94, 10), // "sv_frame_t"
QT_MOC_LITERAL(7, 105, 10), // "startFrame"
QT_MOC_LITERAL(8, 116, 8), // "endFrame"
QT_MOC_LITERAL(9, 125, 13), // "modelReplaced"
QT_MOC_LITERAL(10, 139, 22), // "layerParametersChanged"
QT_MOC_LITERAL(11, 162, 27), // "layerParameterRangesChanged"
QT_MOC_LITERAL(12, 190, 28), // "layerMeasurementRectsChanged"
QT_MOC_LITERAL(13, 219, 16), // "layerNameChanged"
QT_MOC_LITERAL(14, 236, 19), // "verticalZoomChanged"
QT_MOC_LITERAL(15, 256, 9), // "showLayer"
QT_MOC_LITERAL(16, 266, 22), // "LayerGeometryProvider*"
QT_MOC_LITERAL(17, 289, 4) // "show"

    },
    "Layer\0modelChanged\0\0modelCompletionChanged\0"
    "modelAlignmentCompletionChanged\0"
    "modelChangedWithin\0sv_frame_t\0startFrame\0"
    "endFrame\0modelReplaced\0layerParametersChanged\0"
    "layerParameterRangesChanged\0"
    "layerMeasurementRectsChanged\0"
    "layerNameChanged\0verticalZoomChanged\0"
    "showLayer\0LayerGeometryProvider*\0show"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Layer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    2,   72,    2, 0x06 /* Public */,
       9,    0,   77,    2, 0x06 /* Public */,
      10,    0,   78,    2, 0x06 /* Public */,
      11,    0,   79,    2, 0x06 /* Public */,
      12,    0,   80,    2, 0x06 /* Public */,
      13,    0,   81,    2, 0x06 /* Public */,
      14,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16, QMetaType::Bool,    2,   17,

       0        // eod
};

void Layer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Layer *_t = static_cast<Layer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->modelCompletionChanged(); break;
        case 2: _t->modelAlignmentCompletionChanged(); break;
        case 3: _t->modelChangedWithin((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 4: _t->modelReplaced(); break;
        case 5: _t->layerParametersChanged(); break;
        case 6: _t->layerParameterRangesChanged(); break;
        case 7: _t->layerMeasurementRectsChanged(); break;
        case 8: _t->layerNameChanged(); break;
        case 9: _t->verticalZoomChanged(); break;
        case 10: _t->showLayer((*reinterpret_cast< LayerGeometryProvider*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Layer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Layer::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Layer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Layer::modelCompletionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Layer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Layer::modelAlignmentCompletionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Layer::*_t)(sv_frame_t , sv_frame_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Layer::modelChangedWithin)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Layer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Layer::modelReplaced)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Layer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Layer::layerParametersChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Layer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Layer::layerParameterRangesChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Layer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Layer::layerMeasurementRectsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Layer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Layer::layerNameChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Layer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Layer::verticalZoomChanged)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject Layer::staticMetaObject = {
    { &PropertyContainer::staticMetaObject, qt_meta_stringdata_Layer.data,
      qt_meta_data_Layer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Layer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Layer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Layer.stringdata0))
        return static_cast<void*>(const_cast< Layer*>(this));
    if (!strcmp(_clname, "XmlExportable"))
        return static_cast< XmlExportable*>(const_cast< Layer*>(this));
    return PropertyContainer::qt_metacast(_clname);
}

int Layer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Layer::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Layer::modelCompletionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Layer::modelAlignmentCompletionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Layer::modelChangedWithin(sv_frame_t _t1, sv_frame_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Layer::modelReplaced()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Layer::layerParametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Layer::layerParameterRangesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Layer::layerMeasurementRectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Layer::layerNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Layer::verticalZoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
