/****************************************************************************
** Meta object code from reading C++ file 'LevelPanToolButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/LevelPanToolButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LevelPanToolButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LevelPanToolButton_t {
    QByteArrayData data[14];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LevelPanToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LevelPanToolButton_t qt_meta_stringdata_LevelPanToolButton = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LevelPanToolButton"
QT_MOC_LITERAL(1, 19, 12), // "levelChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "panChanged"
QT_MOC_LITERAL(4, 44, 12), // "mouseEntered"
QT_MOC_LITERAL(5, 57, 9), // "mouseLeft"
QT_MOC_LITERAL(6, 67, 8), // "setLevel"
QT_MOC_LITERAL(7, 76, 6), // "setPan"
QT_MOC_LITERAL(8, 83, 19), // "setMonitoringLevels"
QT_MOC_LITERAL(9, 103, 14), // "setIncludeMute"
QT_MOC_LITERAL(10, 118, 10), // "setEnabled"
QT_MOC_LITERAL(11, 129, 7), // "enabled"
QT_MOC_LITERAL(12, 137, 16), // "selfLevelChanged"
QT_MOC_LITERAL(13, 154, 11) // "selfClicked"

    },
    "LevelPanToolButton\0levelChanged\0\0"
    "panChanged\0mouseEntered\0mouseLeft\0"
    "setLevel\0setPan\0setMonitoringLevels\0"
    "setIncludeMute\0setEnabled\0enabled\0"
    "selfLevelChanged\0selfClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LevelPanToolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    0,   75,    2, 0x06 /* Public */,
       5,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   77,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
       8,    2,   83,    2, 0x0a /* Public */,
       9,    1,   88,    2, 0x0a /* Public */,
      10,    1,   91,    2, 0x0a /* Public */,
      12,    1,   94,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,

       0        // eod
};

void LevelPanToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LevelPanToolButton *_t = static_cast<LevelPanToolButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->levelChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->panChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->mouseEntered(); break;
        case 3: _t->mouseLeft(); break;
        case 4: _t->setLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setPan((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setMonitoringLevels((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 7: _t->setIncludeMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->selfLevelChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->selfClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LevelPanToolButton::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LevelPanToolButton::levelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LevelPanToolButton::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LevelPanToolButton::panChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LevelPanToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LevelPanToolButton::mouseEntered)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LevelPanToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LevelPanToolButton::mouseLeft)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject LevelPanToolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_LevelPanToolButton.data,
      qt_meta_data_LevelPanToolButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LevelPanToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LevelPanToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LevelPanToolButton.stringdata0))
        return static_cast<void*>(const_cast< LevelPanToolButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int LevelPanToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
void LevelPanToolButton::levelChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LevelPanToolButton::panChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LevelPanToolButton::mouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LevelPanToolButton::mouseLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
