/****************************************************************************
** Meta object code from reading C++ file 'register.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Client/GUI/register.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Register_t {
    QByteArrayData data[13];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Register_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Register_t qt_meta_stringdata_Register = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Register"
QT_MOC_LITERAL(1, 9, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 25), // "on_minimizeButton_clicked"
QT_MOC_LITERAL(4, 59, 22), // "on_loginButton_clicked"
QT_MOC_LITERAL(5, 82, 25), // "on_registerButton_clicked"
QT_MOC_LITERAL(6, 108, 17), // "on_pwd_textEdited"
QT_MOC_LITERAL(7, 126, 4), // "arg1"
QT_MOC_LITERAL(8, 131, 18), // "on_pwd2_textEdited"
QT_MOC_LITERAL(9, 150, 22), // "showRegisterSuccessful"
QT_MOC_LITERAL(10, 173, 8), // "UserInfo"
QT_MOC_LITERAL(11, 182, 4), // "info"
QT_MOC_LITERAL(12, 187, 18) // "showRegisterFailed"

    },
    "Register\0on_closeButton_clicked\0\0"
    "on_minimizeButton_clicked\0"
    "on_loginButton_clicked\0on_registerButton_clicked\0"
    "on_pwd_textEdited\0arg1\0on_pwd2_textEdited\0"
    "showRegisterSuccessful\0UserInfo\0info\0"
    "showRegisterFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Register[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void Register::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Register *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_closeButton_clicked(); break;
        case 1: _t->on_minimizeButton_clicked(); break;
        case 2: _t->on_loginButton_clicked(); break;
        case 3: _t->on_registerButton_clicked(); break;
        case 4: _t->on_pwd_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pwd2_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->showRegisterSuccessful((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 7: _t->showRegisterFailed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Register::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Register.data,
    qt_meta_data_Register,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Register::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Register::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Register.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Register::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
