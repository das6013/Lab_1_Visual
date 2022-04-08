#ifndef AREA_H
#define AREA_H


#include "figure.h"
#include <QWidget>

class Area : public QWidget
{
    int myTimer; // timer
    float alpha; // alpha
public:
    Area(QWidget *parent = 0);
    ~Area();
    MyLine *myline; // line
    MyRect *myrect; // rect
protected:
    //обработчики событий
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);
};

#endif // AREA_H
