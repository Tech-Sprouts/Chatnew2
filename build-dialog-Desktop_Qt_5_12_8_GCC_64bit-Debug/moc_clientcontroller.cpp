/****************************************************************************
** Meta object code from reading C++ file 'clientcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Client/Controller/clientcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientController_t {
    QByteArrayData data[20];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientController_t qt_meta_stringdata_ClientController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ClientController"
QT_MOC_LITERAL(1, 17, 12), // "readyShowPIC"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "path"
QT_MOC_LITERAL(4, 36, 2), // "id"
QT_MOC_LITERAL(5, 39, 14), // "readyShowMyPIC"
QT_MOC_LITERAL(6, 54, 17), // "requestFriendList"
QT_MOC_LITERAL(7, 72, 8), // "UserInfo"
QT_MOC_LITERAL(8, 81, 4), // "info"
QT_MOC_LITERAL(9, 86, 17), // "requestOfflineMsg"
QT_MOC_LITERAL(10, 104, 28), // "requestAllFriendListUserInfo"
QT_MOC_LITERAL(11, 133, 19), // "dynamicAppendFriend"
QT_MOC_LITERAL(12, 153, 7), // "_friend"
QT_MOC_LITERAL(13, 161, 18), // "dynamicAppendGroup"
QT_MOC_LITERAL(14, 180, 9), // "GroupInfo"
QT_MOC_LITERAL(15, 190, 6), // "_group"
QT_MOC_LITERAL(16, 197, 16), // "requestGroupList"
QT_MOC_LITERAL(17, 214, 15), // "requestChatFile"
QT_MOC_LITERAL(18, 230, 11), // "ChatMessage"
QT_MOC_LITERAL(19, 242, 8) // "chat_msg"

    },
    "ClientController\0readyShowPIC\0\0path\0"
    "id\0readyShowMyPIC\0requestFriendList\0"
    "UserInfo\0info\0requestOfflineMsg\0"
    "requestAllFriendListUserInfo\0"
    "dynamicAppendFriend\0_friend\0"
    "dynamicAppendGroup\0GroupInfo\0_group\0"
    "requestGroupList\0requestChatFile\0"
    "ChatMessage\0chat_msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   69,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,
      16,    0,   80,    2, 0x08 /* Private */,
      17,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void ClientController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyShowPIC((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 1: _t->readyShowMyPIC((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 2: _t->requestFriendList((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 3: _t->requestOfflineMsg(); break;
        case 4: _t->requestAllFriendListUserInfo(); break;
        case 5: _t->dynamicAppendFriend((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 6: _t->dynamicAppendGroup((*reinterpret_cast< GroupInfo(*)>(_a[1]))); break;
        case 7: _t->requestGroupList(); break;
        case 8: _t->requestChatFile((*reinterpret_cast< ChatMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientController::*)(QString , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientController::readyShowPIC)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientController::*)(QString , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientController::readyShowMyPIC)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ClientController.data,
    qt_meta_data_ClientController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ClientController::readyShowPIC(QString _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientController::readyShowMyPIC(QString _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
