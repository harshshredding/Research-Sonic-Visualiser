/****************************************************************************
** Meta object code from reading C++ file 'LayerTree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svgui/widgets/LayerTree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayerTree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelMetadataModel_t {
    QByteArrayData data[12];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelMetadataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelMetadataModel_t qt_meta_stringdata_ModelMetadataModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ModelMetadataModel"
QT_MOC_LITERAL(1, 19, 9), // "paneAdded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "paneDeleted"
QT_MOC_LITERAL(4, 42, 22), // "propertyContainerAdded"
QT_MOC_LITERAL(5, 65, 18), // "PropertyContainer*"
QT_MOC_LITERAL(6, 84, 24), // "propertyContainerRemoved"
QT_MOC_LITERAL(7, 109, 25), // "propertyContainerSelected"
QT_MOC_LITERAL(8, 135, 32), // "propertyContainerPropertyChanged"
QT_MOC_LITERAL(9, 168, 31), // "playParametersAudibilityChanged"
QT_MOC_LITERAL(10, 200, 21), // "paneLayerModelChanged"
QT_MOC_LITERAL(11, 222, 15) // "rebuildModelSet"

    },
    "ModelMetadataModel\0paneAdded\0\0paneDeleted\0"
    "propertyContainerAdded\0PropertyContainer*\0"
    "propertyContainerRemoved\0"
    "propertyContainerSelected\0"
    "propertyContainerPropertyChanged\0"
    "playParametersAudibilityChanged\0"
    "paneLayerModelChanged\0rebuildModelSet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelMetadataModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x09 /* Protected */,
       3,    0,   60,    2, 0x09 /* Protected */,
       4,    1,   61,    2, 0x09 /* Protected */,
       6,    1,   64,    2, 0x09 /* Protected */,
       7,    1,   67,    2, 0x09 /* Protected */,
       8,    1,   70,    2, 0x09 /* Protected */,
       9,    1,   73,    2, 0x09 /* Protected */,
      10,    0,   76,    2, 0x09 /* Protected */,
      11,    0,   77,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModelMetadataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelMetadataModel *_t = static_cast<ModelMetadataModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paneAdded(); break;
        case 1: _t->paneDeleted(); break;
        case 2: _t->propertyContainerAdded((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 3: _t->propertyContainerRemoved((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 4: _t->propertyContainerSelected((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 5: _t->propertyContainerPropertyChanged((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 6: _t->playParametersAudibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->paneLayerModelChanged(); break;
        case 8: _t->rebuildModelSet(); break;
        default: ;
        }
    }
}

const QMetaObject ModelMetadataModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_ModelMetadataModel.data,
      qt_meta_data_ModelMetadataModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModelMetadataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelMetadataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelMetadataModel.stringdata0))
        return static_cast<void*>(const_cast< ModelMetadataModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int ModelMetadataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_LayerTreeModel_t {
    QByteArrayData data[12];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerTreeModel_t qt_meta_stringdata_LayerTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LayerTreeModel"
QT_MOC_LITERAL(1, 15, 9), // "paneAdded"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 20), // "paneAboutToBeDeleted"
QT_MOC_LITERAL(4, 47, 5), // "Pane*"
QT_MOC_LITERAL(5, 53, 22), // "propertyContainerAdded"
QT_MOC_LITERAL(6, 76, 18), // "PropertyContainer*"
QT_MOC_LITERAL(7, 95, 24), // "propertyContainerRemoved"
QT_MOC_LITERAL(8, 120, 25), // "propertyContainerSelected"
QT_MOC_LITERAL(9, 146, 32), // "propertyContainerPropertyChanged"
QT_MOC_LITERAL(10, 179, 21), // "paneLayerModelChanged"
QT_MOC_LITERAL(11, 201, 31) // "playParametersAudibilityChanged"

    },
    "LayerTreeModel\0paneAdded\0\0"
    "paneAboutToBeDeleted\0Pane*\0"
    "propertyContainerAdded\0PropertyContainer*\0"
    "propertyContainerRemoved\0"
    "propertyContainerSelected\0"
    "propertyContainerPropertyChanged\0"
    "paneLayerModelChanged\0"
    "playParametersAudibilityChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerTreeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    1,   55,    2, 0x09 /* Protected */,
       5,    1,   58,    2, 0x09 /* Protected */,
       7,    1,   61,    2, 0x09 /* Protected */,
       8,    1,   64,    2, 0x09 /* Protected */,
       9,    1,   67,    2, 0x09 /* Protected */,
      10,    0,   70,    2, 0x09 /* Protected */,
      11,    1,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void LayerTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayerTreeModel *_t = static_cast<LayerTreeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paneAdded(); break;
        case 1: _t->paneAboutToBeDeleted((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 2: _t->propertyContainerAdded((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 3: _t->propertyContainerRemoved((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 4: _t->propertyContainerSelected((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 5: _t->propertyContainerPropertyChanged((*reinterpret_cast< PropertyContainer*(*)>(_a[1]))); break;
        case 6: _t->paneLayerModelChanged(); break;
        case 7: _t->playParametersAudibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LayerTreeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_LayerTreeModel.data,
      qt_meta_data_LayerTreeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LayerTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayerTreeModel.stringdata0))
        return static_cast<void*>(const_cast< LayerTreeModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int LayerTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
