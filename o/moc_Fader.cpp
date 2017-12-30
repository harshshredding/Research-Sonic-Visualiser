/****************************************************************************
** Meta object code from reading C++ file 'Fader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/Fader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Fader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Fader_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Fader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Fader_t qt_meta_stringdata_Fader = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Fader"
QT_MOC_LITERAL(1, 6, 12), // "valueChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "mouseEntered"
QT_MOC_LITERAL(4, 33, 9) // "mouseLeft"

    },
    "Fader\0valueChanged\0\0mouseEntered\0"
    "mouseLeft"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Fader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,
       4,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Fader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Fader *_t = static_cast<Fader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->mouseEntered(); break;
        case 2: _t->mouseLeft(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Fader::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Fader::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Fader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Fader::mouseEntered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Fader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Fader::mouseLeft)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Fader::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Fader.data,
      qt_meta_data_Fader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Fader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Fader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Fader.stringdata0))
        return static_cast<void*>(const_cast< Fader*>(this));
    return QWidget::qt_metacast(_clname);
}

int Fader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Fader::valueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Fader::mouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Fader::mouseLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
