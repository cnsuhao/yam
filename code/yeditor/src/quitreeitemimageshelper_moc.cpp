/****************************************************************************
** Meta object code from reading C++ file 'quitreeitemimageshelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inc/quitreeitemimageshelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quitreeitemimageshelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_YCQUiTreeItemImagesHelper_t {
    QByteArrayData data[19];
    char stringdata[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_YCQUiTreeItemImagesHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_YCQUiTreeItemImagesHelper_t qt_meta_stringdata_YCQUiTreeItemImagesHelper = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 9),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 10),
QT_MOC_LITERAL(4, 48, 11),
QT_MOC_LITERAL(5, 60, 11),
QT_MOC_LITERAL(6, 72, 12),
QT_MOC_LITERAL(7, 85, 25),
QT_MOC_LITERAL(8, 111, 12),
QT_MOC_LITERAL(9, 124, 13),
QT_MOC_LITERAL(10, 138, 7),
QT_MOC_LITERAL(11, 146, 12),
QT_MOC_LITERAL(12, 159, 6),
QT_MOC_LITERAL(13, 166, 18),
QT_MOC_LITERAL(14, 185, 14),
QT_MOC_LITERAL(15, 200, 7),
QT_MOC_LITERAL(16, 208, 14),
QT_MOC_LITERAL(17, 223, 6),
QT_MOC_LITERAL(18, 230, 17)
    },
    "YCQUiTreeItemImagesHelper\0onChanged\0"
    "\0EImageType\0reImageType\0yam::yint32\0"
    "riImageIndex\0YCQUiTreeItemImageHelper*\0"
    "pImageHelper\0yam::yfloat32\0riSpeed\0"
    "yam::ystring\0rsType\0onAddButtonClicked\0"
    "onChangedImage\0riIndex\0onChangedSpeed\0"
    "dSpeed\0onItemChangedType\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YCQUiTreeItemImagesHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   59,    2, 0x06,
       1,    3,   66,    2, 0x06,
       1,    1,   73,    2, 0x06,
       1,    2,   76,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      13,    0,   81,    2, 0x0a,
      14,    2,   82,    2, 0x0a,
      14,    1,   87,    2, 0x0a,
      16,    1,   90,    2, 0x0a,
      18,    1,   93,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9, 0x80000000 | 11,    4,   10,   12,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,   15,    8,
    QMetaType::Void, 0x80000000 | 5,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void YCQUiTreeItemImagesHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        YCQUiTreeItemImagesHelper *_t = static_cast<YCQUiTreeItemImagesHelper *>(_o);
        switch (_id) {
        case 0: _t->onChanged((*reinterpret_cast< const EImageType(*)>(_a[1])),(*reinterpret_cast< const yam::yint32(*)>(_a[2])),(*reinterpret_cast< YCQUiTreeItemImageHelper*(*)>(_a[3]))); break;
        case 1: _t->onChanged((*reinterpret_cast< const EImageType(*)>(_a[1])),(*reinterpret_cast< const yam::yfloat32(*)>(_a[2])),(*reinterpret_cast< const yam::ystring(*)>(_a[3]))); break;
        case 2: _t->onChanged((*reinterpret_cast< const EImageType(*)>(_a[1]))); break;
        case 3: _t->onChanged((*reinterpret_cast< const EImageType(*)>(_a[1])),(*reinterpret_cast< const yam::yint32(*)>(_a[2]))); break;
        case 4: _t->onAddButtonClicked(); break;
        case 5: _t->onChangedImage((*reinterpret_cast< const yam::yint32(*)>(_a[1])),(*reinterpret_cast< YCQUiTreeItemImageHelper*(*)>(_a[2]))); break;
        case 6: _t->onChangedImage((*reinterpret_cast< const yam::yint32(*)>(_a[1]))); break;
        case 7: _t->onChangedSpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->onItemChangedType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (YCQUiTreeItemImagesHelper::*_t)(const EImageType & , const yam::yint32 & , YCQUiTreeItemImageHelper * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&YCQUiTreeItemImagesHelper::onChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (YCQUiTreeItemImagesHelper::*_t)(const EImageType & , const yam::yfloat32 & , const yam::ystring & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&YCQUiTreeItemImagesHelper::onChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (YCQUiTreeItemImagesHelper::*_t)(const EImageType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&YCQUiTreeItemImagesHelper::onChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (YCQUiTreeItemImagesHelper::*_t)(const EImageType & , const yam::yint32 & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&YCQUiTreeItemImagesHelper::onChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject YCQUiTreeItemImagesHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_YCQUiTreeItemImagesHelper.data,
      qt_meta_data_YCQUiTreeItemImagesHelper,  qt_static_metacall, 0, 0}
};


const QMetaObject *YCQUiTreeItemImagesHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YCQUiTreeItemImagesHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_YCQUiTreeItemImagesHelper.stringdata))
        return static_cast<void*>(const_cast< YCQUiTreeItemImagesHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int YCQUiTreeItemImagesHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void YCQUiTreeItemImagesHelper::onChanged(const EImageType & _t1, const yam::yint32 & _t2, YCQUiTreeItemImageHelper * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void YCQUiTreeItemImagesHelper::onChanged(const EImageType & _t1, const yam::yfloat32 & _t2, const yam::ystring & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void YCQUiTreeItemImagesHelper::onChanged(const EImageType & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void YCQUiTreeItemImagesHelper::onChanged(const EImageType & _t1, const yam::yint32 & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
