/****************************************************************************
** Meta object code from reading C++ file 'SelectableLabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/SelectableLabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectableLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectableLabel_t {
    QByteArrayData data[6];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectableLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectableLabel_t qt_meta_stringdata_SelectableLabel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SelectableLabel"
QT_MOC_LITERAL(1, 16, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "doubleClicked"
QT_MOC_LITERAL(4, 48, 11), // "setSelected"
QT_MOC_LITERAL(5, 60, 6) // "toggle"

    },
    "SelectableLabel\0selectionChanged\0\0"
    "doubleClicked\0setSelected\0toggle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectableLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x0a /* Public */,
       5,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void SelectableLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectableLabel *_t = static_cast<SelectableLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->doubleClicked(); break;
        case 2: _t->setSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->toggle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SelectableLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SelectableLabel::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SelectableLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SelectableLabel::doubleClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SelectableLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_SelectableLabel.data,
      qt_meta_data_SelectableLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SelectableLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectableLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectableLabel.stringdata0))
        return static_cast<void*>(const_cast< SelectableLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int SelectableLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void SelectableLabel::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SelectableLabel::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
