/****************************************************************************
** Meta object code from reading C++ file 'windowmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ConvexHull/GUI/managers/windowmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WindowManager_t {
    QByteArrayData data[7];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowManager_t qt_meta_stringdata_WindowManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WindowManager"
QT_MOC_LITERAL(1, 14, 32), // "on_backgroundColorButton_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 29), // "on_saveSnapshotButton_clicked"
QT_MOC_LITERAL(4, 78, 34), // "on_fullScreenCheckBox_stateCh..."
QT_MOC_LITERAL(5, 113, 5), // "state"
QT_MOC_LITERAL(6, 119, 32) // "on_showAxisCheckBox_stateChanged"

    },
    "WindowManager\0on_backgroundColorButton_clicked\0"
    "\0on_saveSnapshotButton_clicked\0"
    "on_fullScreenCheckBox_stateChanged\0"
    "state\0on_showAxisCheckBox_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void WindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowManager *_t = static_cast<WindowManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_backgroundColorButton_clicked(); break;
        case 1: _t->on_saveSnapshotButton_clicked(); break;
        case 2: _t->on_fullScreenCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_showAxisCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WindowManager::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WindowManager.data,
      qt_meta_data_WindowManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WindowManager.stringdata0))
        return static_cast<void*>(const_cast< WindowManager*>(this));
    return QFrame::qt_metacast(_clname);
}

int WindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE