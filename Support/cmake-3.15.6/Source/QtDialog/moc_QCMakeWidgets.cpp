/****************************************************************************
** Meta object code from reading C++ file 'QCMakeWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QCMakeWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCMakeWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCMakeFileEditor_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCMakeFileEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCMakeFileEditor_t qt_meta_stringdata_QCMakeFileEditor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QCMakeFileEditor"
QT_MOC_LITERAL(1, 17, 16), // "fileDialogExists"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10) // "chooseFile"

    },
    "QCMakeFileEditor\0fileDialogExists\0\0"
    "chooseFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCMakeFileEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QCMakeFileEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCMakeFileEditor *_t = static_cast<QCMakeFileEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileDialogExists((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->chooseFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCMakeFileEditor::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCMakeFileEditor::fileDialogExists)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QCMakeFileEditor::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QCMakeFileEditor.data,
      qt_meta_data_QCMakeFileEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCMakeFileEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCMakeFileEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeFileEditor.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int QCMakeFileEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCMakeFileEditor::fileDialogExists(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QCMakePathEditor_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCMakePathEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCMakePathEditor_t qt_meta_stringdata_QCMakePathEditor = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QCMakePathEditor"

    },
    "QCMakePathEditor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCMakePathEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCMakePathEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCMakePathEditor::staticMetaObject = {
    { &QCMakeFileEditor::staticMetaObject, qt_meta_stringdata_QCMakePathEditor.data,
      qt_meta_data_QCMakePathEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCMakePathEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCMakePathEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakePathEditor.stringdata0))
        return static_cast<void*>(this);
    return QCMakeFileEditor::qt_metacast(_clname);
}

int QCMakePathEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCMakeFileEditor::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCMakeFilePathEditor_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCMakeFilePathEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCMakeFilePathEditor_t qt_meta_stringdata_QCMakeFilePathEditor = {
    {
QT_MOC_LITERAL(0, 0, 20) // "QCMakeFilePathEditor"

    },
    "QCMakeFilePathEditor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCMakeFilePathEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCMakeFilePathEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCMakeFilePathEditor::staticMetaObject = {
    { &QCMakeFileEditor::staticMetaObject, qt_meta_stringdata_QCMakeFilePathEditor.data,
      qt_meta_data_QCMakeFilePathEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCMakeFilePathEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCMakeFilePathEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeFilePathEditor.stringdata0))
        return static_cast<void*>(this);
    return QCMakeFileEditor::qt_metacast(_clname);
}

int QCMakeFilePathEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCMakeFileEditor::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCMakeFileCompleter_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCMakeFileCompleter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCMakeFileCompleter_t qt_meta_stringdata_QCMakeFileCompleter = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QCMakeFileCompleter"

    },
    "QCMakeFileCompleter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCMakeFileCompleter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCMakeFileCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCMakeFileCompleter::staticMetaObject = {
    { &QCompleter::staticMetaObject, qt_meta_stringdata_QCMakeFileCompleter.data,
      qt_meta_data_QCMakeFileCompleter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCMakeFileCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCMakeFileCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeFileCompleter.stringdata0))
        return static_cast<void*>(this);
    return QCompleter::qt_metacast(_clname);
}

int QCMakeFileCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QCMakeComboBox_t {
    QByteArrayData data[2];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCMakeComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCMakeComboBox_t qt_meta_stringdata_QCMakeComboBox = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QCMakeComboBox"
QT_MOC_LITERAL(1, 15, 5) // "value"

    },
    "QCMakeComboBox\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCMakeComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00195103,

       0        // eod
};

void QCMakeComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QCMakeComboBox *_t = static_cast<QCMakeComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCMakeComboBox *_t = static_cast<QCMakeComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCMakeComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QCMakeComboBox.data,
      qt_meta_data_QCMakeComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCMakeComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCMakeComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int QCMakeComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
