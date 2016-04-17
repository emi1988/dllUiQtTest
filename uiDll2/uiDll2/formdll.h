#ifndef FORMDLL_H
#define FORMDLL_H

#include <QWidget>

namespace Ui {
class FormDll;
}

class FormDll : public QWidget
{
    Q_OBJECT

public:
    explicit FormDll(QWidget *parent = 0);
    ~FormDll();

private:
    Ui::FormDll *ui;
};

#endif // FORMDLL_H
