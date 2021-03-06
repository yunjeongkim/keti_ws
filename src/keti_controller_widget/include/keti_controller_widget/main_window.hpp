/**
 * @file /include/keti_controller_widget/main_window.hpp
 *
 * @brief Qt based gui for keti_controller_widget.
 *
 * @date November 2010
 **/
#ifndef keti_controller_widget_MAIN_WINDOW_H
#define keti_controller_widget_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui/QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"

/*****************************************************************************
** Namespace
*****************************************************************************/

namespace keti_controller_widget {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
Q_OBJECT

public:
	MainWindow(int argc, char** argv, QWidget *parent = 0);
	~MainWindow();

	void ReadSettings(); // Load up qt program settings at startup
	void WriteSettings(); // Save qt program settings when closing

	void closeEvent(QCloseEvent *event); // Overloaded function
	void showNoMasterMessage();

public Q_SLOTS:
	/******************************************
	** Auto-connections (connectSlotsByName())
	*******************************************/
	void on_actionAbout_triggered();
	void on_button_connect_clicked(bool check );
	void on_checkbox_use_environment_stateChanged(int state);

    /******************************************
    ** Manual connections
    *******************************************/
    void updateLoggingView(); // no idea why this can't connect automatically

//private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBoxAutomotiveSteering_stateChanged(int arg1);

    void on_checkBoxAutomotiveSpeed_stateChanged(int arg1);

    void on_checkBoxAutomotiveBraking_stateChanged(int arg1);

    void on_checkBoxIgnoreDriveSteeringOverride_stateChanged(int arg1);

    void on_lineEditSteeringSpeed_editingFinished();

    void on_lineEditSteeringAngle_editingFinished();

    void on_lineEditDisplaySpeed_editingFinished();

    void on_lineEditControlAcc_editingFinished();

//private slots:
    void on_pushButton_clicked();

private:
	Ui::MainWindowDesign ui;
  QNode* qnode;
};

}  // namespace keti_controller_widget

#endif // keti_controller_widget_MAIN_WINDOW_H
