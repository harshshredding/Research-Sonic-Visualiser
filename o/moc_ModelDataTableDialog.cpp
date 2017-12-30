/****************************************************************************
** Meta object code from reading C++ file 'ModelDataTableDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/ModelDataTableDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelDataTableDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelDataTableDialog_t {
    QByteArrayData data[20];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelDataTableDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelDataTableDialog_t qt_meta_stringdata_ModelDataTableDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ModelDataTableDialog"
QT_MOC_LITERAL(1, 21, 13), // "scrollToFrame"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "sv_frame_t"
QT_MOC_LITERAL(4, 47, 5), // "frame"
QT_MOC_LITERAL(5, 53, 19), // "userScrolledToFrame"
QT_MOC_LITERAL(6, 73, 23), // "playbackScrolledToFrame"
QT_MOC_LITERAL(7, 97, 10), // "addCommand"
QT_MOC_LITERAL(8, 108, 8), // "Command*"
QT_MOC_LITERAL(9, 117, 11), // "viewClicked"
QT_MOC_LITERAL(10, 129, 11), // "viewPressed"
QT_MOC_LITERAL(11, 141, 14), // "currentChanged"
QT_MOC_LITERAL(12, 156, 27), // "currentChangedThroughResort"
QT_MOC_LITERAL(13, 184, 17), // "searchTextChanged"
QT_MOC_LITERAL(14, 202, 14), // "searchRepeated"
QT_MOC_LITERAL(15, 217, 9), // "insertRow"
QT_MOC_LITERAL(16, 227, 10), // "deleteRows"
QT_MOC_LITERAL(17, 238, 7), // "editRow"
QT_MOC_LITERAL(18, 246, 18), // "togglePlayTracking"
QT_MOC_LITERAL(19, 265, 12) // "modelRemoved"

    },
    "ModelDataTableDialog\0scrollToFrame\0\0"
    "sv_frame_t\0frame\0userScrolledToFrame\0"
    "playbackScrolledToFrame\0addCommand\0"
    "Command*\0viewClicked\0viewPressed\0"
    "currentChanged\0currentChangedThroughResort\0"
    "searchTextChanged\0searchRepeated\0"
    "insertRow\0deleteRows\0editRow\0"
    "togglePlayTracking\0modelRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelDataTableDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   92,    2, 0x0a /* Public */,
       6,    1,   95,    2, 0x0a /* Public */,
       7,    1,   98,    2, 0x0a /* Public */,
       9,    1,  101,    2, 0x09 /* Protected */,
      10,    1,  104,    2, 0x09 /* Protected */,
      11,    2,  107,    2, 0x09 /* Protected */,
      12,    1,  112,    2, 0x09 /* Protected */,
      13,    1,  115,    2, 0x09 /* Protected */,
      14,    0,  118,    2, 0x09 /* Protected */,
      15,    0,  119,    2, 0x09 /* Protected */,
      16,    0,  120,    2, 0x09 /* Protected */,
      17,    0,  121,    2, 0x09 /* Protected */,
      18,    0,  122,    2, 0x09 /* Protected */,
      19,    0,  123,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModelDataTableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelDataTableDialog *_t = static_cast<ModelDataTableDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scrollToFrame((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 1: _t->userScrolledToFrame((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 2: _t->playbackScrolledToFrame((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 3: _t->addCommand((*reinterpret_cast< Command*(*)>(_a[1]))); break;
        case 4: _t->viewClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->viewPressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 7: _t->currentChangedThroughResort((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->searchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->searchRepeated(); break;
        case 10: _t->insertRow(); break;
        case 11: _t->deleteRows(); break;
        case 12: _t->editRow(); break;
        case 13: _t->togglePlayTracking(); break;
        case 14: _t->modelRemoved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModelDataTableDialog::*_t)(sv_frame_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelDataTableDialog::scrollToFrame)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ModelDataTableDialog::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ModelDataTableDialog.data,
      qt_meta_data_ModelDataTableDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModelDataTableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelDataTableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelDataTableDialog.stringdata0))
        return static_cast<void*>(const_cast< ModelDataTableDialog*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ModelDataTableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ModelDataTableDialog::scrollToFrame(sv_frame_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
