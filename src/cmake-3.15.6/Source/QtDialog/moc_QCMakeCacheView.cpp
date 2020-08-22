/****************************************************************************
** Meta object code from reading C++ file 'QCMakeCacheView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QCMakeCacheView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCMakeCacheView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCMakeCacheView_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCMakeCacheView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCMakeCacheView_t qt_meta_stringdata_QCMakeCacheView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QCMakeCacheView"
QT_MOC_LITERAL(1, 16, 15), // "setShowAdvanced"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15) // "setSearchFilter"

    },
    "QCMakeCacheView\0setShowAdvanced\0\0"
    "setSearchFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCMakeCacheView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       3,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void QCMakeCacheView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCMakeCacheView *_t = static_cast<QCMakeCacheView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setShowAdvanced((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setSearchFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QCMakeCacheView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QCMakeCacheView.data,
      qt_meta_data_QCMakeCacheView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCMakeCacheView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCMakeCacheView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeCacheView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QCMakeCacheView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_QCMakeCacheModel_t {
    QByteArrayData data[18];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCMakeCacheModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCMakeCacheModel_t qt_meta_stringdata_QCMakeCacheModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QCMakeCacheModel"
QT_MOC_LITERAL(1, 17, 13), // "setProperties"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "QCMakePropertyList"
QT_MOC_LITERAL(4, 51, 5), // "props"
QT_MOC_LITERAL(5, 57, 20), // "setShowNewProperties"
QT_MOC_LITERAL(6, 78, 5), // "clear"
QT_MOC_LITERAL(7, 84, 14), // "setEditEnabled"
QT_MOC_LITERAL(8, 99, 14), // "insertProperty"
QT_MOC_LITERAL(9, 114, 28), // "QCMakeProperty::PropertyType"
QT_MOC_LITERAL(10, 143, 1), // "t"
QT_MOC_LITERAL(11, 145, 4), // "name"
QT_MOC_LITERAL(12, 150, 11), // "description"
QT_MOC_LITERAL(13, 162, 5), // "value"
QT_MOC_LITERAL(14, 168, 8), // "advanced"
QT_MOC_LITERAL(15, 177, 11), // "setViewType"
QT_MOC_LITERAL(16, 189, 8), // "ViewType"
QT_MOC_LITERAL(17, 198, 8) // "viewType"

    },
    "QCMakeCacheModel\0setProperties\0\0"
    "QCMakePropertyList\0props\0setShowNewProperties\0"
    "clear\0setEditEnabled\0insertProperty\0"
    "QCMakeProperty::PropertyType\0t\0name\0"
    "description\0value\0advanced\0setViewType\0"
    "ViewType\0viewType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCMakeCacheModel[] = {

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
       1,    1,   49,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    5,   59,    2, 0x0a /* Public */,
      15,    1,   70,    2, 0x0a /* Public */,
      17,    0,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool, 0x80000000 | 9, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,   10,   11,   12,   13,   14,
    QMetaType::Void, 0x80000000 | 16,   10,
    0x80000000 | 16,

       0        // eod
};

void QCMakeCacheModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCMakeCacheModel *_t = static_cast<QCMakeCacheModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setProperties((*reinterpret_cast< const QCMakePropertyList(*)>(_a[1]))); break;
        case 1: _t->setShowNewProperties((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->setEditEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->insertProperty((*reinterpret_cast< QCMakeProperty::PropertyType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setViewType((*reinterpret_cast< ViewType(*)>(_a[1]))); break;
        case 6: { ViewType _r = _t->viewType();
            if (_a[0]) *reinterpret_cast< ViewType*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCMakePropertyList >(); break;
            }
            break;
        }
    }
}

const QMetaObject QCMakeCacheModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_QCMakeCacheModel.data,
      qt_meta_data_QCMakeCacheModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCMakeCacheModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCMakeCacheModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeCacheModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int QCMakeCacheModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QCMakeCacheModelDelegate_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCMakeCacheModelDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCMakeCacheModelDelegate_t qt_meta_stringdata_QCMakeCacheModelDelegate = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QCMakeCacheModelDelegate"
QT_MOC_LITERAL(1, 25, 17), // "setFileDialogFlag"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "QCMakeCacheModelDelegate\0setFileDialogFlag\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCMakeCacheModelDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void QCMakeCacheModelDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCMakeCacheModelDelegate *_t = static_cast<QCMakeCacheModelDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFileDialogFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QCMakeCacheModelDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_QCMakeCacheModelDelegate.data,
      qt_meta_data_QCMakeCacheModelDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCMakeCacheModelDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCMakeCacheModelDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeCacheModelDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int QCMakeCacheModelDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
