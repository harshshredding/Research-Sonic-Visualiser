/****************************************************************************
** Meta object code from reading C++ file 'ProgressPrinter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/base/ProgressPrinter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressPrinter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProgressPrinter_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProgressPrinter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProgressPrinter_t qt_meta_stringdata_ProgressPrinter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ProgressPrinter"
QT_MOC_LITERAL(1, 16, 10), // "setMessage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "setProgress"
QT_MOC_LITERAL(4, 40, 4) // "done"

    },
    "ProgressPrinter\0setMessage\0\0setProgress\0"
    "done"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgressPrinter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       3,    1,   32,    2, 0x0a /* Public */,
       4,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void ProgressPrinter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProgressPrinter *_t = static_cast<ProgressPrinter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->done(); break;
        default: ;
        }
    }
}

const QMetaObject ProgressPrinter::staticMetaObject = {
    { &ProgressReporter::staticMetaObject, qt_meta_stringdata_ProgressPrinter.data,
      qt_meta_data_ProgressPrinter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ProgressPrinter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgressPrinter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressPrinter.stringdata0))
        return static_cast<void*>(const_cast< ProgressPrinter*>(this));
    return ProgressReporter::qt_metacast(_clname);
}

int ProgressPrinter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProgressReporter::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
