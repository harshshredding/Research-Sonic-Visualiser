/****************************************************************************
** Meta object code from reading C++ file 'AlignmentView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/view/AlignmentView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlignmentView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlignmentView_t {
    QByteArrayData data[9];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlignmentView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlignmentView_t qt_meta_stringdata_AlignmentView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AlignmentView"
QT_MOC_LITERAL(1, 14, 24), // "globalCentreFrameChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10), // "sv_frame_t"
QT_MOC_LITERAL(4, 51, 22), // "viewCentreFrameChanged"
QT_MOC_LITERAL(5, 74, 5), // "View*"
QT_MOC_LITERAL(6, 80, 25), // "viewAboveZoomLevelChanged"
QT_MOC_LITERAL(7, 106, 25), // "viewBelowZoomLevelChanged"
QT_MOC_LITERAL(8, 132, 31) // "viewManagerPlaybackFrameChanged"

    },
    "AlignmentView\0globalCentreFrameChanged\0"
    "\0sv_frame_t\0viewCentreFrameChanged\0"
    "View*\0viewAboveZoomLevelChanged\0"
    "viewBelowZoomLevelChanged\0"
    "viewManagerPlaybackFrameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlignmentView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    2,   42,    2, 0x0a /* Public */,
       6,    2,   47,    2, 0x0a /* Public */,
       7,    2,   52,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void AlignmentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlignmentView *_t = static_cast<AlignmentView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->globalCentreFrameChanged((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 1: _t->viewCentreFrameChanged((*reinterpret_cast< View*(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 2: _t->viewAboveZoomLevelChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->viewBelowZoomLevelChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->viewManagerPlaybackFrameChanged((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< View* >(); break;
            }
            break;
        }
    }
}

const QMetaObject AlignmentView::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_AlignmentView.data,
      qt_meta_data_AlignmentView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AlignmentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlignmentView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlignmentView.stringdata0))
        return static_cast<void*>(const_cast< AlignmentView*>(this));
    return View::qt_metacast(_clname);
}

int AlignmentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
