/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../TaskManager4/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[21];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 8), // "starting"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 6), // "string"
QT_MOC_LITERAL(4, 24, 8), // "filename"
QT_MOC_LITERAL(5, 33, 24), // "on_pushButton_4_released"
QT_MOC_LITERAL(6, 58, 22), // "on_pushButton_released"
QT_MOC_LITERAL(7, 81, 24), // "on_pushButton_3_released"
QT_MOC_LITERAL(8, 106, 24), // "on_pushButton_2_released"
QT_MOC_LITERAL(9, 131, 24), // "on_pushButton_6_released"
QT_MOC_LITERAL(10, 156, 24), // "on_pushButton_5_released"
QT_MOC_LITERAL(11, 181, 24), // "on_pushButton_8_released"
QT_MOC_LITERAL(12, 206, 19), // "on_addTask_released"
QT_MOC_LITERAL(13, 226, 24), // "on_pushButton_9_released"
QT_MOC_LITERAL(14, 251, 24), // "on_pushButton_7_released"
QT_MOC_LITERAL(15, 276, 25), // "on_pushButton_10_released"
QT_MOC_LITERAL(16, 302, 25), // "on_pushButton_11_released"
QT_MOC_LITERAL(17, 328, 22), // "on_password_textEdited"
QT_MOC_LITERAL(18, 351, 4), // "arg1"
QT_MOC_LITERAL(19, 356, 14), // "sortTableByCol"
QT_MOC_LITERAL(20, 371, 3) // "col"

    },
    "Widget\0starting\0\0string\0filename\0"
    "on_pushButton_4_released\0"
    "on_pushButton_released\0on_pushButton_3_released\0"
    "on_pushButton_2_released\0"
    "on_pushButton_6_released\0"
    "on_pushButton_5_released\0"
    "on_pushButton_8_released\0on_addTask_released\0"
    "on_pushButton_9_released\0"
    "on_pushButton_7_released\0"
    "on_pushButton_10_released\0"
    "on_pushButton_11_released\0"
    "on_password_textEdited\0arg1\0sortTableByCol\0"
    "col"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,
      17,    1,  104,    2, 0x08 /* Private */,
      19,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

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
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->starting((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_4_released(); break;
        case 2: _t->on_pushButton_released(); break;
        case 3: _t->on_pushButton_3_released(); break;
        case 4: _t->on_pushButton_2_released(); break;
        case 5: _t->on_pushButton_6_released(); break;
        case 6: _t->on_pushButton_5_released(); break;
        case 7: _t->on_pushButton_8_released(); break;
        case 8: _t->on_addTask_released(); break;
        case 9: _t->on_pushButton_9_released(); break;
        case 10: _t->on_pushButton_7_released(); break;
        case 11: _t->on_pushButton_10_released(); break;
        case 12: _t->on_pushButton_11_released(); break;
        case 13: _t->on_password_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->sortTableByCol((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Widget::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::starting)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Widget::starting(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
