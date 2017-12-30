/****************************************************************************
** Meta object code from reading C++ file 'PlayParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/base/PlayParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayParameters_t {
    QByteArrayData data[18];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayParameters_t qt_meta_stringdata_PlayParameters = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PlayParameters"
QT_MOC_LITERAL(1, 15, 21), // "playParametersChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "playMutedChanged"
QT_MOC_LITERAL(4, 55, 18), // "playAudibleChanged"
QT_MOC_LITERAL(5, 74, 14), // "playPanChanged"
QT_MOC_LITERAL(6, 89, 15), // "playGainChanged"
QT_MOC_LITERAL(7, 105, 17), // "playClipIdChanged"
QT_MOC_LITERAL(8, 123, 12), // "setPlayMuted"
QT_MOC_LITERAL(9, 136, 5), // "muted"
QT_MOC_LITERAL(10, 142, 14), // "setPlayAudible"
QT_MOC_LITERAL(11, 157, 8), // "nonMuted"
QT_MOC_LITERAL(12, 166, 10), // "setPlayPan"
QT_MOC_LITERAL(13, 177, 3), // "pan"
QT_MOC_LITERAL(14, 181, 11), // "setPlayGain"
QT_MOC_LITERAL(15, 193, 4), // "gain"
QT_MOC_LITERAL(16, 198, 13), // "setPlayClipId"
QT_MOC_LITERAL(17, 212, 2) // "id"

    },
    "PlayParameters\0playParametersChanged\0"
    "\0playMutedChanged\0playAudibleChanged\0"
    "playPanChanged\0playGainChanged\0"
    "playClipIdChanged\0setPlayMuted\0muted\0"
    "setPlayAudible\0nonMuted\0setPlayPan\0"
    "pan\0setPlayGain\0gain\0setPlayClipId\0"
    "id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayParameters[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       4,    1,   73,    2, 0x06 /* Public */,
       5,    1,   76,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,
       7,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   85,    2, 0x0a /* Public */,
      10,    1,   88,    2, 0x0a /* Public */,
      12,    1,   91,    2, 0x0a /* Public */,
      14,    1,   94,    2, 0x0a /* Public */,
      16,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Float,   15,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void PlayParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayParameters *_t = static_cast<PlayParameters *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playParametersChanged(); break;
        case 1: _t->playMutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->playAudibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->playPanChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->playGainChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->playClipIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setPlayMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setPlayAudible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setPlayPan((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->setPlayGain((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->setPlayClipId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlayParameters::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayParameters::playParametersChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlayParameters::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayParameters::playMutedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlayParameters::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayParameters::playAudibleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlayParameters::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayParameters::playPanChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PlayParameters::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayParameters::playGainChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PlayParameters::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayParameters::playClipIdChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject PlayParameters::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlayParameters.data,
      qt_meta_data_PlayParameters,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlayParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayParameters.stringdata0))
        return static_cast<void*>(const_cast< PlayParameters*>(this));
    if (!strcmp(_clname, "XmlExportable"))
        return static_cast< XmlExportable*>(const_cast< PlayParameters*>(this));
    return QObject::qt_metacast(_clname);
}

int PlayParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void PlayParameters::playParametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayParameters::playMutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlayParameters::playAudibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlayParameters::playPanChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlayParameters::playGainChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlayParameters::playClipIdChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
