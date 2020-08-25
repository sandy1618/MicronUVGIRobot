/****************************************************************************
** Meta object code from reading C++ file 'WarningMessagesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "WarningMessagesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WarningMessagesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WarningMessagesDialog_t {
    QByteArrayData data[8];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WarningMessagesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WarningMessagesDialog_t qt_meta_stringdata_WarningMessagesDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WarningMessagesDialog"
QT_MOC_LITERAL(1, 22, 8), // "doAccept"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 34), // "doSuppressDeveloperWarningsCh..."
QT_MOC_LITERAL(4, 67, 5), // "state"
QT_MOC_LITERAL(5, 73, 35), // "doSuppressDeprecatedWarningsC..."
QT_MOC_LITERAL(6, 109, 34), // "doDeveloperWarningsAsErrorsCh..."
QT_MOC_LITERAL(7, 144, 35) // "doDeprecatedWarningsAsErrorsC..."

    },
    "WarningMessagesDialog\0doAccept\0\0"
    "doSuppressDeveloperWarningsChanged\0"
    "state\0doSuppressDeprecatedWarningsChanged\0"
    "doDeveloperWarningsAsErrorsChanged\0"
    "doDeprecatedWarningsAsErrorsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WarningMessagesDialog[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       6,    1,   46,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void WarningMessagesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WarningMessagesDialog *_t = static_cast<WarningMessagesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doAccept(); break;
        case 1: _t->doSuppressDeveloperWarningsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->doSuppressDeprecatedWarningsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->doDeveloperWarningsAsErrorsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->doDeprecatedWarningsAsErrorsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WarningMessagesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WarningMessagesDialog.data,
      qt_meta_data_WarningMessagesDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WarningMessagesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WarningMessagesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WarningMessagesDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_MessagesDialog"))
        return static_cast< Ui_MessagesDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int WarningMessagesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
