#include "uidll2.h"
#include "formdll.h"


UiDll2::UiDll2()
{

    myWidget = new FormDll();


}

QWidget *UiDll2::getWidget()
{


    return myWidget;

}
