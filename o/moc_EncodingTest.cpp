/****************************************************************************
** Meta object code from reading C++ file 'EncodingTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/data/fileio/test/EncodingTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EncodingTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EncodingTest_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EncodingTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EncodingTest_t qt_meta_stringdata_EncodingTest = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EncodingTest"
QT_MOC_LITERAL(1, 13, 4), // "init"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 14), // "readAudio_data"
QT_MOC_LITERAL(4, 34, 9), // "readAudio"
QT_MOC_LITERAL(5, 44, 17), // "readMetadata_data"
QT_MOC_LITERAL(6, 62, 12), // "readMetadata"
QT_MOC_LITERAL(7, 75, 19), // "readWriteAudio_data"
QT_MOC_LITERAL(8, 95, 14) // "readWriteAudio"

    },
    "EncodingTest\0init\0\0readAudio_data\0"
    "readAudio\0readMetadata_data\0readMetadata\0"
    "readWriteAudio_data\0readWriteAudio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EncodingTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EncodingTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EncodingTest *_t = static_cast<EncodingTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->readAudio_data(); break;
        case 2: _t->readAudio(); break;
        case 3: _t->readMetadata_data(); break;
        case 4: _t->readMetadata(); break;
        case 5: _t->readWriteAudio_data(); break;
        case 6: _t->readWriteAudio(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EncodingTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EncodingTest.data,
      qt_meta_data_EncodingTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EncodingTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EncodingTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EncodingTest.stringdata0))
        return static_cast<void*>(const_cast< EncodingTest*>(this));
    return QObject::qt_metacast(_clname);
}

int EncodingTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
