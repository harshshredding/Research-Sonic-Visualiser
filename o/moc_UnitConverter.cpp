/****************************************************************************
** Meta object code from reading C++ file 'UnitConverter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/UnitConverter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UnitConverter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UnitConverter_t {
    QByteArrayData data[14];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnitConverter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnitConverter_t qt_meta_stringdata_UnitConverter = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UnitConverter"
QT_MOC_LITERAL(1, 14, 11), // "freqChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "midiChanged"
QT_MOC_LITERAL(4, 39, 11), // "noteChanged"
QT_MOC_LITERAL(5, 51, 13), // "octaveChanged"
QT_MOC_LITERAL(6, 65, 12), // "centsChanged"
QT_MOC_LITERAL(7, 78, 14), // "samplesChanged"
QT_MOC_LITERAL(8, 93, 13), // "periodChanged"
QT_MOC_LITERAL(9, 107, 10), // "bpmChanged"
QT_MOC_LITERAL(10, 118, 16), // "tempofreqChanged"
QT_MOC_LITERAL(11, 135, 17), // "samplerateChanged"
QT_MOC_LITERAL(12, 153, 17), // "preferenceChanged"
QT_MOC_LITERAL(13, 171, 31) // "PropertyContainer::PropertyName"

    },
    "UnitConverter\0freqChanged\0\0midiChanged\0"
    "noteChanged\0octaveChanged\0centsChanged\0"
    "samplesChanged\0periodChanged\0bpmChanged\0"
    "tempofreqChanged\0samplerateChanged\0"
    "preferenceChanged\0PropertyContainer::PropertyName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnitConverter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

void UnitConverter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UnitConverter *_t = static_cast<UnitConverter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->freqChanged(); break;
        case 1: _t->midiChanged(); break;
        case 2: _t->noteChanged(); break;
        case 3: _t->octaveChanged(); break;
        case 4: _t->centsChanged(); break;
        case 5: _t->samplesChanged(); break;
        case 6: _t->periodChanged(); break;
        case 7: _t->bpmChanged(); break;
        case 8: _t->tempofreqChanged(); break;
        case 9: _t->samplerateChanged(); break;
        case 10: _t->preferenceChanged((*reinterpret_cast< PropertyContainer::PropertyName(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject UnitConverter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UnitConverter.data,
      qt_meta_data_UnitConverter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UnitConverter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitConverter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UnitConverter.stringdata0))
        return static_cast<void*>(const_cast< UnitConverter*>(this));
    return QDialog::qt_metacast(_clname);
}

int UnitConverter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
