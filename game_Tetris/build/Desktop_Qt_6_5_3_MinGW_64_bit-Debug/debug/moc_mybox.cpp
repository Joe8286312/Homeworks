/****************************************************************************
** Meta object code from reading C++ file 'mybox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mybox.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mybox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBoxGroupENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBoxGroupENDCLASS = QtMocHelpers::stringData(
    "BoxGroup",
    "needNewBox",
    "",
    "gameFinished",
    "moveOneStep",
    "startTimer",
    "interval",
    "stopTimer"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBoxGroupENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[9];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[12];
    char stringdata5[11];
    char stringdata6[9];
    char stringdata7[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBoxGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBoxGroupENDCLASS_t qt_meta_stringdata_CLASSBoxGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "BoxGroup"
        QT_MOC_LITERAL(9, 10),  // "needNewBox"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 12),  // "gameFinished"
        QT_MOC_LITERAL(34, 11),  // "moveOneStep"
        QT_MOC_LITERAL(46, 10),  // "startTimer"
        QT_MOC_LITERAL(57, 8),  // "interval"
        QT_MOC_LITERAL(66, 9)   // "stopTimer"
    },
    "BoxGroup",
    "needNewBox",
    "",
    "gameFinished",
    "moveOneStep",
    "startTimer",
    "interval",
    "stopTimer"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBoxGroupENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    1,   47,    2, 0x0a,    4 /* Public */,
       7,    0,   50,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BoxGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSBoxGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBoxGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBoxGroupENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BoxGroup, std::true_type>,
        // method 'needNewBox'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gameFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveOneStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'stopTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BoxGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoxGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->needNewBox(); break;
        case 1: _t->gameFinished(); break;
        case 2: _t->moveOneStep(); break;
        case 3: _t->startTimer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->stopTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BoxGroup::*)();
            if (_t _q_method = &BoxGroup::needNewBox; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BoxGroup::*)();
            if (_t _q_method = &BoxGroup::gameFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *BoxGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoxGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBoxGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItemGroup"))
        return static_cast< QGraphicsItemGroup*>(this);
    return QObject::qt_metacast(_clname);
}

int BoxGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BoxGroup::needNewBox()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BoxGroup::gameFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
