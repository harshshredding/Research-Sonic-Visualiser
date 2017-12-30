/****************************************************************************
** Meta object code from reading C++ file 'ObjectMapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dataquay/dataquay/objectmapper/ObjectMapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectMapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dataquay__ObjectMapper_t {
    QByteArrayData data[14];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dataquay__ObjectMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dataquay__ObjectMapper_t qt_meta_stringdata_Dataquay__ObjectMapper = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Dataquay::ObjectMapper"
QT_MOC_LITERAL(1, 23, 9), // "committed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "add"
QT_MOC_LITERAL(4, 38, 11), // "QObjectList"
QT_MOC_LITERAL(5, 50, 6), // "manage"
QT_MOC_LITERAL(6, 57, 8), // "unmanage"
QT_MOC_LITERAL(7, 66, 6), // "commit"
QT_MOC_LITERAL(8, 73, 15), // "commitAndObtain"
QT_MOC_LITERAL(9, 89, 9), // "ChangeSet"
QT_MOC_LITERAL(10, 99, 14), // "objectModified"
QT_MOC_LITERAL(11, 114, 15), // "objectDestroyed"
QT_MOC_LITERAL(12, 130, 20), // "transactionCommitted"
QT_MOC_LITERAL(13, 151, 2) // "cs"

    },
    "Dataquay::ObjectMapper\0committed\0\0add\0"
    "QObjectList\0manage\0unmanage\0commit\0"
    "commitAndObtain\0ChangeSet\0objectModified\0"
    "objectDestroyed\0transactionCommitted\0"
    "cs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dataquay__ObjectMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   75,    2, 0x0a /* Public */,
       3,    1,   78,    2, 0x0a /* Public */,
       5,    1,   81,    2, 0x0a /* Public */,
       5,    1,   84,    2, 0x0a /* Public */,
       6,    1,   87,    2, 0x0a /* Public */,
       6,    1,   90,    2, 0x0a /* Public */,
       7,    0,   93,    2, 0x0a /* Public */,
       8,    0,   94,    2, 0x0a /* Public */,
      10,    1,   95,    2, 0x0a /* Public */,
      11,    1,   98,    2, 0x0a /* Public */,
      12,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    0x80000000 | 9,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, 0x80000000 | 9,   13,

       0        // eod
};

void Dataquay::ObjectMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectMapper *_t = static_cast<ObjectMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->committed(); break;
        case 1: _t->add((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->add((*reinterpret_cast< QObjectList(*)>(_a[1]))); break;
        case 3: _t->manage((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->manage((*reinterpret_cast< QObjectList(*)>(_a[1]))); break;
        case 5: _t->unmanage((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->unmanage((*reinterpret_cast< QObjectList(*)>(_a[1]))); break;
        case 7: _t->commit(); break;
        case 8: { ChangeSet _r = _t->commitAndObtain();
            if (_a[0]) *reinterpret_cast< ChangeSet*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->objectModified((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 10: _t->objectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 11: _t->transactionCommitted((*reinterpret_cast< const ChangeSet(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ObjectMapper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ObjectMapper::committed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Dataquay::ObjectMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dataquay__ObjectMapper.data,
      qt_meta_data_Dataquay__ObjectMapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Dataquay::ObjectMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dataquay::ObjectMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dataquay__ObjectMapper.stringdata0))
        return static_cast<void*>(const_cast< ObjectMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int Dataquay::ObjectMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Dataquay::ObjectMapper::committed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
