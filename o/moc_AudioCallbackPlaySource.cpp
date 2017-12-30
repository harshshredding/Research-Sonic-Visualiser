/****************************************************************************
** Meta object code from reading C++ file 'AudioCallbackPlaySource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svapp/audio/AudioCallbackPlaySource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioCallbackPlaySource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioCallbackPlaySource_t {
    QByteArrayData data[26];
    char stringdata0[447];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioCallbackPlaySource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioCallbackPlaySource_t qt_meta_stringdata_AudioCallbackPlaySource = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AudioCallbackPlaySource"
QT_MOC_LITERAL(1, 24, 17), // "playStatusChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "isPlaying"
QT_MOC_LITERAL(4, 53, 18), // "sampleRateMismatch"
QT_MOC_LITERAL(5, 72, 15), // "sv_samplerate_t"
QT_MOC_LITERAL(6, 88, 9), // "requested"
QT_MOC_LITERAL(7, 98, 9), // "available"
QT_MOC_LITERAL(8, 108, 12), // "willResample"
QT_MOC_LITERAL(9, 121, 21), // "channelCountIncreased"
QT_MOC_LITERAL(10, 143, 5), // "count"
QT_MOC_LITERAL(11, 149, 27), // "audioOverloadPluginDisabled"
QT_MOC_LITERAL(12, 177, 36), // "audioTimeStretchMultiChannelD..."
QT_MOC_LITERAL(13, 214, 8), // "activity"
QT_MOC_LITERAL(14, 223, 23), // "audioProcessingOverload"
QT_MOC_LITERAL(15, 247, 16), // "selectionChanged"
QT_MOC_LITERAL(16, 264, 19), // "playLoopModeChanged"
QT_MOC_LITERAL(17, 284, 24), // "playSelectionModeChanged"
QT_MOC_LITERAL(18, 309, 21), // "playParametersChanged"
QT_MOC_LITERAL(19, 331, 15), // "PlayParameters*"
QT_MOC_LITERAL(20, 347, 17), // "preferenceChanged"
QT_MOC_LITERAL(21, 365, 31), // "PropertyContainer::PropertyName"
QT_MOC_LITERAL(22, 397, 18), // "modelChangedWithin"
QT_MOC_LITERAL(23, 416, 10), // "sv_frame_t"
QT_MOC_LITERAL(24, 427, 10), // "startFrame"
QT_MOC_LITERAL(25, 438, 8) // "endFrame"

    },
    "AudioCallbackPlaySource\0playStatusChanged\0"
    "\0isPlaying\0sampleRateMismatch\0"
    "sv_samplerate_t\0requested\0available\0"
    "willResample\0channelCountIncreased\0"
    "count\0audioOverloadPluginDisabled\0"
    "audioTimeStretchMultiChannelDisabled\0"
    "activity\0audioProcessingOverload\0"
    "selectionChanged\0playLoopModeChanged\0"
    "playSelectionModeChanged\0playParametersChanged\0"
    "PlayParameters*\0preferenceChanged\0"
    "PropertyContainer::PropertyName\0"
    "modelChangedWithin\0sv_frame_t\0startFrame\0"
    "endFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioCallbackPlaySource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    3,   82,    2, 0x06 /* Public */,
       9,    1,   89,    2, 0x06 /* Public */,
      11,    0,   92,    2, 0x06 /* Public */,
      12,    0,   93,    2, 0x06 /* Public */,
      13,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   97,    2, 0x0a /* Public */,
      15,    0,   98,    2, 0x09 /* Protected */,
      16,    0,   99,    2, 0x09 /* Protected */,
      17,    0,  100,    2, 0x09 /* Protected */,
      18,    1,  101,    2, 0x09 /* Protected */,
      20,    1,  104,    2, 0x09 /* Protected */,
      22,    2,  107,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, QMetaType::Bool,    6,    7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 23,   24,   25,

       0        // eod
};

void AudioCallbackPlaySource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioCallbackPlaySource *_t = static_cast<AudioCallbackPlaySource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->sampleRateMismatch((*reinterpret_cast< sv_samplerate_t(*)>(_a[1])),(*reinterpret_cast< sv_samplerate_t(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->channelCountIncreased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->audioOverloadPluginDisabled(); break;
        case 4: _t->audioTimeStretchMultiChannelDisabled(); break;
        case 5: _t->activity((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->audioProcessingOverload(); break;
        case 7: _t->selectionChanged(); break;
        case 8: _t->playLoopModeChanged(); break;
        case 9: _t->playSelectionModeChanged(); break;
        case 10: _t->playParametersChanged((*reinterpret_cast< PlayParameters*(*)>(_a[1]))); break;
        case 11: _t->preferenceChanged((*reinterpret_cast< PropertyContainer::PropertyName(*)>(_a[1]))); break;
        case 12: _t->modelChangedWithin((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AudioCallbackPlaySource::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioCallbackPlaySource::playStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AudioCallbackPlaySource::*_t)(sv_samplerate_t , sv_samplerate_t , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioCallbackPlaySource::sampleRateMismatch)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AudioCallbackPlaySource::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioCallbackPlaySource::channelCountIncreased)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AudioCallbackPlaySource::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioCallbackPlaySource::audioOverloadPluginDisabled)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AudioCallbackPlaySource::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioCallbackPlaySource::audioTimeStretchMultiChannelDisabled)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AudioCallbackPlaySource::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AudioCallbackPlaySource::activity)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject AudioCallbackPlaySource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AudioCallbackPlaySource.data,
      qt_meta_data_AudioCallbackPlaySource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioCallbackPlaySource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioCallbackPlaySource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioCallbackPlaySource.stringdata0))
        return static_cast<void*>(const_cast< AudioCallbackPlaySource*>(this));
    if (!strcmp(_clname, "AudioPlaySource"))
        return static_cast< AudioPlaySource*>(const_cast< AudioCallbackPlaySource*>(this));
    if (!strcmp(_clname, "breakfastquay::ApplicationPlaybackSource"))
        return static_cast< breakfastquay::ApplicationPlaybackSource*>(const_cast< AudioCallbackPlaySource*>(this));
    return QObject::qt_metacast(_clname);
}

int AudioCallbackPlaySource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void AudioCallbackPlaySource::playStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioCallbackPlaySource::sampleRateMismatch(sv_samplerate_t _t1, sv_samplerate_t _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AudioCallbackPlaySource::channelCountIncreased(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AudioCallbackPlaySource::audioOverloadPluginDisabled()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AudioCallbackPlaySource::audioTimeStretchMultiChannelDisabled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AudioCallbackPlaySource::activity(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
