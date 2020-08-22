/****************************************************************************
** Meta object code from reading C++ file 'CMakeSetupDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CMakeSetupDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CMakeSetupDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CMakeSetupDialog_t {
    QByteArrayData data[58];
    char stringdata0[867];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMakeSetupDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMakeSetupDialog_t qt_meta_stringdata_CMakeSetupDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CMakeSetupDialog"
QT_MOC_LITERAL(1, 17, 18), // "setBinaryDirectory"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 3), // "dir"
QT_MOC_LITERAL(4, 41, 18), // "setSourceDirectory"
QT_MOC_LITERAL(5, 60, 10), // "initialize"
QT_MOC_LITERAL(6, 71, 11), // "doConfigure"
QT_MOC_LITERAL(7, 83, 10), // "doGenerate"
QT_MOC_LITERAL(8, 94, 13), // "doOpenProject"
QT_MOC_LITERAL(9, 108, 23), // "doInstallForCommandLine"
QT_MOC_LITERAL(10, 132, 6), // "doHelp"
QT_MOC_LITERAL(11, 139, 7), // "doAbout"
QT_MOC_LITERAL(12, 147, 11), // "doInterrupt"
QT_MOC_LITERAL(13, 159, 5), // "error"
QT_MOC_LITERAL(14, 165, 7), // "message"
QT_MOC_LITERAL(15, 173, 14), // "doSourceBrowse"
QT_MOC_LITERAL(16, 188, 14), // "doBinaryBrowse"
QT_MOC_LITERAL(17, 203, 13), // "doReloadCache"
QT_MOC_LITERAL(18, 217, 13), // "doDeleteCache"
QT_MOC_LITERAL(19, 231, 21), // "updateSourceDirectory"
QT_MOC_LITERAL(20, 253, 21), // "updateBinaryDirectory"
QT_MOC_LITERAL(21, 275, 12), // "showProgress"
QT_MOC_LITERAL(22, 288, 3), // "msg"
QT_MOC_LITERAL(23, 292, 7), // "percent"
QT_MOC_LITERAL(24, 300, 15), // "setEnabledState"
QT_MOC_LITERAL(25, 316, 19), // "setupFirstConfigure"
QT_MOC_LITERAL(26, 336, 20), // "updateGeneratorLabel"
QT_MOC_LITERAL(27, 357, 3), // "gen"
QT_MOC_LITERAL(28, 361, 20), // "setExitAfterGenerate"
QT_MOC_LITERAL(29, 382, 13), // "addBinaryPath"
QT_MOC_LITERAL(30, 396, 14), // "loadBuildPaths"
QT_MOC_LITERAL(31, 411, 14), // "saveBuildPaths"
QT_MOC_LITERAL(32, 426, 24), // "onBinaryDirectoryChanged"
QT_MOC_LITERAL(33, 451, 24), // "onSourceDirectoryChanged"
QT_MOC_LITERAL(34, 476, 16), // "setCacheModified"
QT_MOC_LITERAL(35, 493, 26), // "removeSelectedCacheEntries"
QT_MOC_LITERAL(36, 520, 16), // "selectionChanged"
QT_MOC_LITERAL(37, 537, 13), // "addCacheEntry"
QT_MOC_LITERAL(38, 551, 11), // "startSearch"
QT_MOC_LITERAL(39, 563, 14), // "setDebugOutput"
QT_MOC_LITERAL(40, 578, 15), // "setAdvancedView"
QT_MOC_LITERAL(41, 594, 14), // "setGroupedView"
QT_MOC_LITERAL(42, 609, 15), // "showUserChanges"
QT_MOC_LITERAL(43, 625, 15), // "setSearchFilter"
QT_MOC_LITERAL(44, 641, 3), // "str"
QT_MOC_LITERAL(45, 645, 16), // "prepareConfigure"
QT_MOC_LITERAL(46, 662, 19), // "doConfigureInternal"
QT_MOC_LITERAL(47, 682, 18), // "doGenerateInternal"
QT_MOC_LITERAL(48, 701, 8), // "exitLoop"
QT_MOC_LITERAL(49, 710, 19), // "doOutputContextMenu"
QT_MOC_LITERAL(50, 730, 2), // "pt"
QT_MOC_LITERAL(51, 733, 18), // "doOutputFindDialog"
QT_MOC_LITERAL(52, 752, 16), // "doOutputFindNext"
QT_MOC_LITERAL(53, 769, 16), // "directionForward"
QT_MOC_LITERAL(54, 786, 16), // "doOutputFindPrev"
QT_MOC_LITERAL(55, 803, 17), // "doOutputErrorNext"
QT_MOC_LITERAL(56, 821, 21), // "doRegexExplorerDialog"
QT_MOC_LITERAL(57, 843, 23) // "doWarningMessagesDialog"

    },
    "CMakeSetupDialog\0setBinaryDirectory\0"
    "\0dir\0setSourceDirectory\0initialize\0"
    "doConfigure\0doGenerate\0doOpenProject\0"
    "doInstallForCommandLine\0doHelp\0doAbout\0"
    "doInterrupt\0error\0message\0doSourceBrowse\0"
    "doBinaryBrowse\0doReloadCache\0doDeleteCache\0"
    "updateSourceDirectory\0updateBinaryDirectory\0"
    "showProgress\0msg\0percent\0setEnabledState\0"
    "setupFirstConfigure\0updateGeneratorLabel\0"
    "gen\0setExitAfterGenerate\0addBinaryPath\0"
    "loadBuildPaths\0saveBuildPaths\0"
    "onBinaryDirectoryChanged\0"
    "onSourceDirectoryChanged\0setCacheModified\0"
    "removeSelectedCacheEntries\0selectionChanged\0"
    "addCacheEntry\0startSearch\0setDebugOutput\0"
    "setAdvancedView\0setGroupedView\0"
    "showUserChanges\0setSearchFilter\0str\0"
    "prepareConfigure\0doConfigureInternal\0"
    "doGenerateInternal\0exitLoop\0"
    "doOutputContextMenu\0pt\0doOutputFindDialog\0"
    "doOutputFindNext\0directionForward\0"
    "doOutputFindPrev\0doOutputErrorNext\0"
    "doRegexExplorerDialog\0doWarningMessagesDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMakeSetupDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  264,    2, 0x0a /* Public */,
       4,    1,  267,    2, 0x0a /* Public */,
       5,    0,  270,    2, 0x09 /* Protected */,
       6,    0,  271,    2, 0x09 /* Protected */,
       7,    0,  272,    2, 0x09 /* Protected */,
       8,    0,  273,    2, 0x09 /* Protected */,
       9,    0,  274,    2, 0x09 /* Protected */,
      10,    0,  275,    2, 0x09 /* Protected */,
      11,    0,  276,    2, 0x09 /* Protected */,
      12,    0,  277,    2, 0x09 /* Protected */,
      13,    1,  278,    2, 0x09 /* Protected */,
      14,    1,  281,    2, 0x09 /* Protected */,
      15,    0,  284,    2, 0x09 /* Protected */,
      16,    0,  285,    2, 0x09 /* Protected */,
      17,    0,  286,    2, 0x09 /* Protected */,
      18,    0,  287,    2, 0x09 /* Protected */,
      19,    1,  288,    2, 0x09 /* Protected */,
      20,    1,  291,    2, 0x09 /* Protected */,
      21,    2,  294,    2, 0x09 /* Protected */,
      24,    1,  299,    2, 0x09 /* Protected */,
      25,    0,  302,    2, 0x09 /* Protected */,
      26,    1,  303,    2, 0x09 /* Protected */,
      28,    1,  306,    2, 0x09 /* Protected */,
      29,    1,  309,    2, 0x09 /* Protected */,
      30,    0,  312,    2, 0x09 /* Protected */,
      31,    1,  313,    2, 0x09 /* Protected */,
      32,    1,  316,    2, 0x09 /* Protected */,
      33,    1,  319,    2, 0x09 /* Protected */,
      34,    0,  322,    2, 0x09 /* Protected */,
      35,    0,  323,    2, 0x09 /* Protected */,
      36,    0,  324,    2, 0x09 /* Protected */,
      37,    0,  325,    2, 0x09 /* Protected */,
      38,    0,  326,    2, 0x09 /* Protected */,
      39,    1,  327,    2, 0x09 /* Protected */,
      40,    1,  330,    2, 0x09 /* Protected */,
      41,    1,  333,    2, 0x09 /* Protected */,
      42,    0,  336,    2, 0x09 /* Protected */,
      43,    1,  337,    2, 0x09 /* Protected */,
      45,    0,  340,    2, 0x09 /* Protected */,
      46,    0,  341,    2, 0x09 /* Protected */,
      47,    0,  342,    2, 0x09 /* Protected */,
      48,    1,  343,    2, 0x09 /* Protected */,
      49,    1,  346,    2, 0x09 /* Protected */,
      51,    0,  349,    2, 0x09 /* Protected */,
      52,    1,  350,    2, 0x09 /* Protected */,
      52,    0,  353,    2, 0x29 /* Protected | MethodCloned */,
      54,    0,  354,    2, 0x09 /* Protected */,
      55,    0,  355,    2, 0x09 /* Protected */,
      56,    0,  356,    2, 0x09 /* Protected */,
      57,    0,  357,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,   22,   23,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QPoint,   50,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CMakeSetupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CMakeSetupDialog *_t = static_cast<CMakeSetupDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setBinaryDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setSourceDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->initialize(); break;
        case 3: _t->doConfigure(); break;
        case 4: _t->doGenerate(); break;
        case 5: _t->doOpenProject(); break;
        case 6: _t->doInstallForCommandLine(); break;
        case 7: _t->doHelp(); break;
        case 8: _t->doAbout(); break;
        case 9: _t->doInterrupt(); break;
        case 10: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->doSourceBrowse(); break;
        case 13: _t->doBinaryBrowse(); break;
        case 14: _t->doReloadCache(); break;
        case 15: _t->doDeleteCache(); break;
        case 16: _t->updateSourceDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->updateBinaryDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 19: _t->setEnabledState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: { bool _r = _t->setupFirstConfigure();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->updateGeneratorLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->setExitAfterGenerate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->addBinaryPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: { QStringList _r = _t->loadBuildPaths();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->saveBuildPaths((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 26: _t->onBinaryDirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->onSourceDirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->setCacheModified(); break;
        case 29: _t->removeSelectedCacheEntries(); break;
        case 30: _t->selectionChanged(); break;
        case 31: _t->addCacheEntry(); break;
        case 32: _t->startSearch(); break;
        case 33: _t->setDebugOutput((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setAdvancedView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->setGroupedView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->showUserChanges(); break;
        case 37: _t->setSearchFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: { bool _r = _t->prepareConfigure();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->doConfigureInternal();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->doGenerateInternal();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: _t->exitLoop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->doOutputContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 43: _t->doOutputFindDialog(); break;
        case 44: _t->doOutputFindNext((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->doOutputFindNext(); break;
        case 46: _t->doOutputFindPrev(); break;
        case 47: _t->doOutputErrorNext(); break;
        case 48: _t->doRegexExplorerDialog(); break;
        case 49: _t->doWarningMessagesDialog(); break;
        default: ;
        }
    }
}

const QMetaObject CMakeSetupDialog::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CMakeSetupDialog.data,
      qt_meta_data_CMakeSetupDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CMakeSetupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMakeSetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CMakeSetupDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::CMakeSetupDialog"))
        return static_cast< Ui::CMakeSetupDialog*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CMakeSetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
    return _id;
}
struct qt_meta_stringdata_QCMakeThread_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCMakeThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCMakeThread_t qt_meta_stringdata_QCMakeThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QCMakeThread"
QT_MOC_LITERAL(1, 13, 16), // "cmakeInitialized"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "QCMakeThread\0cmakeInitialized\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCMakeThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QCMakeThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCMakeThread *_t = static_cast<QCMakeThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cmakeInitialized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCMakeThread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCMakeThread::cmakeInitialized)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QCMakeThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QCMakeThread.data,
      qt_meta_data_QCMakeThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCMakeThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCMakeThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCMakeThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QCMakeThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCMakeThread::cmakeInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
