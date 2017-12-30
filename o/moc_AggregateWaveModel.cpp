/****************************************************************************
** Meta object code from reading C++ file 'AggregateWaveModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/data/model/AggregateWaveModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AggregateWaveModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AggregateWaveModel_t {
    QByteArrayData data[11];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AggregateWaveModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AggregateWaveModel_t qt_meta_stringdata_AggregateWaveModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AggregateWaveModel"
QT_MOC_LITERAL(1, 19, 12), // "modelChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "modelChangedWithin"
QT_MOC_LITERAL(4, 52, 10), // "sv_frame_t"
QT_MOC_LITERAL(5, 63, 17), // "completionChanged"
QT_MOC_LITERAL(6, 81, 16), // "modelInvalidated"
QT_MOC_LITERAL(7, 98, 21), // "componentModelChanged"
QT_MOC_LITERAL(8, 120, 27), // "componentModelChangedWithin"
QT_MOC_LITERAL(9, 148, 31), // "componentModelCompletionChanged"
QT_MOC_LITERAL(10, 180, 30) // "componentModelAboutToBeDeleted"

    },
    "AggregateWaveModel\0modelChanged\0\0"
    "modelChangedWithin\0sv_frame_t\0"
    "completionChanged\0modelInvalidated\0"
    "componentModelChanged\0componentModelChangedWithin\0"
    "componentModelCompletionChanged\0"
    "componentModelAboutToBeDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AggregateWaveModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,
       5,    0,   60,    2, 0x06 /* Public */,
       6,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   62,    2, 0x09 /* Protected */,
       8,    2,   63,    2, 0x09 /* Protected */,
       9,    0,   68,    2, 0x09 /* Protected */,
      10,    0,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AggregateWaveModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AggregateWaveModel *_t = static_cast<AggregateWaveModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->modelChangedWithin((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 2: _t->completionChanged(); break;
        case 3: _t->modelInvalidated(); break;
        case 4: _t->componentModelChanged(); break;
        case 5: _t->componentModelChangedWithin((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 6: _t->componentModelCompletionChanged(); break;
        case 7: _t->componentModelAboutToBeDeleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AggregateWaveModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AggregateWaveModel::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AggregateWaveModel::*_t)(sv_frame_t , sv_frame_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AggregateWaveModel::modelChangedWithin)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AggregateWaveModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AggregateWaveModel::completionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AggregateWaveModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AggregateWaveModel::modelInvalidated)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject AggregateWaveModel::staticMetaObject = {
    { &RangeSummarisableTimeValueModel::staticMetaObject, qt_meta_stringdata_AggregateWaveModel.data,
      qt_meta_data_AggregateWaveModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AggregateWaveModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AggregateWaveModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AggregateWaveModel.stringdata0))
        return static_cast<void*>(const_cast< AggregateWaveModel*>(this));
    return RangeSummarisableTimeValueModel::qt_metacast(_clname);
}

int AggregateWaveModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RangeSummarisableTimeValueModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AggregateWaveModel::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AggregateWaveModel::modelChangedWithin(sv_frame_t _t1, sv_frame_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AggregateWaveModel::completionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AggregateWaveModel::modelInvalidated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
