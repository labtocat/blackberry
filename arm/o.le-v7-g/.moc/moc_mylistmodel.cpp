/****************************************************************************
** Meta object code from reading C++ file 'mylistmodel.hpp'
**
** Created: Wed Oct 3 11:51:19 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/mylistmodel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mylistmodel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyListModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   13,   12,   12, 0x0a,
      46,   37,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyListModel[] = {
    "MyListModel\0\0file_name\0load(QString)\0"
    "category\0setFilter(int)\0"
};

void MyListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyListModel *_t = static_cast<MyListModel *>(_o);
        switch (_id) {
        case 0: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyListModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyListModel::staticMetaObject = {
    { &bb::cascades::QVariantListDataModel::staticMetaObject, qt_meta_stringdata_MyListModel,
      qt_meta_data_MyListModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyListModel))
        return static_cast<void*>(const_cast< MyListModel*>(this));
    typedef bb::cascades::QVariantListDataModel QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MyListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::QVariantListDataModel QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
