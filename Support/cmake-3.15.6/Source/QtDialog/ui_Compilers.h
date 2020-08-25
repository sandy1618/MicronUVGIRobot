/********************************************************************************
** Form generated from reading UI file 'Compilers.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPILERS_H
#define UI_COMPILERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "QCMakeWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_Compilers
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout1;
    QLabel *label_16;
    QCMakeFilePathEditor *CCompiler;
    QLabel *label_17;
    QCMakeFilePathEditor *CXXCompiler;
    QLabel *label_18;
    QCMakeFilePathEditor *FortranCompiler;

    void setupUi(QWidget *Compilers)
    {
        if (Compilers->objectName().isEmpty())
            Compilers->setObjectName(QStringLiteral("Compilers"));
        Compilers->resize(506, 115);
        gridLayout = new QGridLayout(Compilers);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(Compilers);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout1 = new QGridLayout(groupBox_4);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(4, 4, 4, -1);
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout1->addWidget(label_16, 0, 0, 1, 1);

        CCompiler = new QCMakeFilePathEditor(groupBox_4);
        CCompiler->setObjectName(QStringLiteral("CCompiler"));

        gridLayout1->addWidget(CCompiler, 0, 1, 1, 1);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout1->addWidget(label_17, 0, 2, 1, 1);

        CXXCompiler = new QCMakeFilePathEditor(groupBox_4);
        CXXCompiler->setObjectName(QStringLiteral("CXXCompiler"));

        gridLayout1->addWidget(CXXCompiler, 0, 3, 1, 1);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout1->addWidget(label_18, 1, 0, 1, 1);

        FortranCompiler = new QCMakeFilePathEditor(groupBox_4);
        FortranCompiler->setObjectName(QStringLiteral("FortranCompiler"));

        gridLayout1->addWidget(FortranCompiler, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_4, 0, 0, 1, 1);


        retranslateUi(Compilers);

        QMetaObject::connectSlotsByName(Compilers);
    } // setupUi

    void retranslateUi(QWidget *Compilers)
    {
        Compilers->setWindowTitle(QApplication::translate("Compilers", "Form", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Compilers", "Compilers", Q_NULLPTR));
        label_16->setText(QApplication::translate("Compilers", "C", Q_NULLPTR));
        label_17->setText(QApplication::translate("Compilers", "C++", Q_NULLPTR));
        label_18->setText(QApplication::translate("Compilers", "Fortran", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Compilers: public Ui_Compilers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPILERS_H
