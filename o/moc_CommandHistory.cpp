/****************************************************************************
** Meta object code from reading C++ file 'CommandHistory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/CommandHistory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommandHistory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommandHistory_t {
    QByteArrayData data[16];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommandHistory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommandHistory_t qt_meta_stringdata_CommandHistory = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CommandHistory"
QT_MOC_LITERAL(1, 15, 15), // "commandExecuted"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "Command*"
QT_MOC_LITERAL(4, 41, 17), // "commandUnexecuted"
QT_MOC_LITERAL(5, 59, 16), // "documentRestored"
QT_MOC_LITERAL(6, 76, 8), // "activity"
QT_MOC_LITERAL(7, 85, 13), // "documentSaved"
QT_MOC_LITERAL(8, 99, 18), // "addExecutedCommand"
QT_MOC_LITERAL(9, 118, 20), // "addCommandAndExecute"
QT_MOC_LITERAL(10, 139, 4), // "undo"
QT_MOC_LITERAL(11, 144, 4), // "redo"
QT_MOC_LITERAL(12, 149, 13), // "undoActivated"
QT_MOC_LITERAL(13, 163, 8), // "QAction*"
QT_MOC_LITERAL(14, 172, 13), // "redoActivated"
QT_MOC_LITERAL(15, 186, 18) // "bundleTimerTimeout"

    },
    "CommandHistory\0commandExecuted\0\0"
    "Command*\0commandUnexecuted\0documentRestored\0"
    "activity\0documentSaved\0addExecutedCommand\0"
    "addCommandAndExecute\0undo\0redo\0"
    "undoActivated\0QAction*\0redoActivated\0"
    "bundleTimerTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandHistory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       1,    1,   80,    2, 0x06 /* Public */,
       4,    1,   83,    2, 0x06 /* Public */,
       5,    0,   86,    2, 0x06 /* Public */,
       6,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   90,    2, 0x0a /* Public */,
       8,    1,   91,    2, 0x0a /* Public */,
       9,    1,   94,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    1,   99,    2, 0x09 /* Protected */,
      14,    1,  102,    2, 0x09 /* Protected */,
      15,    0,  105,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,

       0        // eod
};

void CommandHistory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommandHistory *_t = static_cast<CommandHistory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commandExecuted(); break;
        case 1: _t->commandExecuted((*reinterpret_cast< Command*(*)>(_a[1]))); break;
        case 2: _t->commandUnexecuted((*reinterpret_cast< Command*(*)>(_a[1]))); break;
        case 3: _t->documentRestored(); break;
        case 4: _t->activity((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->documentSaved(); break;
        case 6: _t->addExecutedCommand((*reinterpret_cast< Command*(*)>(_a[1]))); break;
        case 7: _t->addCommandAndExecute((*reinterpret_cast< Command*(*)>(_a[1]))); break;
        case 8: _t->undo(); break;
        case 9: _t->redo(); break;
        case 10: _t->undoActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: _t->redoActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 12: _t->bundleTimerTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CommandHistory::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommandHistory::commandExecuted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CommandHistory::*_t)(Command * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommandHistory::commandExecuted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CommandHistory::*_t)(Command * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommandHistory::commandUnexecuted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CommandHistory::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommandHistory::documentRestored)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CommandHistory::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommandHistory::activity)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject CommandHistory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CommandHistory.data,
      qt_meta_data_CommandHistory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CommandHistory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandHistory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommandHistory.stringdata0))
        return static_cast<void*>(const_cast< CommandHistory*>(this));
    return QObject::qt_metacast(_clname);
}

int CommandHistory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CommandHistory::commandExecuted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CommandHistory::commandExecuted(Command * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CommandHistory::commandUnexecuted(Command * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CommandHistory::documentRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CommandHistory::activity(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
