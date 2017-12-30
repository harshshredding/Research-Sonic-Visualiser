/****************************************************************************
** Meta object code from reading C++ file 'TestVampRealTime.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/base/test/TestVampRealTime.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestVampRealTime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestVampRealTime_t {
    QByteArrayData data[14];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestVampRealTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestVampRealTime_t qt_meta_stringdata_TestVampRealTime = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TestVampRealTime"
QT_MOC_LITERAL(1, 17, 4), // "zero"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "ctor"
QT_MOC_LITERAL(4, 28, 11), // "fromSeconds"
QT_MOC_LITERAL(5, 40, 16), // "fromMilliseconds"
QT_MOC_LITERAL(6, 57, 11), // "fromTimeval"
QT_MOC_LITERAL(7, 69, 6), // "assign"
QT_MOC_LITERAL(8, 76, 4), // "plus"
QT_MOC_LITERAL(9, 81, 5), // "minus"
QT_MOC_LITERAL(10, 87, 6), // "negate"
QT_MOC_LITERAL(11, 94, 7), // "compare"
QT_MOC_LITERAL(12, 102, 5), // "frame"
QT_MOC_LITERAL(13, 108, 6) // "toText"

    },
    "TestVampRealTime\0zero\0\0ctor\0fromSeconds\0"
    "fromMilliseconds\0fromTimeval\0assign\0"
    "plus\0minus\0negate\0compare\0frame\0toText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestVampRealTime[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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

       0        // eod
};

void TestVampRealTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestVampRealTime *_t = static_cast<TestVampRealTime *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zero(); break;
        case 1: _t->ctor(); break;
        case 2: _t->fromSeconds(); break;
        case 3: _t->fromMilliseconds(); break;
        case 4: _t->fromTimeval(); break;
        case 5: _t->assign(); break;
        case 6: _t->plus(); break;
        case 7: _t->minus(); break;
        case 8: _t->negate(); break;
        case 9: _t->compare(); break;
        case 10: _t->frame(); break;
        case 11: _t->toText(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestVampRealTime::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestVampRealTime.data,
      qt_meta_data_TestVampRealTime,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestVampRealTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestVampRealTime::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestVampRealTime.stringdata0))
        return static_cast<void*>(const_cast< TestVampRealTime*>(this));
    return QObject::qt_metacast(_clname);
}

int TestVampRealTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
