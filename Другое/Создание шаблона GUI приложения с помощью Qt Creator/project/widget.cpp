#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle(tr("Hello world!!!"));
    setMinimumSize(200, 80);

    QLabel * plb = new QLabel(tr("Test"), this);
    plb->setGeometry(20, 20, 80, 24);

    QLineEdit * ple = new QLineEdit(this);
    ple->setGeometry(110, 20, 80, 24);

    QPushButton * ppb = new QPushButton(tr("Ok"), this);
    ppb->setGeometry(20, 50, 80, 24);
}

Widget::~Widget()
{

}
