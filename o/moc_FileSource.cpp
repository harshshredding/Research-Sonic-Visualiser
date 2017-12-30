/****************************************************************************
** Meta object code from reading C++ file 'FileSource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svcore/data/fileio/FileSource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileSource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileSource_t {
    QByteArrayData data[15];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSource_t qt_meta_stringdata_FileSource = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FileSource"
QT_MOC_LITERAL(1, 11, 8), // "progress"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "percent"
QT_MOC_LITERAL(4, 29, 15), // "statusAvailable"
QT_MOC_LITERAL(5, 45, 5), // "ready"
QT_MOC_LITERAL(6, 51, 15), // "metaDataChanged"
QT_MOC_LITERAL(7, 67, 9), // "readyRead"
QT_MOC_LITERAL(8, 77, 11), // "replyFailed"
QT_MOC_LITERAL(9, 89, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 117, 13), // "replyFinished"
QT_MOC_LITERAL(11, 131, 16), // "downloadProgress"
QT_MOC_LITERAL(12, 148, 4), // "done"
QT_MOC_LITERAL(13, 153, 5), // "total"
QT_MOC_LITERAL(14, 159, 9) // "cancelled"

    },
    "FileSource\0progress\0\0percent\0"
    "statusAvailable\0ready\0metaDataChanged\0"
    "readyRead\0replyFailed\0QNetworkReply::NetworkError\0"
    "replyFinished\0downloadProgress\0done\0"
    "total\0cancelled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   64,    2, 0x09 /* Protected */,
       7,    0,   65,    2, 0x09 /* Protected */,
       8,    1,   66,    2, 0x09 /* Protected */,
      10,    0,   69,    2, 0x09 /* Protected */,
      11,    2,   70,    2, 0x09 /* Protected */,
      14,    0,   75,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   13,
    QMetaType::Void,

       0        // eod
};

void FileSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileSource *_t = static_cast<FileSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->statusAvailable(); break;
        case 2: _t->ready(); break;
        case 3: _t->metaDataChanged(); break;
        case 4: _t->readyRead(); break;
        case 5: _t->replyFailed((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 6: _t->replyFinished(); break;
        case 7: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: _t->cancelled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileSource::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileSource::progress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FileSource::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileSource::statusAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FileSource::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileSource::ready)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject FileSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileSource.data,
      qt_meta_data_FileSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileSource.stringdata0))
        return static_cast<void*>(const_cast< FileSource*>(this));
    return QObject::qt_metacast(_clname);
}

int FileSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void FileSource::progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileSource::statusAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FileSource::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
