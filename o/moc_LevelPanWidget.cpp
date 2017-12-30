/****************************************************************************
** Meta object code from reading C++ file 'LevelPanWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/LevelPanWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LevelPanWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LevelPanWidget_t {
    QByteArrayData data[15];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LevelPanWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LevelPanWidget_t qt_meta_stringdata_LevelPanWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LevelPanWidget"
QT_MOC_LITERAL(1, 15, 12), // "levelChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "panChanged"
QT_MOC_LITERAL(4, 40, 12), // "mouseEntered"
QT_MOC_LITERAL(5, 53, 9), // "mouseLeft"
QT_MOC_LITERAL(6, 63, 8), // "setLevel"
QT_MOC_LITERAL(7, 72, 6), // "setPan"
QT_MOC_LITERAL(8, 79, 19), // "setMonitoringLevels"
QT_MOC_LITERAL(9, 99, 11), // "setEditable"
QT_MOC_LITERAL(10, 111, 14), // "setIncludeMute"
QT_MOC_LITERAL(11, 126, 12), // "setToDefault"
QT_MOC_LITERAL(12, 139, 10), // "wheelEvent"
QT_MOC_LITERAL(13, 150, 12), // "QWheelEvent*"
QT_MOC_LITERAL(14, 163, 2) // "ev"

    },
    "LevelPanWidget\0levelChanged\0\0panChanged\0"
    "mouseEntered\0mouseLeft\0setLevel\0setPan\0"
    "setMonitoringLevels\0setEditable\0"
    "setIncludeMute\0setToDefault\0wheelEvent\0"
    "QWheelEvent*\0ev"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LevelPanWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    0,   75,    2, 0x06 /* Public */,
       5,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   77,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
       8,    2,   83,    2, 0x0a /* Public */,
       9,    1,   88,    2, 0x0a /* Public */,
      10,    1,   91,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,
      12,    1,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void LevelPanWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LevelPanWidget *_t = static_cast<LevelPanWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->levelChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->panChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->mouseEntered(); break;
        case 3: _t->mouseLeft(); break;
        case 4: _t->setLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setPan((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setMonitoringLevels((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 7: _t->setEditable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setIncludeMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setToDefault(); break;
        case 10: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LevelPanWidget::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LevelPanWidget::levelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LevelPanWidget::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LevelPanWidget::panChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LevelPanWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LevelPanWidget::mouseEntered)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LevelPanWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LevelPanWidget::mouseLeft)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject LevelPanWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LevelPanWidget.data,
      qt_meta_data_LevelPanWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LevelPanWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LevelPanWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LevelPanWidget.stringdata0))
        return static_cast<void*>(const_cast< LevelPanWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LevelPanWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void LevelPanWidget::levelChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LevelPanWidget::panChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LevelPanWidget::mouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LevelPanWidget::mouseLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
