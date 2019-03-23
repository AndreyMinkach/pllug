#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGridLayout>
class QSignalMapper;
class QPushButton;
class QLCDNumber;

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    void createWidget();
private slots:
    void slotClear();
    void slotButtonPressed(int pNum);
    void slotPlusEqual();
    void slotMinusEqual();
    void slotMultEqual();
    void slotDivisionEqual();
private:
    int mEnd; // Результат
    int mNextNumber; //Наступнийдоданок

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

    QPushButton *pushButtonMult;
    QPushButton *pushButtonDivision;
    QPushButton *pushButtonMinus;
    QPushButton *pushButtonPlus;
    QPushButton *pushButtonC;

    QLCDNumber *lcdNumber;

    QSignalMapper *mMapper;
    QGridLayout *lCalcLayout;
};


#endif // WIDGET_H
