/****************************************************************************
** Meta object code from reading C++ file 'LEDButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/LEDButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LEDButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LEDButton_t {
    QByteArrayData data[15];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LEDButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LEDButton_t qt_meta_stringdata_LEDButton = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LEDButton"
QT_MOC_LITERAL(1, 10, 12), // "stateChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "mouseEntered"
QT_MOC_LITERAL(4, 37, 9), // "mouseLeft"
QT_MOC_LITERAL(5, 47, 6), // "toggle"
QT_MOC_LITERAL(6, 54, 2), // "on"
QT_MOC_LITERAL(7, 57, 3), // "off"
QT_MOC_LITERAL(8, 61, 8), // "setState"
QT_MOC_LITERAL(9, 70, 11), // "toggleState"
QT_MOC_LITERAL(10, 82, 8), // "setColor"
QT_MOC_LITERAL(11, 91, 5), // "color"
QT_MOC_LITERAL(12, 97, 13), // "setDarkFactor"
QT_MOC_LITERAL(13, 111, 10), // "darkfactor"
QT_MOC_LITERAL(14, 122, 10) // "darkFactor"

    },
    "LEDButton\0stateChanged\0\0mouseEntered\0"
    "mouseLeft\0toggle\0on\0off\0setState\0"
    "toggleState\0setColor\0color\0setDarkFactor\0"
    "darkfactor\0darkFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LEDButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    0,   67,    2, 0x06 /* Public */,
       4,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   69,    2, 0x0a /* Public */,
       6,    0,   70,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
       9,    0,   75,    2, 0x0a /* Public */,
      10,    1,   76,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   11,
    QMetaType::Void, QMetaType::Int,   13,

 // properties: name, type, flags
      11, QMetaType::QColor, 0x00095103,
      14, QMetaType::Int, 0x00095103,

       0        // eod
};

void LEDButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LEDButton *_t = static_cast<LEDButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->mouseEntered(); break;
        case 2: _t->mouseLeft(); break;
        case 3: _t->toggle(); break;
        case 4: _t->on(); break;
        case 5: _t->off(); break;
        case 6: _t->setState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->toggleState(); break;
        case 8: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 9: _t->setDarkFactor((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LEDButton::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LEDButton::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LEDButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LEDButton::mouseEntered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LEDButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LEDButton::mouseLeft)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LEDButton *_t = static_cast<LEDButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->darkFactor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LEDButton *_t = static_cast<LEDButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setDarkFactor(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject LEDButton::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LEDButton.data,
      qt_meta_data_LEDButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LEDButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LEDButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LEDButton.stringdata0))
        return static_cast<void*>(const_cast< LEDButton*>(this));
    return QWidget::qt_metacast(_clname);
}

int LEDButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LEDButton::stateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LEDButton::mouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LEDButton::mouseLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
