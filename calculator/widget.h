#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QSignalMapper;
class QPushButton;
class QLCDNumber;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private:
    void createWidget();

private:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;

    QPushButton *pushButtonPlus;
    QPushButton *pushButtonC;
    QLCDNumber *lcdNumber;


};


#endif // WIDGET_H
