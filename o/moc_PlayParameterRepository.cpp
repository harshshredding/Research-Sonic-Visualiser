/****************************************************************************
** Meta object code from reading C++ file 'PlayParameterRepository.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/base/PlayParameterRepository.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayParameterRepository.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayParameterRepository_t {
    QByteArrayData data[6];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayParameterRepository_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayParameterRepository_t qt_meta_stringdata_PlayParameterRepository = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PlayParameterRepository"
QT_MOC_LITERAL(1, 24, 21), // "playParametersChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 15), // "PlayParameters*"
QT_MOC_LITERAL(4, 63, 17), // "playClipIdChanged"
QT_MOC_LITERAL(5, 81, 15) // "const Playable*"

    },
    "PlayParameterRepository\0playParametersChanged\0"
    "\0PlayParameters*\0playClipIdChanged\0"
    "const Playable*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayParameterRepository[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       1,    0,   42,    2, 0x09 /* Protected */,
       4,    1,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void PlayParameterRepository::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayParameterRepository *_t = static_cast<PlayParameterRepository *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playParametersChanged((*reinterpret_cast< PlayParameters*(*)>(_a[1]))); break;
        case 1: _t->playClipIdChanged((*reinterpret_cast< const Playable*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->playParametersChanged(); break;
        case 3: _t->playClipIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlayParameters* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlayParameterRepository::*_t)(PlayParameters * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayParameterRepository::playParametersChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlayParameterRepository::*_t)(const Playable * , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayParameterRepository::playClipIdChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PlayParameterRepository::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlayParameterRepository.data,
      qt_meta_data_PlayParameterRepository,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlayParameterRepository::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayParameterRepository::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayParameterRepository.stringdata0))
        return static_cast<void*>(const_cast< PlayParameterRepository*>(this));
    return QObject::qt_metacast(_clname);
}

int PlayParameterRepository::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PlayParameterRepository::playParametersChanged(PlayParameters * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlayParameterRepository::playClipIdChanged(const Playable * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
