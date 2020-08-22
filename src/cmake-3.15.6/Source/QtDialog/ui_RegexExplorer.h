/********************************************************************************
** Form generated from reading UI file 'RegexExplorer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGEXEXPLORER_H
#define UI_REGEXEXPLORER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegexExplorer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *inputText;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelRegexValid;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelRegexMatch;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *regularExpression;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *matchAll;
    QPlainTextEdit *match0;
    QHBoxLayout *horizontalLayout;
    QComboBox *matchNumber;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *matchN;

    void setupUi(QDialog *RegexExplorer)
    {
        if (RegexExplorer->objectName().isEmpty())
            RegexExplorer->setObjectName(QStringLiteral("RegexExplorer"));
        RegexExplorer->resize(639, 555);
        verticalLayout = new QVBoxLayout(RegexExplorer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(RegexExplorer);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        inputText = new QPlainTextEdit(RegexExplorer);
        inputText->setObjectName(QStringLiteral("inputText"));

        verticalLayout->addWidget(inputText);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(RegexExplorer);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        labelRegexValid = new QLabel(RegexExplorer);
        labelRegexValid->setObjectName(QStringLiteral("labelRegexValid"));
        labelRegexValid->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelRegexValid);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        labelRegexMatch = new QLabel(RegexExplorer);
        labelRegexMatch->setObjectName(QStringLiteral("labelRegexMatch"));
        labelRegexMatch->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelRegexMatch);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        regularExpression = new QLineEdit(RegexExplorer);
        regularExpression->setObjectName(QStringLiteral("regularExpression"));

        verticalLayout->addWidget(regularExpression);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(RegexExplorer);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        matchAll = new QCheckBox(RegexExplorer);
        matchAll->setObjectName(QStringLiteral("matchAll"));

        horizontalLayout_3->addWidget(matchAll);


        verticalLayout->addLayout(horizontalLayout_3);

        match0 = new QPlainTextEdit(RegexExplorer);
        match0->setObjectName(QStringLiteral("match0"));
        match0->setReadOnly(true);

        verticalLayout->addWidget(match0);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        matchNumber = new QComboBox(RegexExplorer);
        matchNumber->setObjectName(QStringLiteral("matchNumber"));
        matchNumber->setEditable(false);

        horizontalLayout->addWidget(matchNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        matchN = new QPlainTextEdit(RegexExplorer);
        matchN->setObjectName(QStringLiteral("matchN"));
        matchN->setReadOnly(true);

        verticalLayout->addWidget(matchN);


        retranslateUi(RegexExplorer);

        QMetaObject::connectSlotsByName(RegexExplorer);
    } // setupUi

    void retranslateUi(QDialog *RegexExplorer)
    {
        RegexExplorer->setWindowTitle(QApplication::translate("RegexExplorer", "Regular Expression Explorer", Q_NULLPTR));
        label->setText(QApplication::translate("RegexExplorer", "Input Text", Q_NULLPTR));
        label_2->setText(QApplication::translate("RegexExplorer", "Regular Expression", Q_NULLPTR));
        labelRegexValid->setText(QApplication::translate("RegexExplorer", "Valid", Q_NULLPTR));
        labelRegexMatch->setText(QApplication::translate("RegexExplorer", "Match", Q_NULLPTR));
        label_3->setText(QApplication::translate("RegexExplorer", "Complete Match", Q_NULLPTR));
        matchAll->setText(QApplication::translate("RegexExplorer", "Match All", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegexExplorer: public Ui_RegexExplorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGEXEXPLORER_H
