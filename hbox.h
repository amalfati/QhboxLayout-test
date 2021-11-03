#ifndef HBOX_H
#define HBOX_H

#include <QWidget>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QHBoxLayout>
#include<QApplication>



class hbox : public QWidget
{
public:
    explicit hbox(QWidget *parent = nullptr);

protected:
    void createWidgets();
    void placeWidgets();
    void makeConnexions();
protected:
    QPushButton *search;
    QLabel *name;
    QLineEdit *edit;

};

#endif
