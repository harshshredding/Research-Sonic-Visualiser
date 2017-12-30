/****************************************************************************
** Meta object code from reading C++ file 'TestPitch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/base/test/TestPitch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestPitch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestPitch_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestPitch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestPitch_t qt_meta_stringdata_TestPitch = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TestPitch"
QT_MOC_LITERAL(1, 10, 4), // "init"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 10), // "pitchLabel"
QT_MOC_LITERAL(4, 27, 22), // "pitchLabelForFrequency"
QT_MOC_LITERAL(5, 50, 17), // "frequencyForPitch"
QT_MOC_LITERAL(6, 68, 17), // "pitchForFrequency"
QT_MOC_LITERAL(7, 86, 18) // "pitchForFrequencyF"

    },
    "TestPitch\0init\0\0pitchLabel\0"
    "pitchLabelForFrequency\0frequencyForPitch\0"
    "pitchForFrequency\0pitchForFrequencyF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestPitch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestPitch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestPitch *_t = static_cast<TestPitch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->pitchLabel(); break;
        case 2: _t->pitchLabelForFrequency(); break;
        case 3: _t->frequencyForPitch(); break;
        case 4: _t->pitchForFrequency(); break;
        case 5: _t->pitchForFrequencyF(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestPitch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestPitch.data,
      qt_meta_data_TestPitch,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestPitch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestPitch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestPitch.stringdata0))
        return static_cast<void*>(const_cast< TestPitch*>(this));
    return QObject::qt_metacast(_clname);
}

int TestPitch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
