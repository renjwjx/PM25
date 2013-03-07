/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Thu Mar 7 10:57:45 2013
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
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumber_PM25;
    QLabel *label_hint;
    QLabel *label_5;
    QLabel *label_date;
    QLabel *label;
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
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(150, 240, 71, 31));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);
        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 200, 121, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(11);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        lcdNumber_PM25 = new QLCDNumber(layoutWidget1);
        lcdNumber_PM25->setObjectName(QString::fromUtf8("lcdNumber_PM25"));
        lcdNumber_PM25->setFrameShape(QFrame::NoFrame);
        lcdNumber_PM25->setNumDigits(5);
        lcdNumber_PM25->setDigitCount(5);
        lcdNumber_PM25->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_PM25->setProperty("value", QVariant(0));

        horizontalLayout->addWidget(lcdNumber_PM25);

        label_hint = new QLabel(Dialog);
        label_hint->setObjectName(QString::fromUtf8("label_hint"));
        label_hint->setGeometry(QRect(90, 130, 190, 31));
        QFont font3;
        font3.setPointSize(12);
        label_hint->setFont(font3);
        label_hint->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 280, 271, 52));
        label_date = new QLabel(Dialog);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(100, 170, 271, 20));
        label_date->setFont(font2);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 170, 71, 21));
        label->setFont(font2);
        lcdNumber_AQI = new QLCDNumber(Dialog);
        lcdNumber_AQI->setObjectName(QString::fromUtf8("lcdNumber_AQI"));
        lcdNumber_AQI->setGeometry(QRect(90, 30, 190, 101));
        lcdNumber_AQI->setFont(font1);
        lcdNumber_AQI->setFrameShape(QFrame::NoFrame);
        lcdNumber_AQI->setNumDigits(3);
        lcdNumber_AQI->setDigitCount(3);
        lcdNumber_AQI->setSegmentStyle(QLCDNumber::Flat);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\344\270\212\346\265\267\347\251\272\346\260\224\346\261\241\346\237\223\346\214\207\346\225\260(\347\276\216\351\242\206\351\246\206)", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "\346\233\264 \346\226\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "PM2.5:", 0, QApplication::UnicodeUTF8));
        label_hint->setText(QString());
        label_5->setText(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\350\257\264\346\230\216:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">1.</span><span style=\" font-size:8pt;\"> \346\225\260\346\215\256\346\235\245\350\207\252\347\276\216\345\233\275\351\251\273\344\270\212\346\265\267\346\200\273\351\242\206\344\272\213\351\246\206(</span><span style=\" font-family:'Arial,Helvetica,sans-serif'; color:#000000;\">\346\267\256\346\265\267\344\270\255\350\267\2571469\345"
                        "\217\267</span><span style=\" font-size:8pt;\">).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">2.</span><span style=\" font-size:8pt;\"> \347\276\216\345\233\275\351\242\206\344\272\213\351\246\206\346\257\217\345\260\217\346\227\266\346\233\264\346\226\260\344\270\200\346\254\241\346\225\260\346\215\256\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_date->setText(QString());
        label->setText(QApplication::translate("Dialog", "\346\233\264\346\226\260\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
