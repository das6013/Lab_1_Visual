#ifndef WIN_H
#define WIN_H


#include <QWidget>
#include <QLabel>
#include <QFrame>
#include <QLineEdit>
#include <QPushButton>
#include <QValidator>

class Counter:public QLineEdit //класс счетчик
{
    Q_OBJECT
public:
    Counter(const QString & contents, QWidget *parent=0):
        QLineEdit(contents,parent){} //constructor
signals:
    void tick_signal();
public slots:
    void add_one()
    {
        QString str=text();
        int dig=str.toInt(); //convet to int
        if (dig!=0 && dig%5 ==0) emit tick_signal();
        dig++; //увеличиваем на 1
        str.setNum(dig); //update str
        setText(str); //set new str
    }
};

class Win: public QWidget
{
    Q_OBJECT
protected:
    QLabel *label1,*label2; //метки
    Counter *edit1,*edit2; //чсетчики
    QPushButton *calcbutton; //кнопка увеличения
    QPushButton *exitbutton; //кнопка вызода
public:
    Win(QWidget *parent = 0); //конструктор
};

#endif // WIN_H
