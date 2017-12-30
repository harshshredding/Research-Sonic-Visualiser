/****************************************************************************
** Meta object code from reading C++ file 'ItemEditDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/ItemEditDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ItemEditDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ItemEditDialog_t {
    QByteArrayData data[11];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemEditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemEditDialog_t qt_meta_stringdata_ItemEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ItemEditDialog"
QT_MOC_LITERAL(1, 15, 16), // "frameTimeChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "realTimeSecsChanged"
QT_MOC_LITERAL(4, 53, 20), // "realTimeUSecsChanged"
QT_MOC_LITERAL(5, 74, 20), // "frameDurationChanged"
QT_MOC_LITERAL(6, 95, 23), // "realDurationSecsChanged"
QT_MOC_LITERAL(7, 119, 24), // "realDurationUSecsChanged"
QT_MOC_LITERAL(8, 144, 12), // "valueChanged"
QT_MOC_LITERAL(9, 157, 11), // "textChanged"
QT_MOC_LITERAL(10, 169, 5) // "reset"

    },
    "ItemEditDialog\0frameTimeChanged\0\0"
    "realTimeSecsChanged\0realTimeUSecsChanged\0"
    "frameDurationChanged\0realDurationSecsChanged\0"
    "realDurationUSecsChanged\0valueChanged\0"
    "textChanged\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemEditDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x09 /* Protected */,
       3,    1,   62,    2, 0x09 /* Protected */,
       4,    1,   65,    2, 0x09 /* Protected */,
       5,    1,   68,    2, 0x09 /* Protected */,
       6,    1,   71,    2, 0x09 /* Protected */,
       7,    1,   74,    2, 0x09 /* Protected */,
       8,    1,   77,    2, 0x09 /* Protected */,
       9,    1,   80,    2, 0x09 /* Protected */,
      10,    0,   83,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void ItemEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemEditDialog *_t = static_cast<ItemEditDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->realTimeSecsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->realTimeUSecsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->frameDurationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->realDurationSecsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->realDurationUSecsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObject ItemEditDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ItemEditDialog.data,
      qt_meta_data_ItemEditDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ItemEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ItemEditDialog.stringdata0))
        return static_cast<void*>(const_cast< ItemEditDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ItemEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
