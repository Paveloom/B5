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

#define SETTINGS_BUTTON_1 "settings/button_1"
#define SETTINGS_BUTTON_2 "settings/button_2"
#define SETTINGS_TEXT "setting/text"

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

private:
    Ui::MainWindow * ui;
};

#endif // MAINWINDOW_H
