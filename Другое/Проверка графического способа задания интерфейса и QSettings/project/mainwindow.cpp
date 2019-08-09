#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(APPLICATION_NAME);

    QSettings settings(ORGANIZATION_NAME, APPLICATION_NAME);

    ui->trayCheckBox_1->setChecked(settings.value(SETTINGS_BUTTON_1, false).toBool());
    ui->trayCheckBox_2->setChecked(settings.value(SETTINGS_BUTTON_2, false).toBool());

    ui->lineEdit->setText(settings.value(SETTINGS_TEXT, "").toString());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_saveButton_clicked()
{
    QSettings settings(ORGANIZATION_NAME, APPLICATION_NAME);

    if(ui->trayCheckBox_1->isChecked()){
        settings.setValue(SETTINGS_BUTTON_1, true);
    } else {
        settings.setValue(SETTINGS_BUTTON_1, false);
    }

    if(ui->trayCheckBox_2->isChecked()){
        settings.setValue(SETTINGS_BUTTON_2, true);
    } else {
        settings.setValue(SETTINGS_BUTTON_2, false);
    }

    settings.setValue(SETTINGS_TEXT, ui->lineEdit->text());

    settings.sync();

}
