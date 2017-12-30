/****************************************************************************
** Meta object code from reading C++ file 'NotifyingTabBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/NotifyingTabBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NotifyingTabBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotifyingTabBar_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotifyingTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotifyingTabBar_t qt_meta_stringdata_NotifyingTabBar = {
    {
QT_MOC_LITERAL(0, 0, 15), // "NotifyingTabBar"
QT_MOC_LITERAL(1, 16, 12), // "mouseEntered"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "mouseLeft"
QT_MOC_LITERAL(4, 40, 16) // "activeTabClicked"

    },
    "NotifyingTabBar\0mouseEntered\0\0mouseLeft\0"
    "activeTabClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotifyingTabBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NotifyingTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NotifyingTabBar *_t = static_cast<NotifyingTabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseEntered(); break;
        case 1: _t->mouseLeft(); break;
        case 2: _t->activeTabClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NotifyingTabBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NotifyingTabBar::mouseEntered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NotifyingTabBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NotifyingTabBar::mouseLeft)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NotifyingTabBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NotifyingTabBar::activeTabClicked)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NotifyingTabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_NotifyingTabBar.data,
      qt_meta_data_NotifyingTabBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NotifyingTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotifyingTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotifyingTabBar.stringdata0))
        return static_cast<void*>(const_cast< NotifyingTabBar*>(this));
    return QTabBar::qt_metacast(_clname);
}

int NotifyingTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void NotifyingTabBar::mouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NotifyingTabBar::mouseLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NotifyingTabBar::activeTabClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
