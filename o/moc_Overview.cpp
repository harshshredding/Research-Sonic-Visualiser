/****************************************************************************
** Meta object code from reading C++ file 'Overview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/view/Overview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Overview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Overview_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Overview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Overview_t qt_meta_stringdata_Overview = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Overview"
QT_MOC_LITERAL(1, 9, 18), // "modelChangedWithin"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "sv_frame_t"
QT_MOC_LITERAL(4, 40, 10), // "startFrame"
QT_MOC_LITERAL(5, 51, 8), // "endFrame"
QT_MOC_LITERAL(6, 60, 13), // "modelReplaced"
QT_MOC_LITERAL(7, 74, 24), // "globalCentreFrameChanged"
QT_MOC_LITERAL(8, 99, 22), // "viewCentreFrameChanged"
QT_MOC_LITERAL(9, 122, 5), // "View*"
QT_MOC_LITERAL(10, 128, 20), // "viewZoomLevelChanged"
QT_MOC_LITERAL(11, 149, 31), // "viewManagerPlaybackFrameChanged"
QT_MOC_LITERAL(12, 181, 12) // "setBoxColour"

    },
    "Overview\0modelChangedWithin\0\0sv_frame_t\0"
    "startFrame\0endFrame\0modelReplaced\0"
    "globalCentreFrameChanged\0"
    "viewCentreFrameChanged\0View*\0"
    "viewZoomLevelChanged\0"
    "viewManagerPlaybackFrameChanged\0"
    "setBoxColour"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Overview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
       8,    2,   58,    2, 0x0a /* Public */,
      10,    3,   63,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      12,    1,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QColor,    2,

       0        // eod
};

void Overview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Overview *_t = static_cast<Overview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChangedWithin((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 1: _t->modelReplaced(); break;
        case 2: _t->globalCentreFrameChanged((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 3: _t->viewCentreFrameChanged((*reinterpret_cast< View*(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 4: _t->viewZoomLevelChanged((*reinterpret_cast< View*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->viewManagerPlaybackFrameChanged((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 6: _t->setBoxColour((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< View* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< View* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Overview::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_Overview.data,
      qt_meta_data_Overview,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Overview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Overview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Overview.stringdata0))
        return static_cast<void*>(const_cast< Overview*>(this));
    return View::qt_metacast(_clname);
}

int Overview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
