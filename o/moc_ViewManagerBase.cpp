/****************************************************************************
** Meta object code from reading C++ file 'ViewManagerBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/base/ViewManagerBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewManagerBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewManagerBase_t {
    QByteArrayData data[7];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewManagerBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewManagerBase_t qt_meta_stringdata_ViewManagerBase = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ViewManagerBase"
QT_MOC_LITERAL(1, 16, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "playLoopModeChanged"
QT_MOC_LITERAL(4, 54, 24), // "playSelectionModeChanged"
QT_MOC_LITERAL(5, 79, 19), // "playSoloModeChanged"
QT_MOC_LITERAL(6, 99, 16) // "alignModeChanged"

    },
    "ViewManagerBase\0selectionChanged\0\0"
    "playLoopModeChanged\0playSelectionModeChanged\0"
    "playSoloModeChanged\0alignModeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewManagerBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       3,    1,   61,    2, 0x06 /* Public */,
       4,    0,   64,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,
       5,    0,   68,    2, 0x06 /* Public */,
       5,    1,   69,    2, 0x06 /* Public */,
       6,    0,   72,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void ViewManagerBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewManagerBase *_t = static_cast<ViewManagerBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->playLoopModeChanged(); break;
        case 2: _t->playLoopModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->playSelectionModeChanged(); break;
        case 4: _t->playSelectionModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->playSoloModeChanged(); break;
        case 6: _t->playSoloModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->alignModeChanged(); break;
        case 8: _t->alignModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ViewManagerBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewManagerBase::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ViewManagerBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewManagerBase::playLoopModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ViewManagerBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewManagerBase::playLoopModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ViewManagerBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewManagerBase::playSelectionModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ViewManagerBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewManagerBase::playSelectionModeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ViewManagerBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewManagerBase::playSoloModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ViewManagerBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewManagerBase::playSoloModeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ViewManagerBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewManagerBase::alignModeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (ViewManagerBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewManagerBase::alignModeChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject ViewManagerBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ViewManagerBase.data,
      qt_meta_data_ViewManagerBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ViewManagerBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewManagerBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewManagerBase.stringdata0))
        return static_cast<void*>(const_cast< ViewManagerBase*>(this));
    return QObject::qt_metacast(_clname);
}

int ViewManagerBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ViewManagerBase::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ViewManagerBase::playLoopModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ViewManagerBase::playLoopModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ViewManagerBase::playSelectionModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ViewManagerBase::playSelectionModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ViewManagerBase::playSoloModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ViewManagerBase::playSoloModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ViewManagerBase::alignModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ViewManagerBase::alignModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
