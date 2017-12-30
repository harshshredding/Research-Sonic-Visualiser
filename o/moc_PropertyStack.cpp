/****************************************************************************
** Meta object code from reading C++ file 'PropertyStack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/PropertyStack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyStack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertyStack_t {
    QByteArrayData data[23];
    char stringdata0[391];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyStack_t qt_meta_stringdata_PropertyStack = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PropertyStack"
QT_MOC_LITERAL(1, 14, 12), // "viewSelected"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "View*"
QT_MOC_LITERAL(4, 34, 6), // "client"
QT_MOC_LITERAL(5, 41, 25), // "propertyContainerSelected"
QT_MOC_LITERAL(6, 67, 18), // "PropertyContainer*"
QT_MOC_LITERAL(7, 86, 9), // "container"
QT_MOC_LITERAL(8, 96, 18), // "contextHelpChanged"
QT_MOC_LITERAL(9, 115, 22), // "propertyContainerAdded"
QT_MOC_LITERAL(10, 138, 24), // "propertyContainerRemoved"
QT_MOC_LITERAL(11, 163, 32), // "propertyContainerPropertyChanged"
QT_MOC_LITERAL(12, 196, 37), // "propertyContainerPropertyRang..."
QT_MOC_LITERAL(13, 234, 28), // "propertyContainerNameChanged"
QT_MOC_LITERAL(14, 263, 9), // "undoStuff"
QT_MOC_LITERAL(15, 273, 9), // "showLayer"
QT_MOC_LITERAL(16, 283, 18), // "mouseEnteredTabBar"
QT_MOC_LITERAL(17, 302, 15), // "mouseLeftTabBar"
QT_MOC_LITERAL(18, 318, 16), // "activeTabClicked"
QT_MOC_LITERAL(19, 335, 12), // "zoomDetected"
QT_MOC_LITERAL(20, 348, 9), // "startTime"
QT_MOC_LITERAL(21, 358, 7), // "endTime"
QT_MOC_LITERAL(22, 366, 24) // "selectedContainerChanged"

    },
    "PropertyStack\0viewSelected\0\0View*\0"
    "client\0propertyContainerSelected\0"
    "PropertyContainer*\0container\0"
    "contextHelpChanged\0propertyContainerAdded\0"
    "propertyContainerRemoved\0"
    "propertyContainerPropertyChanged\0"
    "propertyContainerPropertyRangeChanged\0"
    "propertyContainerNameChanged\0undoStuff\0"
    "showLayer\0mouseEnteredTabBar\0"
    "mouseLeftTabBar\0activeTabClicked\0"
    "zoomDetected\0startTime\0endTime\0"
    "selectedContainerChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyStack[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       5,    2,   92,    2, 0x06 /* Public */,
       8,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  100,    2, 0x0a /* Public */,
      10,    1,  103,    2, 0x0a /* Public */,
      11,    1,  106,    2, 0x0a /* Public */,
      12,    1,  109,    2, 0x0a /* Public */,
      13,    1,  112,    2, 0x0a /* Public */,
      14,    0,  115,    2, 0x0a /* Public */,
      15,    1,  116,    2, 0x0a /* Public */,
      16,    0,  119,    2, 0x0a /* Public */,
      17,    0,  120,    2, 0x0a /* Public */,
      18,    0,  121,    2, 0x0a /* Public */,
      19,    2,  122,    2, 0x0a /* Public */,
      22,    1,  127,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    7,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   20,   21,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void PropertyStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PropertyStack *_t = static_cast<PropertyStack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->viewSelected((*reinterpret_cast< View*(*)>(_a[1]))); break;
        case 1: _t->propertyContainerSelected((*reinterpret_cast< View*(*)>(_a[1])),(*reinterpret_cast< PropertyContainer*(*)>(_a[2]))); break;
        case 2: _t->contextHelpChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->propertyContainerAdded((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 4: _t->propertyContainerRemoved((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 5: _t->propertyContainerPropertyChanged((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 6: _t->propertyContainerPropertyRangeChanged((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 7: _t->propertyContainerNameChanged((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 8: _t->undoStuff(); break;
        case 9: _t->showLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->mouseEnteredTabBar(); break;
        case 11: _t->mouseLeftTabBar(); break;
        case 12: _t->activeTabClicked(); break;
        case 13: _t->zoomDetected((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->selectedContainerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PropertyStack::*_t)(View * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyStack::viewSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PropertyStack::*_t)(View * , PropertyContainer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyStack::propertyContainerSelected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PropertyStack::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PropertyStack::contextHelpChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PropertyStack::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_PropertyStack.data,
      qt_meta_data_PropertyStack,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PropertyStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyStack.stringdata0))
        return static_cast<void*>(const_cast< PropertyStack*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int PropertyStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PropertyStack::viewSelected(View * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PropertyStack::propertyContainerSelected(View * _t1, PropertyContainer * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PropertyStack::contextHelpChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
