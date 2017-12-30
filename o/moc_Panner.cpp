/****************************************************************************
** Meta object code from reading C++ file 'Panner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/Panner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Panner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Panner_t {
    QByteArrayData data[21];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Panner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Panner_t qt_meta_stringdata_Panner = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Panner"
QT_MOC_LITERAL(1, 7, 18), // "rectExtentsChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "rectCentreMoved"
QT_MOC_LITERAL(4, 43, 13), // "doubleClicked"
QT_MOC_LITERAL(5, 57, 12), // "mouseEntered"
QT_MOC_LITERAL(6, 70, 9), // "mouseLeft"
QT_MOC_LITERAL(7, 80, 14), // "setRectExtents"
QT_MOC_LITERAL(8, 95, 2), // "x0"
QT_MOC_LITERAL(9, 98, 2), // "y0"
QT_MOC_LITERAL(10, 101, 5), // "width"
QT_MOC_LITERAL(11, 107, 6), // "height"
QT_MOC_LITERAL(12, 114, 12), // "setRectWidth"
QT_MOC_LITERAL(13, 127, 13), // "setRectHeight"
QT_MOC_LITERAL(14, 141, 14), // "setRectCentreX"
QT_MOC_LITERAL(15, 156, 1), // "x"
QT_MOC_LITERAL(16, 158, 14), // "setRectCentreY"
QT_MOC_LITERAL(17, 173, 1), // "y"
QT_MOC_LITERAL(18, 175, 6), // "scroll"
QT_MOC_LITERAL(19, 182, 2), // "up"
QT_MOC_LITERAL(20, 185, 14) // "resetToDefault"

    },
    "Panner\0rectExtentsChanged\0\0rectCentreMoved\0"
    "doubleClicked\0mouseEntered\0mouseLeft\0"
    "setRectExtents\0x0\0y0\0width\0height\0"
    "setRectWidth\0setRectHeight\0setRectCentreX\0"
    "x\0setRectCentreY\0y\0scroll\0up\0"
    "resetToDefault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Panner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   74,    2, 0x06 /* Public */,
       3,    2,   83,    2, 0x06 /* Public */,
       4,    0,   88,    2, 0x06 /* Public */,
       5,    0,   89,    2, 0x06 /* Public */,
       6,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    4,   91,    2, 0x0a /* Public */,
      12,    1,  100,    2, 0x0a /* Public */,
      13,    1,  103,    2, 0x0a /* Public */,
      14,    1,  106,    2, 0x0a /* Public */,
      16,    1,  109,    2, 0x0a /* Public */,
      18,    1,  112,    2, 0x0a /* Public */,
      20,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Float,   15,
    QMetaType::Void, QMetaType::Float,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

       0        // eod
};

void Panner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Panner *_t = static_cast<Panner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rectExtentsChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 1: _t->rectCentreMoved((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->doubleClicked(); break;
        case 3: _t->mouseEntered(); break;
        case 4: _t->mouseLeft(); break;
        case 5: _t->setRectExtents((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 6: _t->setRectWidth((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->setRectHeight((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setRectCentreX((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->setRectCentreY((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->scroll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->resetToDefault(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Panner::*_t)(float , float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Panner::rectExtentsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Panner::*_t)(float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Panner::rectCentreMoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Panner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Panner::doubleClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Panner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Panner::mouseEntered)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Panner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Panner::mouseLeft)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Panner::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Panner.data,
      qt_meta_data_Panner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Panner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Panner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Panner.stringdata0))
        return static_cast<void*>(const_cast< Panner*>(this));
    return QWidget::qt_metacast(_clname);
}

int Panner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Panner::rectExtentsChanged(float _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Panner::rectCentreMoved(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Panner::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Panner::mouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Panner::mouseLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
