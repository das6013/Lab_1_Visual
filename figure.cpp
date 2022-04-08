#include "figure.h"
#include <math.h>

void Figure::move(float Alpha,QPainter *Painter)
{
    dx=halflen*cos(Alpha);//count Alpha
    dy=halflen*sin(Alpha);
    draw(Painter); //start
}
void MyLine::draw(QPainter *Painter)
{
    Painter->drawLine(x+dx,y+dy,x-dx,y-dy); //draw line
}
void MyRect::draw(QPainter *Painter) //draw rect for 4 point
{
    Painter->drawLine(x+dx,y+dy,x+dy,y-dx);
    Painter->drawLine(x+dy,y-dx,x-dx,y-dy);
    Painter->drawLine(x-dx,y-dy,x-dy,y+dx);
    Painter->drawLine(x-dy,y+dx,x+dx,y+dy);
}
