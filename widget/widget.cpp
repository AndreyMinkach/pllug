#include "widget.h"

#include <QHBoxLayout>
#include <QVBoxLayout>

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QLineEdit *lLineEdit = new QLineEdit(parent);
    lLineEdit->setText("text 1");
    QLabel *lLabel = new QLabel("label 1");
    lLabel->setBuddy(lLineEdit);

    QHBoxLayout *lHBoxLayout = new QHBoxLayout;
    lHBoxLayout->addWidget(lLabel);
    lHBoxLayout->addWidget(lLineEdit);

    QLineEdit *lLineEdit2 = new QLineEdit("Text 2");
    QLabel *lLabel2 = new QLabel("Line Edit &2");
    lLabel2->setBuddy(lLineEdit2);
    QHBoxLayout * lHBoxLayout2 = new QHBoxLayout;
    lHBoxLayout2->addWidget(lLabel2);
    lHBoxLayout2->addWidget(lLineEdit2);

    QPushButton *lPushButtonOk = new QPushButton("&Ok");
    QPushButton *lPushButtonCancel = new QPushButton("&Cancel");
    QHBoxLayout *lHBoxLayout3 = new QHBoxLayout;

    lHBoxLayout3->addStretch();
    lHBoxLayout3->addWidget(lPushButtonOk);
    lHBoxLayout3->addWidget(lPushButtonCancel);

    QVBoxLayout *lVBoxLayout = new QVBoxLayout;
    lVBoxLayout->addLayout(lHBoxLayout);
    lVBoxLayout->addLayout(lHBoxLayout2);
    lVBoxLayout->addLayout(lHBoxLayout3);
    setLayout(lVBoxLayout);
    lLineEdit->show();
    lLineEdit2->show();
}

Widget::~Widget()
{

}
