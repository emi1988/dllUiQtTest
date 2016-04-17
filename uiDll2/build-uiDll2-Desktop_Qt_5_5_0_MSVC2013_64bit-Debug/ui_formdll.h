/********************************************************************************
** Form generated from reading UI file 'formdll.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDLL_H
#define UI_FORMDLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormDll
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton2;

    void setupUi(QWidget *FormDll)
    {
        if (FormDll->objectName().isEmpty())
            FormDll->setObjectName(QStringLiteral("FormDll"));
        FormDll->resize(400, 300);
        verticalLayout = new QVBoxLayout(FormDll);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton2 = new QPushButton(FormDll);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));

        verticalLayout->addWidget(pushButton2);


        retranslateUi(FormDll);

        QMetaObject::connectSlotsByName(FormDll);
    } // setupUi

    void retranslateUi(QWidget *FormDll)
    {
        FormDll->setWindowTitle(QApplication::translate("FormDll", "Form", 0));
        pushButton2->setText(QApplication::translate("FormDll", "PushButton2", 0));
    } // retranslateUi

};

namespace Ui {
    class FormDll: public Ui_FormDll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDLL_H
