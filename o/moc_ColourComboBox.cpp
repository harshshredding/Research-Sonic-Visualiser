/****************************************************************************
** Meta object code from reading C++ file 'ColourComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/ColourComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColourComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColourComboBox_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColourComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColourComboBox_t qt_meta_stringdata_ColourComboBox = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ColourComboBox"
QT_MOC_LITERAL(1, 15, 13), // "colourChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "colourIndex"
QT_MOC_LITERAL(4, 42, 7), // "rebuild"
QT_MOC_LITERAL(5, 50, 14) // "comboActivated"

    },
    "ColourComboBox\0colourChanged\0\0colourIndex\0"
    "rebuild\0comboActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColourComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void ColourComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColourComboBox *_t = static_cast<ColourComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colourChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->rebuild(); break;
        case 2: _t->comboActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ColourComboBox::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColourComboBox::colourChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ColourComboBox::staticMetaObject = {
    { &NotifyingComboBox::staticMetaObject, qt_meta_stringdata_ColourComboBox.data,
      qt_meta_data_ColourComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ColourComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColourComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColourComboBox.stringdata0))
        return static_cast<void*>(const_cast< ColourComboBox*>(this));
    return NotifyingComboBox::qt_metacast(_clname);
}

int ColourComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NotifyingComboBox::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ColourComboBox::colourChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
