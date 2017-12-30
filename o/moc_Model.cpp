/****************************************************************************
** Meta object code from reading C++ file 'Model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/data/model/Model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Model_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Model_t qt_meta_stringdata_Model = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Model"
QT_MOC_LITERAL(1, 6, 12), // "modelChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 18), // "modelChangedWithin"
QT_MOC_LITERAL(4, 39, 10), // "sv_frame_t"
QT_MOC_LITERAL(5, 50, 10), // "startFrame"
QT_MOC_LITERAL(6, 61, 8), // "endFrame"
QT_MOC_LITERAL(7, 70, 17), // "completionChanged"
QT_MOC_LITERAL(8, 88, 5), // "ready"
QT_MOC_LITERAL(9, 94, 26), // "alignmentCompletionChanged"
QT_MOC_LITERAL(10, 121, 16), // "aboutToBeDeleted"
QT_MOC_LITERAL(11, 138, 13), // "aboutToDelete"
QT_MOC_LITERAL(12, 152, 27) // "sourceModelAboutToBeDeleted"

    },
    "Model\0modelChanged\0\0modelChangedWithin\0"
    "sv_frame_t\0startFrame\0endFrame\0"
    "completionChanged\0ready\0"
    "alignmentCompletionChanged\0aboutToBeDeleted\0"
    "aboutToDelete\0sourceModelAboutToBeDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,
       7,    0,   60,    2, 0x06 /* Public */,
       8,    0,   61,    2, 0x06 /* Public */,
       9,    0,   62,    2, 0x06 /* Public */,
      10,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   64,    2, 0x0a /* Public */,
      12,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Model *_t = static_cast<Model *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->modelChangedWithin((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 2: _t->completionChanged(); break;
        case 3: _t->ready(); break;
        case 4: _t->alignmentCompletionChanged(); break;
        case 5: _t->aboutToBeDeleted(); break;
        case 6: _t->aboutToDelete(); break;
        case 7: _t->sourceModelAboutToBeDeleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Model::*_t)(sv_frame_t , sv_frame_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::modelChangedWithin)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::completionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::ready)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::alignmentCompletionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::aboutToBeDeleted)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Model::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Model.data,
      qt_meta_data_Model,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Model::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Model.stringdata0))
        return static_cast<void*>(const_cast< Model*>(this));
    if (!strcmp(_clname, "XmlExportable"))
        return static_cast< XmlExportable*>(const_cast< Model*>(this));
    if (!strcmp(_clname, "Playable"))
        return static_cast< Playable*>(const_cast< Model*>(this));
    return QObject::qt_metacast(_clname);
}

int Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Model::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Model::modelChangedWithin(sv_frame_t _t1, sv_frame_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Model::completionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Model::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Model::alignmentCompletionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Model::aboutToBeDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
