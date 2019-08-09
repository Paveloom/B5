#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>

/* Defining */
#define ORGANIZATION_NAME "paveloom"
#define ORGANIZATION_DOMAIN "http://paveloom.tk"
#define APPLICATION_NAME "Settings Generator"

#define SETTINGS_BUTTON_1 "settings/button_1"
#define SETTINGS_BUTTON_2 "settings/button_2"
#define SETTINGS_TEXT "setting/text"

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

    /* Слот для кнопки, запускающей сохранение настроек приложения
     * */
    void on_saveButton_clicked();

private:
    Ui::MainWindow          * ui;
};

#endif // MAINWINDOW_H
