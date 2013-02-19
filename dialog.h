#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "getwebinfo.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    GetWebInfo* WebInfo;
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private slots:
    void on_pushButton_clicked();
    void getPM25(QString fileName);
private:
    Ui::Dialog *ui;
    bool getDetailInfo(QString fileName, QString &str_date, QString &str_PM25,QString &str_AQI);
    void openUrl(QString url);
    void setHintInfoFromAQI(int AQI);
};

#endif // DIALOG_H
