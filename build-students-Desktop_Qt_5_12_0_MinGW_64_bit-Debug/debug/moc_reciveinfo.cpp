/****************************************************************************
** Meta object code from reading C++ file 'reciveinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../students/reciveinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reciveinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReciveInfo_t {
    QByteArrayData data[9];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReciveInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReciveInfo_t qt_meta_stringdata_ReciveInfo = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ReciveInfo"
QT_MOC_LITERAL(1, 11, 6), // "recive"
QT_MOC_LITERAL(2, 18, 11), // "ReciveInfo*"
QT_MOC_LITERAL(3, 30, 0), // ""
QT_MOC_LITERAL(4, 31, 8), // "QString&"
QT_MOC_LITERAL(5, 40, 7), // "account"
QT_MOC_LITERAL(6, 48, 3), // "pwd"
QT_MOC_LITERAL(7, 52, 4), // "find"
QT_MOC_LITERAL(8, 57, 4) // "info"

    },
    "ReciveInfo\0recive\0ReciveInfo*\0\0QString&\0"
    "account\0pwd\0find\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReciveInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    3, 0x0a /* Public */,
       7,    1,   29,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Bool, 0x80000000 | 2,    8,

       0        // eod
};

void ReciveInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReciveInfo *_t = static_cast<ReciveInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { ReciveInfo* _r = _t->recive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ReciveInfo**>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->find((*reinterpret_cast< ReciveInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ReciveInfo* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReciveInfo::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ReciveInfo.data,
    qt_meta_data_ReciveInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReciveInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReciveInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReciveInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReciveInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
