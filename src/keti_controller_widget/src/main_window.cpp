/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "../include/keti_controller_widget/main_window.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace keti_controller_widget {

using namespace Qt;

/*****************************************************************************
** Implementation [MainWindow]
*****************************************************************************/

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
	: QMainWindow(parent)

{
  qnode = new QNode(argc,argv);
  ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    QObject::connect(ui.actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application

    ReadSettings();
  setWindowIcon(QIcon(":/images/icon.png"));
  ui.tab_manager->setCurrentIndex(0); // ensure the first tab is showing - qt-designer should have this already hardwired, but often loses it (settings?).
    QObject::connect(qnode, SIGNAL(rosShutdown()), this, SLOT(close()));

    if ( !qnode->init() ) {
      showNoMasterMessage();
    }
}

MainWindow::~MainWindow() {}

/*****************************************************************************
** Implementation [Slots]
*****************************************************************************/

void MainWindow::showNoMasterMessage() {
	QMessageBox msgBox;
	msgBox.setText("Couldn't find the ros master.");
	msgBox.exec();
    close();
}





/*****************************************************************************
** Implementation [Menu]
*****************************************************************************/

void MainWindow::on_actionAbout_triggered() {
    QMessageBox::about(this, tr("About ..."),tr("<h2>PACKAGE_NAME Test Program 0.10</h2><p>Copyright Yujin Robot</p><p>This package needs an about description.</p>"));
}

/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/

void MainWindow::ReadSettings() {
  QSettings settings("Qt-Ros Package", "conf_sender");
  restoreGeometry(settings.value("geometry").toByteArray());
  restoreState(settings.value("windowState").toByteArray());
}

void MainWindow::WriteSettings() {
  QSettings settings("Qt-Ros Package", "conf_sender");
  settings.setValue("geometry", saveGeometry());
  settings.setValue("windowState", saveState());

}

void MainWindow::closeEvent(QCloseEvent *event)
{
	WriteSettings();
	QMainWindow::closeEvent(event);
}

}  // namespace keti_controller_widget



void keti_controller_widget::MainWindow::on_checkBoxAutomotiveSteering_stateChanged(int arg1)
{
  if(arg1){
    qnode->apm_en=true;
  }else{
    qnode->apm_en=false;
  }
}

void keti_controller_widget::MainWindow::on_checkBoxAutomotiveSpeed_stateChanged(int arg1)
{
  if(arg1){
   qnode->asm_en=true;
  }else{
    qnode->asm_en=false;
  }
}

void keti_controller_widget::MainWindow::on_checkBoxAutomotiveBraking_stateChanged(int arg1)
{
  if(arg1){
    qnode->acc_stopreq=true;
  }else{
    qnode->acc_stopreq=false;
  }
}

void keti_controller_widget::MainWindow::on_checkBoxIgnoreDriveSteeringOverride_stateChanged(int arg1)
{
  if(arg1){
    qnode->apm_ignore = true;
  }else{
    qnode->apm_ignore = false;
  }
}

void keti_controller_widget::MainWindow::on_lineEditSteeringSpeed_editingFinished()
{
  qnode->apm_slevel = ui.lineEditSteeringSpeed->text().toInt();
}

void keti_controller_widget::MainWindow::on_lineEditSteeringAngle_editingFinished()
{
  qnode->steering_cmd = ui.lineEditSteeringAngle->text().toFloat();
}

void keti_controller_widget::MainWindow::on_lineEditDisplaySpeed_editingFinished()
{
   qnode->disp_speed = ui.lineEditDisplaySpeed->text().toFloat();
}

void keti_controller_widget::MainWindow::on_lineEditControlAcc_editingFinished()
{
  qnode->acc_cmd = ui.lineEditControlAcc->text().toFloat();
}

void keti_controller_widget::MainWindow::on_pushButton_clicked()
{
  if(qnode->button_pressed == 0) // init
  {
     qnode->button_pressed = 1; //run
     ui.pushButton->setText("Stop");
  }

  else if(qnode->button_pressed == 1)
  {
    ui.pushButton->setText("Start");
    qnode->button_pressed = 2; //stop
  }
  else if(qnode->button_pressed == 2)
  {
    ui.pushButton->setText("Stop");
    qnode->button_pressed = 1;
  }
}
