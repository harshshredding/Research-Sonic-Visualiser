/****************************************************************************
** Meta object code from reading C++ file 'Connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dataquay/dataquay/Connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dataquay__Connection_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dataquay__Connection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dataquay__Connection_t qt_meta_stringdata_Dataquay__Connection = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Dataquay::Connection"
QT_MOC_LITERAL(1, 21, 20), // "transactionCommitted"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "ChangeSet"
QT_MOC_LITERAL(4, 53, 6), // "commit"
QT_MOC_LITERAL(5, 60, 15), // "commitAndObtain"
QT_MOC_LITERAL(6, 76, 8) // "rollback"

    },
    "Dataquay::Connection\0transactionCommitted\0"
    "\0ChangeSet\0commit\0commitAndObtain\0"
    "rollback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dataquay__Connection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       1,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   43,    2, 0x0a /* Public */,
       5,    0,   44,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    0x80000000 | 3,
    QMetaType::Void,

       0        // eod
};

void Dataquay::Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Connection *_t = static_cast<Connection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transactionCommitted((*reinterpret_cast< const ChangeSet(*)>(_a[1]))); break;
        case 1: _t->transactionCommitted(); break;
        case 2: _t->commit(); break;
        case 3: { ChangeSet _r = _t->commitAndObtain();
            if (_a[0]) *reinterpret_cast< ChangeSet*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->rollback(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Connection::*_t)(const ChangeSet & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Connection::transactionCommitted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Connection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Connection::transactionCommitted)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Dataquay::Connection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dataquay__Connection.data,
      qt_meta_data_Dataquay__Connection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Dataquay::Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dataquay::Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dataquay__Connection.stringdata0))
        return static_cast<void*>(const_cast< Connection*>(this));
    if (!strcmp(_clname, "Store"))
        return static_cast< Store*>(const_cast< Connection*>(this));
    return QObject::qt_metacast(_clname);
}

int Dataquay::Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Dataquay::Connection::transactionCommitted(const ChangeSet & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dataquay::Connection::transactionCommitted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
