/****************************************************************************
** Meta object code from reading C++ file 'vvod.h'
**
** Created: Sat Oct 29 18:14:13 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vvod.h"
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
      12,   14, // methods
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
      42,    5,    5,    5, 0x0a,
      51,    5,    5,    5, 0x0a,
      60,    5,    5,    5, 0x0a,
      69,    5,    5,    5, 0x0a,
      78,    5,    5,    5, 0x0a,
      87,    5,    5,    5, 0x0a,
      96,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_vvod[] = {
    "vvod\0\0nazad()\0dalee()\0one()\0two()\0"
    "sprav()\0color1()\0color3()\0color4()\0"
    "color5()\0color6()\0color7()\0gran()\0"
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
        case 5: color1(); break;
        case 6: color3(); break;
        case 7: color4(); break;
        case 8: color5(); break;
        case 9: color6(); break;
        case 10: color7(); break;
        case 11: gran(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE