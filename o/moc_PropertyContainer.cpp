/****************************************************************************
** Meta object code from reading C++ file 'PropertyContainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/base/PropertyContainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyContainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertyContainer_t {
    QByteArrayData data[12];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyContainer_t qt_meta_stringdata_PropertyContainer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PropertyContainer"
QT_MOC_LITERAL(1, 18, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 31), // "PropertyContainer::PropertyName"
QT_MOC_LITERAL(4, 67, 11), // "setProperty"
QT_MOC_LITERAL(5, 79, 12), // "PropertyName"
QT_MOC_LITERAL(6, 92, 5), // "value"
QT_MOC_LITERAL(7, 98, 21), // "getSetPropertyCommand"
QT_MOC_LITERAL(8, 120, 8), // "Command*"
QT_MOC_LITERAL(9, 129, 16), // "setPropertyFuzzy"
QT_MOC_LITERAL(10, 146, 10), // "nameString"
QT_MOC_LITERAL(11, 157, 11) // "valueString"

    },
    "PropertyContainer\0propertyChanged\0\0"
    "PropertyContainer::PropertyName\0"
    "setProperty\0PropertyName\0value\0"
    "getSetPropertyCommand\0Command*\0"
    "setPropertyFuzzy\0nameString\0valueString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   42,    2, 0x0a /* Public */,
       7,    2,   47,    2, 0x0a /* Public */,
       9,    2,   52,    2, 0x0a /* Public */,
       7,    2,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    2,    6,
    0x80000000 | 8, 0x80000000 | 5, QMetaType::Int,    2,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    0x80000000 | 8, QMetaType::QString, QMetaType::QString,   10,   11,

       0        // eod
};

void PropertyContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertyContainer *_t = static_cast<PropertyContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< PropertyContainer::PropertyName(*)>(_a[1]))); break;
        case 1: _t->setProperty((*reinterpret_cast< const PropertyName(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: { Command* _r = _t->getSetPropertyCommand((*reinterpret_cast< const PropertyName(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Command**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setPropertyFuzzy((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: { Command* _r = _t->getSetPropertyCommand((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Command**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PropertyContainer::*_t)(PropertyContainer::PropertyName );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyContainer::propertyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PropertyContainer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PropertyContainer.data,
      qt_meta_data_PropertyContainer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PropertyContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyContainer.stringdata0))
        return static_cast<void*>(const_cast< PropertyContainer*>(this));
    return QObject::qt_metacast(_clname);
}

int PropertyContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PropertyContainer::propertyChanged(PropertyContainer::PropertyName _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
