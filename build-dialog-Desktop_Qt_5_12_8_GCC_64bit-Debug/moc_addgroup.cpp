/****************************************************************************
** Meta object code from reading C++ file 'addgroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Client/GUI/addgroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addgroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addgroup_t {
    QByteArrayData data[8];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addgroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addgroup_t qt_meta_stringdata_addgroup = {
    {
QT_MOC_LITERAL(0, 0, 8), // "addgroup"
QT_MOC_LITERAL(1, 9, 19), // "showAddGroupSuccess"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "showAddGroupFailed"
QT_MOC_LITERAL(4, 49, 7), // "MsgType"
QT_MOC_LITERAL(5, 57, 4), // "type"
QT_MOC_LITERAL(6, 62, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(7, 85, 25) // "on_addgroupButton_clicked"

    },
    "addgroup\0showAddGroupSuccess\0\0"
    "showAddGroupFailed\0MsgType\0type\0"
    "on_closeButton_clicked\0on_addgroupButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addgroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void addgroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<addgroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showAddGroupSuccess(); break;
        case 1: _t->showAddGroupFailed((*reinterpret_cast< MsgType(*)>(_a[1]))); break;
        case 2: _t->on_closeButton_clicked(); break;
        case 3: _t->on_addgroupButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject addgroup::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_addgroup.data,
    qt_meta_data_addgroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *addgroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addgroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addgroup.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int addgroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
