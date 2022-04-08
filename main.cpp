#include "mainwindow.h"
#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include "win.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); //создание объекта приложения
    Win win; //схдание объекта управления окном
    win.show(); //визуализация окна
    return app.exec(); //запуск цикла обработки прилжения
}
