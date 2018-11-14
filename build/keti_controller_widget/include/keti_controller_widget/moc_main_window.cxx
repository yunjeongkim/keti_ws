/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/keti_controller_widget/include/keti_controller_widget/main_window.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_keti_controller_widget__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x0a,
      69,   63,   35,   35, 0x0a,
     107,  101,   35,   35, 0x0a,
     153,   35,   35,   35, 0x0a,
     178,  173,   35,   35, 0x0a,
     208,  173,   35,   35, 0x0a,
     240,  173,   35,   35, 0x0a,
     288,  173,   35,   35, 0x0a,
     333,  173,   35,   35, 0x0a,
     380,  173,   35,   35, 0x0a,
     437,   35,   35,   35, 0x0a,
     480,   35,   35,   35, 0x0a,
     523,   35,   35,   35, 0x0a,
     565,   35,   35,   35, 0x0a,
     605,   35,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_keti_controller_widget__MainWindow[] = {
    "keti_controller_widget::MainWindow\0\0"
    "on_actionAbout_triggered()\0check\0"
    "on_button_connect_clicked(bool)\0state\0"
    "on_checkbox_use_environment_stateChanged(int)\0"
    "updateLoggingView()\0arg1\0"
    "on_checkBox_stateChanged(int)\0"
    "on_checkBox_2_stateChanged(int)\0"
    "on_checkBoxAutomotiveSteering_stateChanged(int)\0"
    "on_checkBoxAutomotiveSpeed_stateChanged(int)\0"
    "on_checkBoxAutomotiveBraking_stateChanged(int)\0"
    "on_checkBoxIgnoreDriveSteeringOverride_stateChanged(int)\0"
    "on_lineEditSteeringSpeed_editingFinished()\0"
    "on_lineEditSteeringAngle_editingFinished()\0"
    "on_lineEditDisplaySpeed_editingFinished()\0"
    "on_lineEditControlAcc_editingFinished()\0"
    "on_pushButton_clicked()\0"
};

void keti_controller_widget::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
        case 6: _t->on_checkBoxAutomotiveSteering_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_checkBoxAutomotiveSpeed_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_checkBoxAutomotiveBraking_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_checkBoxIgnoreDriveSteeringOverride_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_lineEditSteeringSpeed_editingFinished(); break;
        case 11: _t->on_lineEditSteeringAngle_editingFinished(); break;
        case 12: _t->on_lineEditDisplaySpeed_editingFinished(); break;
        case 13: _t->on_lineEditControlAcc_editingFinished(); break;
        case 14: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData keti_controller_widget::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject keti_controller_widget::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_keti_controller_widget__MainWindow,
      qt_meta_data_keti_controller_widget__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &keti_controller_widget::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *keti_controller_widget::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *keti_controller_widget::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_keti_controller_widget__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int keti_controller_widget::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
