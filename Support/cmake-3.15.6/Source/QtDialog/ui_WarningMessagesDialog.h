/********************************************************************************
** Form generated from reading UI file 'WarningMessagesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGMESSAGESDIALOG_H
#define UI_WARNINGMESSAGESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MessagesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *suppressDeveloperWarnings;
    QCheckBox *suppressDeprecatedWarnings;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *developerWarningsAsErrors;
    QCheckBox *deprecatedWarningsAsErrors;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MessagesDialog)
    {
        if (MessagesDialog->objectName().isEmpty())
            MessagesDialog->setObjectName(QStringLiteral("MessagesDialog"));
        MessagesDialog->resize(300, 300);
        MessagesDialog->setModal(true);
        verticalLayout = new QVBoxLayout(MessagesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(MessagesDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        suppressDeveloperWarnings = new QCheckBox(groupBox);
        suppressDeveloperWarnings->setObjectName(QStringLiteral("suppressDeveloperWarnings"));
        sizePolicy.setHeightForWidth(suppressDeveloperWarnings->sizePolicy().hasHeightForWidth());
        suppressDeveloperWarnings->setSizePolicy(sizePolicy);
        suppressDeveloperWarnings->setTristate(false);

        verticalLayout_2->addWidget(suppressDeveloperWarnings);

        suppressDeprecatedWarnings = new QCheckBox(groupBox);
        suppressDeprecatedWarnings->setObjectName(QStringLiteral("suppressDeprecatedWarnings"));
        sizePolicy.setHeightForWidth(suppressDeprecatedWarnings->sizePolicy().hasHeightForWidth());
        suppressDeprecatedWarnings->setSizePolicy(sizePolicy);
        suppressDeprecatedWarnings->setTristate(false);

        verticalLayout_2->addWidget(suppressDeprecatedWarnings);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MessagesDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        developerWarningsAsErrors = new QCheckBox(groupBox_2);
        developerWarningsAsErrors->setObjectName(QStringLiteral("developerWarningsAsErrors"));
        sizePolicy.setHeightForWidth(developerWarningsAsErrors->sizePolicy().hasHeightForWidth());
        developerWarningsAsErrors->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(developerWarningsAsErrors);

        deprecatedWarningsAsErrors = new QCheckBox(groupBox_2);
        deprecatedWarningsAsErrors->setObjectName(QStringLiteral("deprecatedWarningsAsErrors"));
        sizePolicy.setHeightForWidth(deprecatedWarningsAsErrors->sizePolicy().hasHeightForWidth());
        deprecatedWarningsAsErrors->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(deprecatedWarningsAsErrors);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(MessagesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MessagesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MessagesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MessagesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MessagesDialog);
    } // setupUi

    void retranslateUi(QDialog *MessagesDialog)
    {
        MessagesDialog->setWindowTitle(QApplication::translate("MessagesDialog", "Warning Messages", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MessagesDialog", "Suppress Warnings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        suppressDeveloperWarnings->setToolTip(QApplication::translate("MessagesDialog", "Suppress developer (author) warnings.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        suppressDeveloperWarnings->setText(QApplication::translate("MessagesDialog", "Developer Warnings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        suppressDeprecatedWarnings->setToolTip(QApplication::translate("MessagesDialog", "Suppress deprecated warnings.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        suppressDeprecatedWarnings->setText(QApplication::translate("MessagesDialog", "Deprecated Warnings", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MessagesDialog", "Warnings as Errors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        developerWarningsAsErrors->setToolTip(QApplication::translate("MessagesDialog", "Treat developer (author) warnings as errors.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        developerWarningsAsErrors->setText(QApplication::translate("MessagesDialog", "Developer Warnings as Errors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        deprecatedWarningsAsErrors->setToolTip(QApplication::translate("MessagesDialog", "Treat deprecated warnings as errors.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        deprecatedWarningsAsErrors->setText(QApplication::translate("MessagesDialog", "Deprecated Warnings as Errors", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MessagesDialog: public Ui_MessagesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGMESSAGESDIALOG_H
