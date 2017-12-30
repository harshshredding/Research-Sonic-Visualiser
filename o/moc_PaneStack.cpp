/****************************************************************************
** Meta object code from reading C++ file 'PaneStack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/view/PaneStack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PaneStack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PaneStack_t {
    QByteArrayData data[35];
    char stringdata0[475];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaneStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaneStack_t qt_meta_stringdata_PaneStack = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PaneStack"
QT_MOC_LITERAL(1, 10, 18), // "currentPaneChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "Pane*"
QT_MOC_LITERAL(4, 36, 4), // "pane"
QT_MOC_LITERAL(5, 41, 19), // "currentLayerChanged"
QT_MOC_LITERAL(6, 61, 6), // "Layer*"
QT_MOC_LITERAL(7, 68, 5), // "layer"
QT_MOC_LITERAL(8, 74, 24), // "rightButtonMenuRequested"
QT_MOC_LITERAL(9, 99, 8), // "position"
QT_MOC_LITERAL(10, 108, 21), // "propertyStacksResized"
QT_MOC_LITERAL(11, 130, 5), // "width"
QT_MOC_LITERAL(12, 136, 18), // "contextHelpChanged"
QT_MOC_LITERAL(13, 155, 9), // "paneAdded"
QT_MOC_LITERAL(14, 165, 10), // "paneHidden"
QT_MOC_LITERAL(15, 176, 20), // "paneAboutToBeDeleted"
QT_MOC_LITERAL(16, 197, 11), // "paneDeleted"
QT_MOC_LITERAL(17, 209, 12), // "dropAccepted"
QT_MOC_LITERAL(18, 222, 7), // "uriList"
QT_MOC_LITERAL(19, 230, 4), // "text"
QT_MOC_LITERAL(20, 235, 23), // "paneDeleteButtonClicked"
QT_MOC_LITERAL(21, 259, 24), // "doubleClickSelectInvoked"
QT_MOC_LITERAL(22, 284, 10), // "sv_frame_t"
QT_MOC_LITERAL(23, 295, 5), // "frame"
QT_MOC_LITERAL(24, 301, 22), // "propertyContainerAdded"
QT_MOC_LITERAL(25, 324, 18), // "PropertyContainer*"
QT_MOC_LITERAL(26, 343, 24), // "propertyContainerRemoved"
QT_MOC_LITERAL(27, 368, 25), // "propertyContainerSelected"
QT_MOC_LITERAL(28, 394, 5), // "View*"
QT_MOC_LITERAL(29, 400, 6), // "client"
QT_MOC_LITERAL(30, 407, 12), // "viewSelected"
QT_MOC_LITERAL(31, 420, 1), // "v"
QT_MOC_LITERAL(32, 422, 18), // "paneInteractedWith"
QT_MOC_LITERAL(33, 441, 16), // "paneDropAccepted"
QT_MOC_LITERAL(34, 458, 16) // "indicatorClicked"

    },
    "PaneStack\0currentPaneChanged\0\0Pane*\0"
    "pane\0currentLayerChanged\0Layer*\0layer\0"
    "rightButtonMenuRequested\0position\0"
    "propertyStacksResized\0width\0"
    "contextHelpChanged\0paneAdded\0paneHidden\0"
    "paneAboutToBeDeleted\0paneDeleted\0"
    "dropAccepted\0uriList\0text\0"
    "paneDeleteButtonClicked\0"
    "doubleClickSelectInvoked\0sv_frame_t\0"
    "frame\0propertyContainerAdded\0"
    "PropertyContainer*\0propertyContainerRemoved\0"
    "propertyContainerSelected\0View*\0client\0"
    "viewSelected\0v\0paneInteractedWith\0"
    "paneDropAccepted\0indicatorClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaneStack[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       5,    2,  147,    2, 0x06 /* Public */,
       8,    2,  152,    2, 0x06 /* Public */,
      10,    1,  157,    2, 0x06 /* Public */,
      10,    0,  160,    2, 0x06 /* Public */,
      12,    1,  161,    2, 0x06 /* Public */,
      13,    1,  164,    2, 0x06 /* Public */,
      13,    0,  167,    2, 0x06 /* Public */,
      14,    1,  168,    2, 0x06 /* Public */,
      14,    0,  171,    2, 0x06 /* Public */,
      15,    1,  172,    2, 0x06 /* Public */,
      16,    0,  175,    2, 0x06 /* Public */,
      17,    2,  176,    2, 0x06 /* Public */,
      17,    2,  181,    2, 0x06 /* Public */,
      20,    1,  186,    2, 0x06 /* Public */,
      21,    1,  189,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    1,  192,    2, 0x0a /* Public */,
      26,    1,  195,    2, 0x0a /* Public */,
      27,    2,  198,    2, 0x0a /* Public */,
      30,    1,  203,    2, 0x0a /* Public */,
      32,    0,  206,    2, 0x0a /* Public */,
       8,    1,  207,    2, 0x0a /* Public */,
      33,    1,  210,    2, 0x0a /* Public */,
      33,    1,  213,    2, 0x0a /* Public */,
      20,    0,  216,    2, 0x0a /* Public */,
      34,    0,  217,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    4,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    4,   18,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   19,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 22,   23,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void, 0x80000000 | 28, 0x80000000 | 25,   29,    2,
    QMetaType::Void, 0x80000000 | 28,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PaneStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaneStack *_t = static_cast<PaneStack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentPaneChanged((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 1: _t->currentLayerChanged((*reinterpret_cast< Pane*(*)>(_a[1])),(*reinterpret_cast< Layer*(*)>(_a[2]))); break;
        case 2: _t->rightButtonMenuRequested((*reinterpret_cast< Pane*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 3: _t->propertyStacksResized((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->propertyStacksResized(); break;
        case 5: _t->contextHelpChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->paneAdded((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 7: _t->paneAdded(); break;
        case 8: _t->paneHidden((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 9: _t->paneHidden(); break;
        case 10: _t->paneAboutToBeDeleted((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 11: _t->paneDeleted(); break;
        case 12: _t->dropAccepted((*reinterpret_cast< Pane*(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 13: _t->dropAccepted((*reinterpret_cast< Pane*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->paneDeleteButtonClicked((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 15: _t->doubleClickSelectInvoked((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 16: _t->propertyContainerAdded((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 17: _t->propertyContainerRemoved((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 18: _t->propertyContainerSelected((*reinterpret_cast< View*(*)>(_a[1])),(*reinterpret_cast< PropertyContainer*(*)>(_a[2]))); break;
        case 19: _t->viewSelected((*reinterpret_cast< View*(*)>(_a[1]))); break;
        case 20: _t->paneInteractedWith(); break;
        case 21: _t->rightButtonMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 22: _t->paneDropAccepted((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 23: _t->paneDropAccepted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->paneDeleteButtonClicked(); break;
        case 25: _t->indicatorClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PaneStack::*_t)(Pane * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::currentPaneChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(Pane * , Layer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::currentLayerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(Pane * , QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::rightButtonMenuRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::propertyStacksResized)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::propertyStacksResized)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::contextHelpChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(Pane * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::paneAdded)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::paneAdded)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(Pane * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::paneHidden)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::paneHidden)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(Pane * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::paneAboutToBeDeleted)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::paneDeleted)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(Pane * , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::dropAccepted)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(Pane * , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::dropAccepted)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(Pane * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::paneDeleteButtonClicked)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (PaneStack::*_t)(sv_frame_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaneStack::doubleClickSelectInvoked)) {
                *result = 15;
                return;
            }
        }
    }
}

const QMetaObject PaneStack::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PaneStack.data,
      qt_meta_data_PaneStack,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PaneStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaneStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PaneStack.stringdata0))
        return static_cast<void*>(const_cast< PaneStack*>(this));
    return QFrame::qt_metacast(_clname);
}

int PaneStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void PaneStack::currentPaneChanged(Pane * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PaneStack::currentLayerChanged(Pane * _t1, Layer * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PaneStack::rightButtonMenuRequested(Pane * _t1, QPoint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PaneStack::propertyStacksResized(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PaneStack::propertyStacksResized()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PaneStack::contextHelpChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PaneStack::paneAdded(Pane * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PaneStack::paneAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PaneStack::paneHidden(Pane * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PaneStack::paneHidden()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PaneStack::paneAboutToBeDeleted(Pane * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PaneStack::paneDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void PaneStack::dropAccepted(Pane * _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PaneStack::dropAccepted(Pane * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void PaneStack::paneDeleteButtonClicked(Pane * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void PaneStack::doubleClickSelectInvoked(sv_frame_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
