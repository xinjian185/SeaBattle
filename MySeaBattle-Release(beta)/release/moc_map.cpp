/****************************************************************************
** Meta object code from reading C++ file 'map.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MySeaBattle/map.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'map.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Map_t {
    QByteArrayData data[17];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Map_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Map_t qt_meta_stringdata_Map = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Map"
QT_MOC_LITERAL(1, 4, 7), // "Shotwas"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 6), // "status"
QT_MOC_LITERAL(4, 20, 3), // "sta"
QT_MOC_LITERAL(5, 24, 7), // "setship"
QT_MOC_LITERAL(6, 32, 1), // "x"
QT_MOC_LITERAL(7, 34, 1), // "y"
QT_MOC_LITERAL(8, 36, 11), // "orientation"
QT_MOC_LITERAL(9, 48, 2), // "os"
QT_MOC_LITERAL(10, 51, 6), // "lenght"
QT_MOC_LITERAL(11, 58, 10), // "sendingmap"
QT_MOC_LITERAL(12, 69, 5), // "cell*"
QT_MOC_LITERAL(13, 75, 5), // "field"
QT_MOC_LITERAL(14, 81, 13), // "MapRandPlayer"
QT_MOC_LITERAL(15, 95, 4), // "shot"
QT_MOC_LITERAL(16, 100, 8) // "MapClear"

    },
    "Map\0Shotwas\0\0status\0sta\0setship\0x\0y\0"
    "orientation\0os\0lenght\0sendingmap\0cell*\0"
    "field\0MapRandPlayer\0shot\0MapClear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Map[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    4,   47,    2, 0x06 /* Public */,
      11,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   59,    2, 0x0a /* Public */,
      15,    2,   60,    2, 0x0a /* Public */,
      16,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 8, QMetaType::Int,    6,    7,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,

       0        // eod
};

void Map::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Map *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Shotwas((*reinterpret_cast< status(*)>(_a[1]))); break;
        case 1: _t->setship((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->sendingmap((*reinterpret_cast< cell*(*)>(_a[1]))); break;
        case 3: _t->MapRandPlayer(); break;
        case 4: _t->shot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->MapClear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Map::*)(status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Map::Shotwas)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Map::*)(int , int , orientation , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Map::setship)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Map::*)(cell * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Map::sendingmap)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Map::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Map.data,
    qt_meta_data_Map,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Map::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Map::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Map.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Map::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Map::Shotwas(status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Map::setship(int _t1, int _t2, orientation _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Map::sendingmap(cell * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
