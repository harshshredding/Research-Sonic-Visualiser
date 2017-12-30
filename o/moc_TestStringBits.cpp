/****************************************************************************
** Meta object code from reading C++ file 'TestStringBits.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/base/test/TestStringBits.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestStringBits.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestStringBits_t {
    QByteArrayData data[16];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestStringBits_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestStringBits_t qt_meta_stringdata_TestStringBits = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TestStringBits"
QT_MOC_LITERAL(1, 15, 6), // "simple"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "dquoted"
QT_MOC_LITERAL(4, 31, 6), // "drunon"
QT_MOC_LITERAL(5, 38, 7), // "squoted"
QT_MOC_LITERAL(6, 46, 6), // "srunon"
QT_MOC_LITERAL(7, 53, 6), // "dempty"
QT_MOC_LITERAL(8, 60, 6), // "sempty"
QT_MOC_LITERAL(9, 67, 8), // "descaped"
QT_MOC_LITERAL(10, 76, 8), // "sescaped"
QT_MOC_LITERAL(11, 85, 7), // "dnested"
QT_MOC_LITERAL(12, 93, 7), // "snested"
QT_MOC_LITERAL(13, 101, 8), // "snested2"
QT_MOC_LITERAL(14, 110, 7), // "qquoted"
QT_MOC_LITERAL(15, 118, 10) // "multispace"

    },
    "TestStringBits\0simple\0\0dquoted\0drunon\0"
    "squoted\0srunon\0dempty\0sempty\0descaped\0"
    "sescaped\0dnested\0snested\0snested2\0"
    "qquoted\0multispace"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestStringBits[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestStringBits::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestStringBits *_t = static_cast<TestStringBits *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->simple(); break;
        case 1: _t->dquoted(); break;
        case 2: _t->drunon(); break;
        case 3: _t->squoted(); break;
        case 4: _t->srunon(); break;
        case 5: _t->dempty(); break;
        case 6: _t->sempty(); break;
        case 7: _t->descaped(); break;
        case 8: _t->sescaped(); break;
        case 9: _t->dnested(); break;
        case 10: _t->snested(); break;
        case 11: _t->snested2(); break;
        case 12: _t->qquoted(); break;
        case 13: _t->multispace(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestStringBits::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestStringBits.data,
      qt_meta_data_TestStringBits,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestStringBits::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestStringBits::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestStringBits.stringdata0))
        return static_cast<void*>(const_cast< TestStringBits*>(this));
    return QObject::qt_metacast(_clname);
}

int TestStringBits::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
