/****************************************************************************
** Meta object code from reading C++ file 'scoreboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ScoreBoard/scoreboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scoreboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scoreboard_t {
    QByteArrayData data[19];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scoreboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scoreboard_t qt_meta_stringdata_Scoreboard = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Scoreboard"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "on_setTeams_clicked"
QT_MOC_LITERAL(4, 54, 22), // "on_setHalfTime_clicked"
QT_MOC_LITERAL(5, 77, 23), // "on_goolPlusHome_clicked"
QT_MOC_LITERAL(6, 101, 24), // "on_goolMinusHome_clicked"
QT_MOC_LITERAL(7, 126, 23), // "on_goolPlusAway_clicked"
QT_MOC_LITERAL(8, 150, 24), // "on_goolMinusAway_clicked"
QT_MOC_LITERAL(9, 175, 23), // "on_foulPlusHome_clicked"
QT_MOC_LITERAL(10, 199, 24), // "on_foulMinusHome_clicked"
QT_MOC_LITERAL(11, 224, 23), // "on_foulPlusAway_clicked"
QT_MOC_LITERAL(12, 248, 24), // "on_foulMinusAway_clicked"
QT_MOC_LITERAL(13, 273, 16), // "foulsStringToInt"
QT_MOC_LITERAL(14, 290, 20), // "limtFoulsStringToInt"
QT_MOC_LITERAL(15, 311, 21), // "on_resetTimer_clicked"
QT_MOC_LITERAL(16, 333, 21), // "on_startTimer_clicked"
QT_MOC_LITERAL(17, 355, 21), // "on_pauseTimer_clicked"
QT_MOC_LITERAL(18, 377, 8) // "setTimer"

    },
    "Scoreboard\0on_pushButton_clicked\0\0"
    "on_setTeams_clicked\0on_setHalfTime_clicked\0"
    "on_goolPlusHome_clicked\0"
    "on_goolMinusHome_clicked\0"
    "on_goolPlusAway_clicked\0"
    "on_goolMinusAway_clicked\0"
    "on_foulPlusHome_clicked\0"
    "on_foulMinusHome_clicked\0"
    "on_foulPlusAway_clicked\0"
    "on_foulMinusAway_clicked\0foulsStringToInt\0"
    "limtFoulsStringToInt\0on_resetTimer_clicked\0"
    "on_startTimer_clicked\0on_pauseTimer_clicked\0"
    "setTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scoreboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    1,  110,    2, 0x08 /* Private */,
      14,    1,  113,    2, 0x08 /* Private */,
      15,    0,  116,    2, 0x08 /* Private */,
      16,    0,  117,    2, 0x08 /* Private */,
      17,    0,  118,    2, 0x08 /* Private */,
      18,    0,  119,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,    2,
    QMetaType::Int, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Scoreboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scoreboard *_t = static_cast<Scoreboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_setTeams_clicked(); break;
        case 2: _t->on_setHalfTime_clicked(); break;
        case 3: _t->on_goolPlusHome_clicked(); break;
        case 4: _t->on_goolMinusHome_clicked(); break;
        case 5: _t->on_goolPlusAway_clicked(); break;
        case 6: _t->on_goolMinusAway_clicked(); break;
        case 7: _t->on_foulPlusHome_clicked(); break;
        case 8: _t->on_foulMinusHome_clicked(); break;
        case 9: _t->on_foulPlusAway_clicked(); break;
        case 10: _t->on_foulMinusAway_clicked(); break;
        case 11: { int _r = _t->foulsStringToInt((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->limtFoulsStringToInt((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->on_resetTimer_clicked(); break;
        case 14: _t->on_startTimer_clicked(); break;
        case 15: _t->on_pauseTimer_clicked(); break;
        case 16: _t->setTimer(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Scoreboard::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Scoreboard.data,
      qt_meta_data_Scoreboard,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scoreboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scoreboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scoreboard.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Scoreboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
