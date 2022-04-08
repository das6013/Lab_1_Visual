#include "area.h"


Area::Area(QWidget *parent):QWidget(parent)
{
    setFixedSize(QSize(300,200)); //Size plane
    myline=new MyLine(80,100,50); //create line
    myrect=new MyRect(220,100,50); //rect
    alpha=0; //угол
}
void Area::showEvent(QShowEvent *)
{
    myTimer=startTimer(50); // timer
}
void Area::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(Qt::red); //defult color pen
    myline->move(alpha,&painter); //change alpha
    myrect->move(alpha*(-0.5),&painter); //change alpha rect
}
void Area::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == myTimer) // check timer
    {
        alpha=alpha+0.2;
        update();
    }
    else
        QWidget::timerEvent(event);

}
void Area::hideEvent(QHideEvent *)
{
    killTimer(myTimer);
}
Area::~Area()
{
    delete myline;
    delete myrect;
}
