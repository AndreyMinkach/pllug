#include "widget.h"
#include <QSignalMapper>
#include <QPushButton>
#include <QGridLayout>
#include <QLCDNumber>
void Widget::createWidget()
{
 QGridLayout *lCalcLayout = new QGridLayout;
 setLayout(lCalcLayout);

 lcdNumber = new QLCDNumber;
 pushButton = new QPushButton("1");
 pushButton_2 = new QPushButton("2");
 pushButton_3 = new QPushButton("3");
 pushButton_4 = new QPushButton("4");
 pushButton_5 = new QPushButton("5");
 pushButton_6 = new QPushButton("6");
 pushButton_7 = new QPushButton("7");
 pushButton_8 = new QPushButton("8");
 pushButton_9 = new QPushButton("9");
 pushButton_10 = new QPushButton("0");
 pushButtonC = new QPushButton("C");
 pushButtonPlus = new QPushButton("+/=");

 lCalcLayout->addWidget(lcdNumber,0,0,1,4);
 lCalcLayout->addWidget(pushButton,1,0);
 lCalcLayout->addWidget(pushButton_2,1,1);
 lCalcLayout->addWidget(pushButton_3,1,2);
 lCalcLayout->addWidget(pushButton_4,2,0);
 lCalcLayout->addWidget(pushButton_5,2,1);
 lCalcLayout->addWidget(pushButton_6,2,2);
 lCalcLayout->addWidget(pushButton_7,3,0);
 lCalcLayout->addWidget(pushButton_8,3,1);
 lCalcLayout->addWidget(pushButton_9,3,2);
 lCalcLayout->addWidget(pushButton_10,4,0, 1,3);
 lCalcLayout->addWidget(pushButtonC,1,3);
 lCalcLayout->addWidget(pushButtonPlus,2,3,3,1);
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(300,300);
    setWindowTitle("Simple Calc");
    createWidget();
}


Widget::~Widget()
{

}
