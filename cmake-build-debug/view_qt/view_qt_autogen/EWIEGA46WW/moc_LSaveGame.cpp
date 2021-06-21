/****************************************************************************
** Meta object code from reading C++ file 'LSaveGame.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../view_qt/LSaveGame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LSaveGame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LSaveGame_t {
    const uint offsetsAndSize[18];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LSaveGame_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LSaveGame_t qt_meta_stringdata_LSaveGame = {
    {
QT_MOC_LITERAL(0, 9), // "LSaveGame"
QT_MOC_LITERAL(10, 14), // "slotSelectSave"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(43, 4), // "item"
QT_MOC_LITERAL(48, 15), // "slotTextChanged"
QT_MOC_LITERAL(64, 4), // "text"
QT_MOC_LITERAL(69, 8), // "slotSave"
QT_MOC_LITERAL(78, 14) // "slotDeleteSave"

    },
    "LSaveGame\0slotSelectSave\0\0QListWidgetItem*\0"
    "item\0slotTextChanged\0text\0slotSave\0"
    "slotDeleteSave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LSaveGame[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x0a,    0 /* Public */,
       5,    1,   41,    2, 0x0a,    2 /* Public */,
       7,    0,   44,    2, 0x0a,    4 /* Public */,
       8,    0,   45,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LSaveGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LSaveGame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotSelectSave((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotSave(); break;
        case 3: _t->slotDeleteSave(); break;
        default: ;
        }
    }
}

const QMetaObject LSaveGame::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_LSaveGame.offsetsAndSize,
    qt_meta_data_LSaveGame,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LSaveGame_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *LSaveGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LSaveGame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LSaveGame.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LSaveGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
