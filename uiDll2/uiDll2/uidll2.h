#ifndef UIDLL2_H
#define UIDLL2_H

#include "uidll2_global.h"
#include <QWidget>

class UIDLL2SHARED_EXPORT UiDll2
{

private:
    QWidget *myWidget;

public:
    UiDll2();
    QWidget* getWidget();
};

#endif // UIDLL2_H
