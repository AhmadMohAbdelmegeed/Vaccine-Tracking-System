/****************************************************************************
** Meta object code from reading C++ file 'Screen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Screen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Screen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Screen_t {
    const uint offsetsAndSize[36];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Screen_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Screen_t qt_meta_stringdata_Screen = {
    {
QT_MOC_LITERAL(0, 6), // "Screen"
QT_MOC_LITERAL(7, 23), // "on_signuplink_2_clicked"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 18), // "on_BackBtn_clicked"
QT_MOC_LITERAL(51, 16), // "on_logIn_clicked"
QT_MOC_LITERAL(68, 15), // "on_back_clicked"
QT_MOC_LITERAL(84, 17), // "on_search_clicked"
QT_MOC_LITERAL(102, 18), // "on_logIn_2_clicked"
QT_MOC_LITERAL(121, 20), // "on_SignUpBtn_clicked"
QT_MOC_LITERAL(142, 18), // "on_EditBtn_clicked"
QT_MOC_LITERAL(161, 19), // "on_moreStat_clicked"
QT_MOC_LITERAL(181, 22), // "on_backToAdmin_clicked"
QT_MOC_LITERAL(204, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(226, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(250, 20), // "on_RemoveBtn_clicked"
QT_MOC_LITERAL(271, 10), // "closeEvent"
QT_MOC_LITERAL(282, 12), // "QCloseEvent*"
QT_MOC_LITERAL(295, 5) // "event"

    },
    "Screen\0on_signuplink_2_clicked\0\0"
    "on_BackBtn_clicked\0on_logIn_clicked\0"
    "on_back_clicked\0on_search_clicked\0"
    "on_logIn_2_clicked\0on_SignUpBtn_clicked\0"
    "on_EditBtn_clicked\0on_moreStat_clicked\0"
    "on_backToAdmin_clicked\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_RemoveBtn_clicked\0"
    "closeEvent\0QCloseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Screen[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    0,  102,    2, 0x08,    5 /* Private */,
       7,    0,  103,    2, 0x08,    6 /* Private */,
       8,    0,  104,    2, 0x08,    7 /* Private */,
       9,    0,  105,    2, 0x08,    8 /* Private */,
      10,    0,  106,    2, 0x08,    9 /* Private */,
      11,    0,  107,    2, 0x08,   10 /* Private */,
      12,    0,  108,    2, 0x08,   11 /* Private */,
      13,    0,  109,    2, 0x08,   12 /* Private */,
      14,    0,  110,    2, 0x08,   13 /* Private */,
      15,    1,  111,    2, 0x08,   14 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void Screen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Screen *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_signuplink_2_clicked(); break;
        case 1: _t->on_BackBtn_clicked(); break;
        case 2: _t->on_logIn_clicked(); break;
        case 3: _t->on_back_clicked(); break;
        case 4: _t->on_search_clicked(); break;
        case 5: _t->on_logIn_2_clicked(); break;
        case 6: _t->on_SignUpBtn_clicked(); break;
        case 7: _t->on_EditBtn_clicked(); break;
        case 8: _t->on_moreStat_clicked(); break;
        case 9: _t->on_backToAdmin_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_pushButton_2_clicked(); break;
        case 12: _t->on_RemoveBtn_clicked(); break;
        case 13: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Screen::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Screen.offsetsAndSize,
    qt_meta_data_Screen,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Screen_t
, QtPrivate::TypeAndForceComplete<Screen, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *Screen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Screen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Screen.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Screen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
