/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Sun 16. Oct 13:07:37 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../interface/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dialog[] = {

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
       8,    7,    7,    7, 0x0a,
      15,    7,    7,    7, 0x0a,
      27,    7,    7,    7, 0x0a,
      40,    7,    7,    7, 0x0a,
      51,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dialog[] = {
    "dialog\0\0exit()\0nazadvvod()\0nazadvibor()\0"
    "nazaddan()\0vmenu()\0"
};

const QMetaObject dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dialog,
      qt_meta_data_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dialog))
        return static_cast<void*>(const_cast< dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: exit(); break;
        case 1: nazadvvod(); break;
        case 2: nazadvibor(); break;
        case 3: nazaddan(); break;
        case 4: vmenu(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
