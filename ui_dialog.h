/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Tue Feb 19 12:58:17 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumber_PM25;
    QLabel *label_hint;
    QLabel *label_5;
    QLabel *label_date;
    QLabel *label;
    QLabel *label_3;
    QLCDNumber *lcdNumber_AQI;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(390, 352);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        Dialog->setFont(font);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 250, 141, 31));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 30, 195, 18));
        QFont font2;
        font2.setPointSize(11);
        label_4->setFont(font2);
        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(22, 170, 112, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        lcdNumber_PM25 = new QLCDNumber(layoutWidget1);
        lcdNumber_PM25->setObjectName(QString::fromUtf8("lcdNumber_PM25"));
        lcdNumber_PM25->setFrameShape(QFrame::NoFrame);
        lcdNumber_PM25->setNumDigits(4);
        lcdNumber_PM25->setDigitCount(4);
        lcdNumber_PM25->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_PM25->setProperty("value", QVariant(0));

        horizontalLayout->addWidget(lcdNumber_PM25);

        label_hint = new QLabel(Dialog);
        label_hint->setObjectName(QString::fromUtf8("label_hint"));
        label_hint->setGeometry(QRect(160, 130, 181, 31));
        QFont font3;
        font3.setPointSize(12);
        label_hint->setFont(font3);
        label_hint->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 300, 251, 31));
        label_date = new QLabel(Dialog);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(91, 210, 271, 20));
        label_date->setFont(font1);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 210, 71, 21));
        label->setFont(font2);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 141, 30));
        label_3->setFont(font2);
        lcdNumber_AQI = new QLCDNumber(Dialog);
        lcdNumber_AQI->setObjectName(QString::fromUtf8("lcdNumber_AQI"));
        lcdNumber_AQI->setGeometry(QRect(165, 60, 101, 71));
        lcdNumber_AQI->setFont(font1);
        lcdNumber_AQI->setFrameShape(QFrame::NoFrame);
        lcdNumber_AQI->setNumDigits(4);
        lcdNumber_AQI->setDigitCount(4);
        lcdNumber_AQI->setSegmentStyle(QLCDNumber::Flat);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "\350\216\267\345\217\226\346\234\200\346\226\260PM2.5", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "\347\276\216\345\233\275\351\251\273\344\270\212\346\265\267\346\200\273\351\242\206\344\272\213\351\246\206\347\251\272\346\260\224\350\264\250\351\207\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "PM2.5:", 0, QApplication::UnicodeUTF8));
        label_hint->setText(QString());
        label_5->setText(QApplication::translate("Dialog", "\350\257\264\346\230\216\357\274\232PM2.5, AQI\347\276\216\345\233\275\351\242\206\344\272\213\351\246\206\346\257\217\345\260\217\346\227\266\345\217\221\345\270\203\344\270\200\346\254\241\343\200\202", 0, QApplication::UnicodeUTF8));
        label_date->setText(QString());
        label->setText(QApplication::translate("Dialog", "\345\217\221\345\270\203\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "\347\251\272\346\260\224\346\261\241\346\237\223\346\214\207\346\225\260(AQI):", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
