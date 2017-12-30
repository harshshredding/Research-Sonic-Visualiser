/****************************************************************************
** Meta object code from reading C++ file 'AudioCallbackRecordTarget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svapp/audio/AudioCallbackRecordTarget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioCallbackRecordTarget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioCallbackRecordTarget_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioCallbackRecordTarget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioCallbackRecordTarget_t qt_meta_stringdata_AudioCallbackRecordTarget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AudioCallbackRecordTarget"
QT_MOC_LITERAL(1, 26, 19), // "recordStatusChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 9), // "recording"
QT_MOC_LITERAL(4, 57, 21), // "recordDurationChanged"
QT_MOC_LITERAL(5, 79, 10), // "sv_frame_t"
QT_MOC_LITERAL(6, 90, 15), // "sv_samplerate_t"
QT_MOC_LITERAL(7, 106, 15), // "recordCompleted"
QT_MOC_LITERAL(8, 122, 21), // "modelAboutToBeDeleted"
QT_MOC_LITERAL(9, 144, 11) // "updateModel"

    },
    "AudioCallbackRecordTarget\0recordStatusChanged\0"
    "\0recording\0recordDurationChanged\0"
    "sv_frame_t\0sv_samplerate_t\0recordCompleted\0"
    "modelAboutToBeDeleted\0updateModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioCallbackRecordTarget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,
       7,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   48,    2, 0x09 /* Protected */,
       9,    0,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AudioCallbackRecordTarget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioCallbackRecordTarget *_t = static_cast<AudioCallbackRecordTarget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recordStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->recordDurationChanged((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_samplerate_t(*)>(_a[2]))); break;
        case 2: _t->recordCompleted(); break;
        case 3: _t->modelAboutToBeDeleted(); break;
        case 4: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AudioCallbackRecordTarget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioCallbackRecordTarget::recordStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AudioCallbackRecordTarget::*_t)(sv_frame_t , sv_samplerate_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioCallbackRecordTarget::recordDurationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AudioCallbackRecordTarget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioCallbackRecordTarget::recordCompleted)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AudioCallbackRecordTarget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AudioCallbackRecordTarget.data,
      qt_meta_data_AudioCallbackRecordTarget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioCallbackRecordTarget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioCallbackRecordTarget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioCallbackRecordTarget.stringdata0))
        return static_cast<void*>(const_cast< AudioCallbackRecordTarget*>(this));
    if (!strcmp(_clname, "AudioRecordTarget"))
        return static_cast< AudioRecordTarget*>(const_cast< AudioCallbackRecordTarget*>(this));
    if (!strcmp(_clname, "breakfastquay::ApplicationRecordTarget"))
        return static_cast< breakfastquay::ApplicationRecordTarget*>(const_cast< AudioCallbackRecordTarget*>(this));
    return QObject::qt_metacast(_clname);
}

int AudioCallbackRecordTarget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AudioCallbackRecordTarget::recordStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioCallbackRecordTarget::recordDurationChanged(sv_frame_t _t1, sv_samplerate_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AudioCallbackRecordTarget::recordCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
