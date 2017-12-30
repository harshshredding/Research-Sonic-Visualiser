/****************************************************************************
** Meta object code from reading C++ file 'RangeInputDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/RangeInputDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RangeInputDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RangeInputDialog_t {
    QByteArrayData data[8];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RangeInputDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RangeInputDialog_t qt_meta_stringdata_RangeInputDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "RangeInputDialog"
QT_MOC_LITERAL(1, 17, 12), // "rangeChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "start"
QT_MOC_LITERAL(4, 37, 3), // "end"
QT_MOC_LITERAL(5, 41, 8), // "setRange"
QT_MOC_LITERAL(6, 50, 17), // "rangeStartChanged"
QT_MOC_LITERAL(7, 68, 15) // "rangeEndChanged"

    },
    "RangeInputDialog\0rangeChanged\0\0start\0"
    "end\0setRange\0rangeStartChanged\0"
    "rangeEndChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RangeInputDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   39,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x09 /* Protected */,
       7,    1,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void RangeInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RangeInputDialog *_t = static_cast<RangeInputDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rangeChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->setRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->rangeStartChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->rangeEndChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RangeInputDialog::*_t)(float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RangeInputDialog::rangeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RangeInputDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RangeInputDialog.data,
      qt_meta_data_RangeInputDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RangeInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RangeInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RangeInputDialog.stringdata0))
        return static_cast<void*>(const_cast< RangeInputDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RangeInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RangeInputDialog::rangeChanged(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
