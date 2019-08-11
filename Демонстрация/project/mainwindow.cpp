#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(APPLICATION_NAME);

    QSettings settings(ORGANIZATION_NAME, APPLICATION_NAME);

    ui->lineEdit_1->setText(settings.value(SETTINGS_LINEEDIT_1, "").toString());
    ui->lineEdit_1->setValidator( new QIntValidator(this) );

    ui->checkBox->setChecked(settings.value(SETTINGS_CHECKBOX_1, false).toBool());

    ui->checkBox_2->setChecked(settings.value(SETTINGS_CHECKBOX_2, false).toBool());
    ui->checkBox_2->setEnabled(settings.value(SETTINGS_CHECKBOX_2_ENABLED, ui->checkBox->isChecked()).toBool());

    ui->lineEdit_2->setText(settings.value(SETTINGS_LINEEDIT_2, "").toString());
    ui->lineEdit_2->setValidator( new QIntValidator(this) );
    ui->lineEdit_2->setEnabled(settings.value(SETTINGS_LINEEDIT_2_ENABLED, ui->checkBox_2->isChecked() and ui->checkBox->isChecked()).toBool());

    ui->checkBox_3->setChecked(settings.value(SETTINGS_CHECKBOX_3, false).toBool());

    ui->checkBox_4->setChecked(settings.value(SETTINGS_CHECKBOX_4, false).toBool());

    ui->lineEdit_3->setText(settings.value(SETTINGS_LINEEDIT_3, "").toString());
    ui->lineEdit_3->setValidator( new QIntValidator(this) );

    ui->lineEdit_4->setText(settings.value(SETTINGS_LINEEDIT_4, "").toString());
    ui->lineEdit_4->setValidator( new QIntValidator(this) );

    ui->lineEdit_5->setText(settings.value(SETTINGS_LINEEDIT_5, "").toString());
    ui->lineEdit_5->setValidator( new QIntValidator(this) );
    ui->lineEdit_5->setEnabled(settings.value(SETTINGS_LINEEDIT_5_ENABLED, not ui->checkBox_3->isChecked()).toBool());

    ui->lineEdit_6->setText(settings.value(SETTINGS_LINEEDIT_6, "").toString());
    ui->lineEdit_6->setValidator( new QIntValidator(this) );
    ui->lineEdit_6->setEnabled(settings.value(SETTINGS_LINEEDIT_6_ENABLED, not ui->checkBox_3->isChecked()).toBool());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_saveButton_clicked()
{
    QSettings settings(ORGANIZATION_NAME, APPLICATION_NAME);

    settings.setValue(SETTINGS_LINEEDIT_1, ui->lineEdit_1->text());

    settings.setValue(SETTINGS_CHECKBOX_1, ui->checkBox->isChecked());

    settings.setValue(SETTINGS_CHECKBOX_2, ui->checkBox_2->isChecked());
    settings.setValue(SETTINGS_CHECKBOX_2_ENABLED, ui->checkBox_2->isEnabled());

    settings.setValue(SETTINGS_LINEEDIT_2, ui->lineEdit_2->text());
    settings.setValue(SETTINGS_LINEEDIT_2_ENABLED, ui->lineEdit_2->isEnabled());

    settings.setValue(SETTINGS_CHECKBOX_3, ui->checkBox_3->isChecked());

    settings.setValue(SETTINGS_CHECKBOX_4, ui->checkBox_4->isChecked());

    settings.setValue(SETTINGS_LINEEDIT_3, ui->lineEdit_3->text());

    settings.setValue(SETTINGS_LINEEDIT_4, ui->lineEdit_4->text());

    settings.setValue(SETTINGS_LINEEDIT_5, ui->lineEdit_5->text());
    settings.setValue(SETTINGS_LINEEDIT_6, ui->lineEdit_6->text());
    settings.setValue(SETTINGS_LINEEDIT_5_ENABLED, ui->lineEdit_5->isEnabled());
    settings.setValue(SETTINGS_LINEEDIT_6_ENABLED, ui->lineEdit_6->isEnabled());

    settings.sync();

    QTextCodec::setCodecForLocale( QTextCodec::codecForName( "UTF-8" ) );

    QFile file("settings");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream stream(&file);

    stream << QString("   1. Размер выборки (обязательно)") << endl;
    stream << QString("\n   " + ui->lineEdit_1->text()) + "\n" << endl;

    stream << QString("   2. Использовать массив исключений? (.true. - да, .false. - нет) (обязательно)") << endl;

    if (ui->checkBox->isChecked()) {
        stream << QString("\n   .true.\n") << endl;
    } else {
        stream << QString("\n   .false.\n") << endl;
    }

    stream << QString("   3. Заполнять массив исключений вручную (указание в процедуре F0 в коде модуля\n"
                      "   программы) или искать значения индексов исключений программно (может замедлить программу)?\n"
                      "   (.true. - первое, .false. - второе) (обязательно, если П2 (значение параметра 2) = 0)") << endl;

    if (ui->checkBox_2->isChecked()) {
        stream << QString("\n   .true.\n") << endl;
    } else {
        stream << QString("\n   .false.\n") << endl;
    }

    stream << QString("   4. Число исключений (обязательно, если П2 = 0 и П3 = 0)") << endl;
    stream << QString("\n   " + ui->lineEdit_2->text()) + "\n" << endl;

    stream << QString("   5. Использовать указанный диапазон частот для вычисления периодограммы или\n"
                      "   считать по полному диапазону? (.true. - считать по полному диапазону,\n"
                      "   .false. - использовать указанный диапазон частот) (обязательно)") << endl;

    if (ui->checkBox_3->isChecked()) {
        stream << QString("\n   .true.\n") << endl;
    } else {
        stream << QString("\n   .false.\n") << endl;
    }

    stream << QString("   6. Приводить коэффициенты корреляции к несмещённой оценке? .true. - да,\n"
                      "   .false. - нет) (обязательно)") << endl;

    if (ui->checkBox_4->isChecked()) {
        stream << QString("\n   .true.\n") << endl;
    } else {
        stream << QString("\n   .false.\n") << endl;
    }

    stream << QString("   7. Множитель дискретизации множителей p (для частот) (обязательно)") << endl;
    stream << QString("\n   " + ui->lineEdit_3->text()) + "\n" << endl;

    stream << QString("   8. Множитель дискретизации множителей t (для периодов) (обязательно)") << endl;
    stream << QString("\n   " + ui->lineEdit_4->text()) + "\n" << endl;

    stream << QString("   9. Границы рабочего диапазона частот (обязателен, если П5 != 0)") << endl;
    stream << QString("\n   " + ui->lineEdit_5->text()) << endl;
    stream << QString("   " + ui->lineEdit_6->text()) << endl;

    file.close();
}

void MainWindow::on_checkBox_stateChanged()
{
    QSettings settings(ORGANIZATION_NAME, APPLICATION_NAME);

    if(ui->checkBox->isChecked()){
        ui->checkBox_2->setEnabled(true);

        if(ui->checkBox_2->isChecked()){
            ui->lineEdit_2->setEnabled(true);
        }
    } else {
        ui->checkBox_2->setEnabled(false);

        ui->lineEdit_2->setEnabled(false);
    }

}

void MainWindow::on_checkBox_2_stateChanged()
{

    if(ui->checkBox->isChecked() and ui->checkBox_2->isChecked()){
        ui->lineEdit_2->setEnabled(true);
    } else {
        ui->lineEdit_2->setEnabled(false);
    }

}

void MainWindow::on_checkBox_3_stateChanged()
{
    if(ui->checkBox_3->isChecked()){
        ui->lineEdit_5->setEnabled(false);
        ui->lineEdit_6->setEnabled(false);
    } else {
        ui->lineEdit_5->setEnabled(true);
        ui->lineEdit_6->setEnabled(true);
    }
}
