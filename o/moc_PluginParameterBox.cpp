/****************************************************************************
** Meta object code from reading C++ file 'PluginParameterBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/PluginParameterBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginParameterBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PluginParameterBox_t {
    QByteArrayData data[7];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PluginParameterBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PluginParameterBox_t qt_meta_stringdata_PluginParameterBox = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PluginParameterBox"
QT_MOC_LITERAL(1, 19, 26), // "pluginConfigurationChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "dialChanged"
QT_MOC_LITERAL(4, 59, 14), // "spinBoxChanged"
QT_MOC_LITERAL(5, 74, 15), // "checkBoxChanged"
QT_MOC_LITERAL(6, 90, 19) // "programComboChanged"

    },
    "PluginParameterBox\0pluginConfigurationChanged\0"
    "\0dialChanged\0spinBoxChanged\0checkBoxChanged\0"
    "programComboChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginParameterBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   42,    2, 0x09 /* Protected */,
       4,    1,   45,    2, 0x09 /* Protected */,
       5,    1,   48,    2, 0x09 /* Protected */,
       6,    1,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void PluginParameterBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PluginParameterBox *_t = static_cast<PluginParameterBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pluginConfigurationChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->dialChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->spinBoxChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->checkBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->programComboChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PluginParameterBox::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PluginParameterBox::pluginConfigurationChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PluginParameterBox::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PluginParameterBox.data,
      qt_meta_data_PluginParameterBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PluginParameterBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginParameterBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PluginParameterBox.stringdata0))
        return static_cast<void*>(const_cast< PluginParameterBox*>(this));
    return QFrame::qt_metacast(_clname);
}

int PluginParameterBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void PluginParameterBox::pluginConfigurationChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
