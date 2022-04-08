#include "win.h"
#include <QVBoxLayout>

Win::Win()
{
    this->setWindowTitle("Task 2.9"); //name holder
    area = new Area( this ); //create area
    btn = new QPushButton("Exit",this ); //button
    QVBoxLayout *layout = new QVBoxLayout(this); //set vertalize
    layout->addWidget(area); //connect area
    layout->addWidget(btn); //connect button
    connect(btn, SIGNAL(clicked(bool)),this,SLOT(close()));
};
