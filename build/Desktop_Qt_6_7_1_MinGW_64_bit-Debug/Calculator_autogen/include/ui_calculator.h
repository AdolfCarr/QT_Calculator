/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button_M_Add;
    QPushButton *Button_9;
    QPushButton *Button_M;
    QPushButton *Button_M_Sub;
    QPushButton *Button_mult;
    QPushButton *Button_1;
    QPushButton *Button_7;
    QPushButton *Button_div;
    QPushButton *Button_add;
    QPushButton *Button_3;
    QPushButton *Button_8;
    QPushButton *Button_5;
    QPushButton *Button_4;
    QPushButton *Button_2;
    QPushButton *Button_6;
    QPushButton *Button_AC;
    QPushButton *Button_0;
    QPushButton *Button_sign;
    QPushButton *Button_subs;
    QPushButton *Button_equal;
    QLineEdit *Display;
    QMenuBar *menubar;
    QMenu *menuCalc_QT;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(644, 403);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button_M_Add = new QPushButton(centralwidget);
        Button_M_Add->setObjectName("Button_M_Add");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button_M_Add->sizePolicy().hasHeightForWidth());
        Button_M_Add->setSizePolicy(sizePolicy);
        Button_M_Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF8C00; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_M_Add, 1, 4, 1, 1);

        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName("Button_9");
        sizePolicy.setHeightForWidth(Button_9->sizePolicy().hasHeightForWidth());
        Button_9->setSizePolicy(sizePolicy);
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_9, 1, 2, 1, 1);

        Button_M = new QPushButton(centralwidget);
        Button_M->setObjectName("Button_M");
        sizePolicy.setHeightForWidth(Button_M->sizePolicy().hasHeightForWidth());
        Button_M->setSizePolicy(sizePolicy);
        Button_M->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF8C00; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_M, 3, 4, 1, 1);

        Button_M_Sub = new QPushButton(centralwidget);
        Button_M_Sub->setObjectName("Button_M_Sub");
        sizePolicy.setHeightForWidth(Button_M_Sub->sizePolicy().hasHeightForWidth());
        Button_M_Sub->setSizePolicy(sizePolicy);
        Button_M_Sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF8C00; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_M_Sub, 2, 4, 1, 1);

        Button_mult = new QPushButton(centralwidget);
        Button_mult->setObjectName("Button_mult");
        sizePolicy.setHeightForWidth(Button_mult->sizePolicy().hasHeightForWidth());
        Button_mult->setSizePolicy(sizePolicy);
        Button_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF8C00; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_mult, 2, 3, 1, 1);

        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName("Button_1");
        sizePolicy.setHeightForWidth(Button_1->sizePolicy().hasHeightForWidth());
        Button_1->setSizePolicy(sizePolicy);
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_1, 3, 0, 1, 1);

        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName("Button_7");
        sizePolicy.setHeightForWidth(Button_7->sizePolicy().hasHeightForWidth());
        Button_7->setSizePolicy(sizePolicy);
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_7, 1, 0, 1, 1);

        Button_div = new QPushButton(centralwidget);
        Button_div->setObjectName("Button_div");
        sizePolicy.setHeightForWidth(Button_div->sizePolicy().hasHeightForWidth());
        Button_div->setSizePolicy(sizePolicy);
        Button_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF8C00; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_div, 1, 3, 1, 1);

        Button_add = new QPushButton(centralwidget);
        Button_add->setObjectName("Button_add");
        sizePolicy.setHeightForWidth(Button_add->sizePolicy().hasHeightForWidth());
        Button_add->setSizePolicy(sizePolicy);
        Button_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF8C00; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_add, 3, 3, 1, 1);

        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName("Button_3");
        sizePolicy.setHeightForWidth(Button_3->sizePolicy().hasHeightForWidth());
        Button_3->setSizePolicy(sizePolicy);
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_3, 3, 2, 1, 1);

        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName("Button_8");
        sizePolicy.setHeightForWidth(Button_8->sizePolicy().hasHeightForWidth());
        Button_8->setSizePolicy(sizePolicy);
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_8, 1, 1, 1, 1);

        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName("Button_5");
        sizePolicy.setHeightForWidth(Button_5->sizePolicy().hasHeightForWidth());
        Button_5->setSizePolicy(sizePolicy);
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_5, 2, 1, 1, 1);

        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName("Button_4");
        sizePolicy.setHeightForWidth(Button_4->sizePolicy().hasHeightForWidth());
        Button_4->setSizePolicy(sizePolicy);
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_4, 2, 0, 1, 1);

        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName("Button_2");
        sizePolicy.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy);
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_2, 3, 1, 1, 1);

        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName("Button_6");
        sizePolicy.setHeightForWidth(Button_6->sizePolicy().hasHeightForWidth());
        Button_6->setSizePolicy(sizePolicy);
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_6, 2, 2, 1, 1);

        Button_AC = new QPushButton(centralwidget);
        Button_AC->setObjectName("Button_AC");
        sizePolicy.setHeightForWidth(Button_AC->sizePolicy().hasHeightForWidth());
        Button_AC->setSizePolicy(sizePolicy);
        Button_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_AC, 4, 0, 1, 1);

        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName("Button_0");
        sizePolicy.setHeightForWidth(Button_0->sizePolicy().hasHeightForWidth());
        Button_0->setSizePolicy(sizePolicy);
        Button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_0, 4, 1, 1, 1);

        Button_sign = new QPushButton(centralwidget);
        Button_sign->setObjectName("Button_sign");
        sizePolicy.setHeightForWidth(Button_sign->sizePolicy().hasHeightForWidth());
        Button_sign->setSizePolicy(sizePolicy);
        Button_sign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_sign, 4, 2, 1, 1);

        Button_subs = new QPushButton(centralwidget);
        Button_subs->setObjectName("Button_subs");
        sizePolicy.setHeightForWidth(Button_subs->sizePolicy().hasHeightForWidth());
        Button_subs->setSizePolicy(sizePolicy);
        Button_subs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF8C00; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_subs, 4, 3, 1, 1);

        Button_equal = new QPushButton(centralwidget);
        Button_equal->setObjectName("Button_equal");
        sizePolicy.setHeightForWidth(Button_equal->sizePolicy().hasHeightForWidth());
        Button_equal->setSizePolicy(sizePolicy);
        Button_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF8C00; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_equal, 4, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 644, 26));
        menuCalc_QT = new QMenu(menubar);
        menuCalc_QT->setObjectName("menuCalc_QT");
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        menubar->addAction(menuCalc_QT->menuAction());

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button_M_Add->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Button_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button_M->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Button_M_Sub->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        Button_mult->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Button_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button_div->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button_add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button_AC->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button_sign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Button_subs->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button_equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        menuCalc_QT->setTitle(QCoreApplication::translate("Calculator", "Calculator QT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
