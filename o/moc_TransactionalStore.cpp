/****************************************************************************
** Meta object code from reading C++ file 'TransactionalStore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dataquay/dataquay/TransactionalStore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionalStore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dataquay__TransactionalStore_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dataquay__TransactionalStore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dataquay__TransactionalStore_t qt_meta_stringdata_Dataquay__TransactionalStore = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Dataquay::TransactionalStore"
QT_MOC_LITERAL(1, 29, 20), // "transactionCommitted"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 9), // "ChangeSet"
QT_MOC_LITERAL(4, 61, 2) // "cs"

    },
    "Dataquay::TransactionalStore\0"
    "transactionCommitted\0\0ChangeSet\0cs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dataquay__TransactionalStore[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       1,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void Dataquay::TransactionalStore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionalStore *_t = static_cast<TransactionalStore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transactionCommitted((*reinterpret_cast< const ChangeSet(*)>(_a[1]))); break;
        case 1: _t->transactionCommitted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TransactionalStore::*_t)(const ChangeSet & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransactionalStore::transactionCommitted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TransactionalStore::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransactionalStore::transactionCommitted)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Dataquay::TransactionalStore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dataquay__TransactionalStore.data,
      qt_meta_data_Dataquay__TransactionalStore,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Dataquay::TransactionalStore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dataquay::TransactionalStore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dataquay__TransactionalStore.stringdata0))
        return static_cast<void*>(const_cast< TransactionalStore*>(this));
    if (!strcmp(_clname, "Store"))
        return static_cast< Store*>(const_cast< TransactionalStore*>(this));
    return QObject::qt_metacast(_clname);
}

int Dataquay::TransactionalStore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Dataquay::TransactionalStore::transactionCommitted(const ChangeSet & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dataquay::TransactionalStore::transactionCommitted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
