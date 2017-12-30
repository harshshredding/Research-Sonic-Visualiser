/****************************************************************************
** Meta object code from reading C++ file 'PluginParameterDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/PluginParameterDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginParameterDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginParameterDialog_t {
    QByteArrayData data[16];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginParameterDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginParameterDialog_t qt_meta_stringdata_PluginParameterDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "PluginParameterDialog"
QT_MOC_LITERAL(1, 22, 26), // "pluginConfigurationChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 17), // "inputModelChanged"
QT_MOC_LITERAL(4, 68, 19), // "channelComboChanged"
QT_MOC_LITERAL(5, 88, 21), // "blockSizeComboChanged"
QT_MOC_LITERAL(6, 110, 21), // "incrementComboChanged"
QT_MOC_LITERAL(7, 132, 17), // "windowTypeChanged"
QT_MOC_LITERAL(8, 150, 10), // "WindowType"
QT_MOC_LITERAL(9, 161, 4), // "type"
QT_MOC_LITERAL(10, 166, 15), // "advancedToggled"
QT_MOC_LITERAL(11, 182, 8), // "moreInfo"
QT_MOC_LITERAL(12, 191, 18), // "setAdvancedVisible"
QT_MOC_LITERAL(13, 210, 22), // "inputModelComboChanged"
QT_MOC_LITERAL(14, 233, 20), // "selectionOnlyChanged"
QT_MOC_LITERAL(15, 254, 14) // "dialogAccepted"

    },
    "PluginParameterDialog\0pluginConfigurationChanged\0"
    "\0inputModelChanged\0channelComboChanged\0"
    "blockSizeComboChanged\0incrementComboChanged\0"
    "windowTypeChanged\0WindowType\0type\0"
    "advancedToggled\0moreInfo\0setAdvancedVisible\0"
    "inputModelComboChanged\0selectionOnlyChanged\0"
    "dialogAccepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginParameterDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   80,    2, 0x09 /* Protected */,
       5,    1,   83,    2, 0x09 /* Protected */,
       6,    1,   86,    2, 0x09 /* Protected */,
       7,    1,   89,    2, 0x09 /* Protected */,
      10,    0,   92,    2, 0x09 /* Protected */,
      11,    0,   93,    2, 0x09 /* Protected */,
      12,    1,   94,    2, 0x09 /* Protected */,
      13,    1,   97,    2, 0x09 /* Protected */,
      14,    1,  100,    2, 0x09 /* Protected */,
      15,    0,  103,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void PluginParameterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PluginParameterDialog *_t = static_cast<PluginParameterDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pluginConfigurationChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->inputModelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->channelComboChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->blockSizeComboChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->incrementComboChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->windowTypeChanged((*reinterpret_cast< WindowType(*)>(_a[1]))); break;
        case 6: _t->advancedToggled(); break;
        case 7: _t->moreInfo(); break;
        case 8: _t->setAdvancedVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->inputModelComboChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->selectionOnlyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->dialogAccepted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PluginParameterDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PluginParameterDialog::pluginConfigurationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PluginParameterDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PluginParameterDialog::inputModelChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PluginParameterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PluginParameterDialog.data,
      qt_meta_data_PluginParameterDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PluginParameterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginParameterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginParameterDialog.stringdata0))
        return static_cast<void*>(const_cast< PluginParameterDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PluginParameterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PluginParameterDialog::pluginConfigurationChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PluginParameterDialog::inputModelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
