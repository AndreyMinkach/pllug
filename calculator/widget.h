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
    QSignalMapper *mapper() const;
    void setMapper(QSignalMapper *mapper);

    QPushButton *getPushButtonPlus() const;
    void setPushButtonPlus(QPushButton *value);

    QPushButton *getPushButtonMinus() const;
    void setPushButtonMinus(QPushButton *value);

    QPushButton *getPushButtonDivision() const;
    void setPushButtonDivision(QPushButton *value);

    QPushButton *getPushButtonMult() const;
    void setPushButtonMult(QPushButton *value);

private:
    void createWidget();
public slots:
    void slotClear();
    void slotButtonPressed(int pNum);
    void slotPlusEqual();
    void slotMinusEqual();
    void slotMultEqual();
    void slotDivisionEqual();
private:
    int mEnd; // Результат
    int mNextNumber; //Наступнийдоданок

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

    QPushButton *pushButtonMult;
    QPushButton *pushButtonDivision;
    QPushButton *pushButtonMinus;
    QPushButton *pushButtonPlus;
    QPushButton *pushButtonC;
    QLCDNumber *lcdNumber;

private:
    QSignalMapper *mMapper;

};


#endif // WIDGET_H
