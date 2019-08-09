#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(APPLICATION_NAME);

    QSettings settings(ORGANIZATION_NAME, APPLICATION_NAME);

    ui->checkBox->setChecked(settings.value(SETTINGS_CHECKBOX_1, false).toBool());
    ui->checkBox_2->setChecked(settings.value(SETTINGS_CHECKBOX_2, false).toBool());

    ui->checkBox_2->setEnabled(settings.value(SETTINGS_CHECKBOX_2_ENABLED, ui->checkBox->isChecked()).toBool());

    ui->lineEdit_1->setText(settings.value(SETTINGS_LINEEDIT_1, "").toString());
    ui->lineEdit_1->setValidator( new QIntValidator(this) );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_saveButton_clicked()
{
    QSettings settings(ORGANIZATION_NAME, APPLICATION_NAME);

    if(ui->checkBox->isChecked()){
        settings.setValue(SETTINGS_CHECKBOX_1, true);
    } else {
        settings.setValue(SETTINGS_CHECKBOX_1, false);
    }

    if(ui->checkBox_2->isChecked()){
        settings.setValue(SETTINGS_CHECKBOX_2, true);
    } else {
        settings.setValue(SETTINGS_CHECKBOX_2, false);
    }

    settings.setValue(SETTINGS_LINEEDIT_1, ui->lineEdit_1->text());

    settings.sync();

    QTextCodec::setCodecForLocale( QTextCodec::codecForName( "UTF-8" ) );

    QFile file("settings");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream stream(&file);

        stream << QString(ui->lineEdit_1->text()) << endl;

    file.close();
}

void MainWindow::on_checkBox_stateChanged()
{
    QSettings settings(ORGANIZATION_NAME, APPLICATION_NAME);

    if(ui->checkBox->isChecked()){
        ui->checkBox_2->setEnabled(true);
        settings.setValue(SETTINGS_CHECKBOX_2_ENABLED, true);
    } else {
        ui->checkBox_2->setEnabled(false);
        settings.setValue(SETTINGS_CHECKBOX_2_ENABLED, false);
    }
}
