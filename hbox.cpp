#include "hbox.h"


hbox::hbox(QWidget *parent) : QWidget(parent)
{
createWidgets();

placeWidgets();

makeConnexions();

}void hbox::createWidgets(){
    name =new QLabel("name");
    edit =new QLineEdit;
    search =new QPushButton("search");
}
void hbox::placeWidgets(){
    auto layout =new QHBoxLayout;
    this->setLayout(layout);
    layout->addWidget(name);
    layout->addWidget(edit);
    layout->addWidget(search);
}
void hbox::makeConnexions(){
connect(search, SIGNAL(clicked()),
          this, SLOT(findClicked()));
connect(name, SIGNAL(textChanged(const QString &)),
           this, SLOT(enableFindButton(const QString &)));
}
