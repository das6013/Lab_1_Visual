#ifndef WIN_H
#define WIN_H

#include <QtGui>
#include <QPushButton>
#include "area.h"

class Win : public QWidget
{
protected:
    Area * area; // область отображения рисунка
    QPushButton * btn; // кнопка выхода
public:
    Win(); //конструктор
};

#endif // WINDOW_H

