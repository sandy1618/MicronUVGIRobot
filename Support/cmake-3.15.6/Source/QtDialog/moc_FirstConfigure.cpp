/****************************************************************************
** Meta object code from reading C++ file 'FirstConfigure.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FirstConfigure.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FirstConfigure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StartCompilerSetup_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StartCompilerSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StartCompilerSetup_t qt_meta_stringdata_StartCompilerSetup = {
    {
QT_MOC_LITERAL(0, 0, 18), // "StartCompilerSetup"
QT_MOC_LITERAL(1, 19, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18), // "onSelectionChanged"
QT_MOC_LITERAL(4, 56, 18), // "onGeneratorChanged"
QT_MOC_LITERAL(5, 75, 4) // "name"

    },
    "StartCompilerSetup\0selectionChanged\0"
    "\0onSelectionChanged\0onGeneratorChanged\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartCompilerSetup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x09 /* Protected */,
       4,    1,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void StartCompilerSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StartCompilerSetup *_t = static_cast<StartCompilerSetup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->onSelectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onGeneratorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (StartCompilerSetup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StartCompilerSetup::selectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject StartCompilerSetup::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_StartCompilerSetup.data,
      qt_meta_data_StartCompilerSetup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StartCompilerSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartCompilerSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StartCompilerSetup.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int StartCompilerSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void StartCompilerSetup::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_NativeCompilerSetup_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NativeCompilerSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NativeCompilerSetup_t qt_meta_stringdata_NativeCompilerSetup = {
    {
QT_MOC_LITERAL(0, 0, 19) // "NativeCompilerSetup"

    },
    "NativeCompilerSetup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NativeCompilerSetup[] = {

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

void NativeCompilerSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject NativeCompilerSetup::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_NativeCompilerSetup.data,
      qt_meta_data_NativeCompilerSetup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NativeCompilerSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NativeCompilerSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NativeCompilerSetup.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::Compilers"))
        return static_cast< Ui::Compilers*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int NativeCompilerSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CrossCompilerSetup_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CrossCompilerSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CrossCompilerSetup_t qt_meta_stringdata_CrossCompilerSetup = {
    {
QT_MOC_LITERAL(0, 0, 18) // "CrossCompilerSetup"

    },
    "CrossCompilerSetup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CrossCompilerSetup[] = {

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

void CrossCompilerSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CrossCompilerSetup::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_CrossCompilerSetup.data,
      qt_meta_data_CrossCompilerSetup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CrossCompilerSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CrossCompilerSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CrossCompilerSetup.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::CrossCompiler"))
        return static_cast< Ui::CrossCompiler*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int CrossCompilerSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToolchainCompilerSetup_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolchainCompilerSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolchainCompilerSetup_t qt_meta_stringdata_ToolchainCompilerSetup = {
    {
QT_MOC_LITERAL(0, 0, 22) // "ToolchainCompilerSetup"

    },
    "ToolchainCompilerSetup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolchainCompilerSetup[] = {

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

void ToolchainCompilerSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ToolchainCompilerSetup::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_ToolchainCompilerSetup.data,
      qt_meta_data_ToolchainCompilerSetup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ToolchainCompilerSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolchainCompilerSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolchainCompilerSetup.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int ToolchainCompilerSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FirstConfigure_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirstConfigure_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirstConfigure_t qt_meta_stringdata_FirstConfigure = {
    {
QT_MOC_LITERAL(0, 0, 14) // "FirstConfigure"

    },
    "FirstConfigure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirstConfigure[] = {

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

void FirstConfigure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FirstConfigure::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_FirstConfigure.data,
      qt_meta_data_FirstConfigure,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FirstConfigure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirstConfigure::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FirstConfigure.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int FirstConfigure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
