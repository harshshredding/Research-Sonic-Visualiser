/****************************************************************************
** Meta object code from reading C++ file 'TestRangeMapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/base/test/TestRangeMapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestRangeMapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestRangeMapper_t {
    QByteArrayData data[15];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestRangeMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestRangeMapper_t qt_meta_stringdata_TestRangeMapper = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TestRangeMapper"
QT_MOC_LITERAL(1, 16, 15), // "linearUpForward"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "linearDownForward"
QT_MOC_LITERAL(4, 51, 16), // "linearUpBackward"
QT_MOC_LITERAL(5, 68, 18), // "linearDownBackward"
QT_MOC_LITERAL(6, 87, 12), // "logUpForward"
QT_MOC_LITERAL(7, 100, 14), // "logDownForward"
QT_MOC_LITERAL(8, 115, 13), // "logUpBackward"
QT_MOC_LITERAL(9, 129, 15), // "logDownBackward"
QT_MOC_LITERAL(10, 145, 20), // "interpolatingForward"
QT_MOC_LITERAL(11, 166, 21), // "interpolatingBackward"
QT_MOC_LITERAL(12, 188, 17), // "autoLinearForward"
QT_MOC_LITERAL(13, 206, 14), // "autoLogForward"
QT_MOC_LITERAL(14, 221, 24) // "autoInterpolatingForward"

    },
    "TestRangeMapper\0linearUpForward\0\0"
    "linearDownForward\0linearUpBackward\0"
    "linearDownBackward\0logUpForward\0"
    "logDownForward\0logUpBackward\0"
    "logDownBackward\0interpolatingForward\0"
    "interpolatingBackward\0autoLinearForward\0"
    "autoLogForward\0autoInterpolatingForward"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestRangeMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

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

       0        // eod
};

void TestRangeMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestRangeMapper *_t = static_cast<TestRangeMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linearUpForward(); break;
        case 1: _t->linearDownForward(); break;
        case 2: _t->linearUpBackward(); break;
        case 3: _t->linearDownBackward(); break;
        case 4: _t->logUpForward(); break;
        case 5: _t->logDownForward(); break;
        case 6: _t->logUpBackward(); break;
        case 7: _t->logDownBackward(); break;
        case 8: _t->interpolatingForward(); break;
        case 9: _t->interpolatingBackward(); break;
        case 10: _t->autoLinearForward(); break;
        case 11: _t->autoLogForward(); break;
        case 12: _t->autoInterpolatingForward(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestRangeMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestRangeMapper.data,
      qt_meta_data_TestRangeMapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestRangeMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestRangeMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestRangeMapper.stringdata0))
        return static_cast<void*>(const_cast< TestRangeMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int TestRangeMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
