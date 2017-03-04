#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QVBoxLayout>
#include "dimagebutton.h"

DWIDGET_USE_NAMESPACE

class HomePage : public QWidget
{
    Q_OBJECT
    
public:
    HomePage(QWidget *parent = 0);
    
    DImageButton* recordButton;
    
private:
    QVBoxLayout* recordButtonLayout;
};

#endif