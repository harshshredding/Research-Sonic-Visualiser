/****************************************************************************
** Meta object code from reading C++ file 'ImageDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/ImageDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageDialog_t {
    QByteArrayData data[11];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageDialog_t qt_meta_stringdata_ImageDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ImageDialog"
QT_MOC_LITERAL(1, 12, 12), // "imageChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "image"
QT_MOC_LITERAL(4, 32, 12), // "labelChanged"
QT_MOC_LITERAL(5, 45, 5), // "label"
QT_MOC_LITERAL(6, 51, 8), // "setImage"
QT_MOC_LITERAL(7, 60, 8), // "setLabel"
QT_MOC_LITERAL(8, 69, 13), // "updatePreview"
QT_MOC_LITERAL(9, 83, 13), // "browseClicked"
QT_MOC_LITERAL(10, 97, 15) // "imageEditEdited"

    },
    "ImageDialog\0imageChanged\0\0image\0"
    "labelChanged\0label\0setImage\0setLabel\0"
    "updatePreview\0browseClicked\0imageEditEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x09 /* Protected */,
      10,    1,   68,    2, 0x09 /* Protected */,
      10,    0,   71,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void ImageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageDialog *_t = static_cast<ImageDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->labelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updatePreview(); break;
        case 5: _t->browseClicked(); break;
        case 6: _t->imageEditEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->imageEditEdited(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImageDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageDialog::imageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ImageDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageDialog::labelChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ImageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ImageDialog.data,
      qt_meta_data_ImageDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ImageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageDialog.stringdata0))
        return static_cast<void*>(const_cast< ImageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ImageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ImageDialog::imageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ImageDialog::labelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
