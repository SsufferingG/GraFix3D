/****************************************************************************
** Meta object code from reading C++ file 'vvod.h'
**
** Created: Sun Oct 16 13:47:45 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interface/vvod.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vvod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vvod[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x0a,
      14,    5,    5,    5, 0x0a,
      22,    5,    5,    5, 0x0a,
      28,    5,    5,    5, 0x0a,
      34,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_vvod[] = {
    "vvod\0\0nazad()\0dalee()\0one()\0two()\0"
    "sprav()\0"
};

const QMetaObject vvod::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_vvod,
      qt_meta_data_vvod, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vvod::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vvod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vvod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vvod))
        return static_cast<void*>(const_cast< vvod*>(this));
    return QDialog::qt_metacast(_clname);
}

int vvod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nazad(); break;
        case 1: dalee(); break;
        case 2: one(); break;
        case 3: two(); break;
        case 4: sprav(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
