/****************************************************************************
** Meta object code from reading C++ file 'TransformFinder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/TransformFinder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransformFinder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransformFinder_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransformFinder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransformFinder_t qt_meta_stringdata_TransformFinder = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TransformFinder"
QT_MOC_LITERAL(1, 16, 17), // "searchTextChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "selectedLabelChanged"
QT_MOC_LITERAL(4, 56, 18), // "labelDoubleClicked"
QT_MOC_LITERAL(5, 75, 7), // "timeout"
QT_MOC_LITERAL(6, 83, 2), // "up"
QT_MOC_LITERAL(7, 86, 4) // "down"

    },
    "TransformFinder\0searchTextChanged\0\0"
    "selectedLabelChanged\0labelDoubleClicked\0"
    "timeout\0up\0down"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransformFinder[] = {

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
       1,    1,   44,    2, 0x09 /* Protected */,
       3,    0,   47,    2, 0x09 /* Protected */,
       4,    0,   48,    2, 0x09 /* Protected */,
       5,    0,   49,    2, 0x09 /* Protected */,
       6,    0,   50,    2, 0x09 /* Protected */,
       7,    0,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransformFinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransformFinder *_t = static_cast<TransformFinder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectedLabelChanged(); break;
        case 2: _t->labelDoubleClicked(); break;
        case 3: _t->timeout(); break;
        case 4: _t->up(); break;
        case 5: _t->down(); break;
        default: ;
        }
    }
}

const QMetaObject TransformFinder::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TransformFinder.data,
      qt_meta_data_TransformFinder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransformFinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransformFinder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransformFinder.stringdata0))
        return static_cast<void*>(const_cast< TransformFinder*>(this));
    return QDialog::qt_metacast(_clname);
}

int TransformFinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
