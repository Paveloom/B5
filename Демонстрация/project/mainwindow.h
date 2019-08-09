#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QTextCodec>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QString>
#include <QIntValidator>

/* Defining */
#define ORGANIZATION_NAME "paveloom"
#define ORGANIZATION_DOMAIN "http://paveloom.tk"
#define APPLICATION_NAME "Demonstration"

#define SETTINGS_LINEEDIT_1 "setting/lineedit_1"

#define SETTINGS_CHECKBOX_1 "settings/checkbox_1"

#define SETTINGS_CHECKBOX_2 "settings/checkbox_2"
#define SETTINGS_CHECKBOX_2_ENABLED "settings/checkbox_2_enabled"

#define SETTINGS_LINEEDIT_2 "setting/lineedit_2"
#define SETTINGS_LINEEDIT_2_ENABLED "setting/lineedit_2_enabled"

#define SETTINGS_CHECKBOX_3 "setting/checkbox_3"

#define SETTINGS_CHECKBOX_4 "setting/checkbox_4"

#define SETTINGS_LINEEDIT_3 "setting/lineedit_3"

#define SETTINGS_LINEEDIT_4 "setting/lineedit_4"

#define SETTINGS_LINEEDIT_5 "setting/lineedit_5"
#define SETTINGS_LINEEDIT_5_ENABLED "setting/lineedit_5_enabled"
#define SETTINGS_LINEEDIT_6 "setting/lineedit_6"
#define SETTINGS_LINEEDIT_6_ENABLED "setting/lineedit_6_enabled"

#define FILENAME "settings"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_saveButton_clicked();
    void on_checkBox_stateChanged();
    void on_checkBox_2_stateChanged();
    void on_checkBox_3_stateChanged();

private:
    Ui::MainWindow * ui;
};

#endif // MAINWINDOW_H
