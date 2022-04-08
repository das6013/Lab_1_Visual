#ifndef FIGURE_H
#define FIGURE_H
#include <QtGui>
class Figure //Parent class
{
protected:
    int x,y,halflen,dx,dy,r;
    virtual void draw(QPainter *Painter)=0;
public:
    Figure(int X,int Y,int Halflen):
        x(X),y(Y),halflen(Halflen){} //consrutor
    void move(float Alpha,QPainter *Painter);
};

class MyLine:public Figure //класс линия
{
protected:
    void draw(QPainter *Painter);
public:
    MyLine(int x,int y,int halflen):Figure(x,y,halflen){} //consructor line
};
class MyRect:public Figure //class rect
{
protected:
    void draw(QPainter *Painter);
public:
    MyRect(int x,int y,int halflen):Figure(x,y,halflen){}
};
#endif // FIGURE_H
