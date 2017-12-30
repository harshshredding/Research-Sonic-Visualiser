/****************************************************************************
** Meta object code from reading C++ file 'AlignmentModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/data/model/AlignmentModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlignmentModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlignmentModel_t {
    QByteArrayData data[11];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlignmentModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlignmentModel_t qt_meta_stringdata_AlignmentModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AlignmentModel"
QT_MOC_LITERAL(1, 15, 12), // "modelChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "modelChangedWithin"
QT_MOC_LITERAL(4, 48, 10), // "sv_frame_t"
QT_MOC_LITERAL(5, 59, 10), // "startFrame"
QT_MOC_LITERAL(6, 70, 8), // "endFrame"
QT_MOC_LITERAL(7, 79, 17), // "completionChanged"
QT_MOC_LITERAL(8, 97, 11), // "pathChanged"
QT_MOC_LITERAL(9, 109, 17), // "pathChangedWithin"
QT_MOC_LITERAL(10, 127, 21) // "pathCompletionChanged"

    },
    "AlignmentModel\0modelChanged\0\0"
    "modelChangedWithin\0sv_frame_t\0startFrame\0"
    "endFrame\0completionChanged\0pathChanged\0"
    "pathChangedWithin\0pathCompletionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlignmentModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    2,   45,    2, 0x06 /* Public */,
       7,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   51,    2, 0x09 /* Protected */,
       9,    2,   52,    2, 0x09 /* Protected */,
      10,    0,   57,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,

       0        // eod
};

void AlignmentModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlignmentModel *_t = static_cast<AlignmentModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->modelChangedWithin((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 2: _t->completionChanged(); break;
        case 3: _t->pathChanged(); break;
        case 4: _t->pathChangedWithin((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 5: _t->pathCompletionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AlignmentModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlignmentModel::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AlignmentModel::*_t)(sv_frame_t , sv_frame_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlignmentModel::modelChangedWithin)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AlignmentModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlignmentModel::completionChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AlignmentModel::staticMetaObject = {
    { &Model::staticMetaObject, qt_meta_stringdata_AlignmentModel.data,
      qt_meta_data_AlignmentModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AlignmentModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlignmentModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlignmentModel.stringdata0))
        return static_cast<void*>(const_cast< AlignmentModel*>(this));
    return Model::qt_metacast(_clname);
}

int AlignmentModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Model::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AlignmentModel::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AlignmentModel::modelChangedWithin(sv_frame_t _t1, sv_frame_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AlignmentModel::completionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
