#include "dialog.h"
#include "ui_dialog.h"

#include <QUrl>
#include <QByteArray>
#include <QDesktopServices>
#include <QTextCodec>

QString url_str = "http://utils.usembassy.gov/feed2js/feed2js.php";
QString url_query = "http://www.beijingaqifeed.com/shanghaiaqi/shanghaiairrss.xml&desc=1&num=18&targ=y&utf=y&pc=y&words=40&";
QString url_query_key = "src";

QString url = "http://utils.usembassy.gov/feed2js/feed2js.php?src=http%3A%2F%2Fwww.beijingaqifeed.com%2Fshanghaiaqi%2Fshanghaiairrss.xml&desc=1&num=18&targ=y&utf=y&pc=y&words=40&";

QString url_xml = "http://www.beijingaqifeed.com/shanghaiaqi/shanghaiairrss.xml";

QString str_date, str_PM25, str_AQI;




Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->pushButton->setAutoDefault(TRUE);
    WebInfo = new GetWebInfo;
    connect(WebInfo,
            SIGNAL(saveFileFinished(QString)),
            this, SLOT(getPM25(QString)));
    on_pushButton_clicked();
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
#ifdef URL_QUERY
    QUrl pm_url = url_str;
    QByteArray byte;
    byte = byte.append(url_query_key);
    byte = byte.append("=");
    byte = byte.append(url_query);
    pm_url.setEncodedQuery(byte);

    WebInfo->doDownload(pm_url);
#else
    WebInfo->doDownload(url_xml);
#endif
    ui->pushButton->setEnabled(FALSE);
}

void Dialog::getPM25(QString fileName)
{
    QString line;

    ui->pushButton->setEnabled(TRUE);

    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug("Cann't open file for read");
        return ;
    }

    QTextStream in(&file);
    while(!in.atEnd())
    {
        line = in.readLine();
        qDebug(line.toAscii());
        if(TRUE == getDetailInfo(line, str_date, str_PM25,str_AQI))
        {
            ui->label_date->setText(str_date);
            ui->lcdNumber_PM25->display(str_PM25);
            ui->lcdNumber_AQI->display(str_AQI);
            setHintInfoFromAQI(str_AQI.toInt());
            break;
        }
    }
    file.close();
    QFile::remove(fileName);
}
QString str_hint_0 = "健康";
QString str_hint_1 = "中等";
QString str_hint_2 = "对敏感人群不健康";
QString str_hint_3 = "不健康";
QString str_hint_4 = "非常不健康";
QString str_hint_5 = "危险";
QString str_hint_6 = "去火星吧";
void Dialog::setHintInfoFromAQI(int AQI)
{
    QPalette lcdp = ui->lcdNumber_AQI->palette();
    QColor aqi_color = Qt::black;

    if(AQI <= 50)
    {
        ui->label_hint->setText("健康");
        aqi_color = Qt::green;
    }
    else if(AQI <= 100)
    {
        ui->label_hint->setText("中等");
        aqi_color = Qt::yellow;
    }
    else if(AQI <= 150)
    {
        ui->label_hint->setText("对敏感人群不健康");
        aqi_color.setRgb(255, 165, 0); //orange
    }
    else if(AQI <= 200)
    {
        ui->label_hint->setText("不健康");
        aqi_color = Qt::red;
    }
    else if(AQI <= 300)
    {
        ui->label_hint->setText("非常不健康");
        aqi_color.setRgb(128, 0, 128);//purple
    }
    else if(AQI <= 500)
    {
        ui->label_hint->setText("危险");
        aqi_color.setRgb(128, 0, 0);//maroon;
    }
    else
    {
        ui->label_hint->setText("去火星吧");
    }
    lcdp.setColor(QPalette::Normal,QPalette::WindowText,aqi_color);
    ui->lcdNumber_AQI->setPalette(lcdp);
}

bool Dialog::getDetailInfo(QString line, QString &str_date, QString &str_PM25,QString &str_AQI)
{
#ifdef URL_QUERY
    QString begin_tag("title=");
#else
    QString begin_tag("<description><![CDATA");
#endif
//  title="02-17-2013 17:00; PM2.5; 54.0; 131; Unhealthy for Sensitive Groups (at 24-hour exposure at this level)&hellip;"
    qint16 i_begin = 0;
    qint16 i_end = 0;
    qDebug(line.toAscii());
    i_begin = line.indexOf(begin_tag,0);

    if(-1 != i_begin)
    {
        //get date
        i_begin += begin_tag.size();
        i_end = line.indexOf(";", i_begin);
        str_date = line.mid(i_begin + 1, i_end - i_begin - 1);
        qDebug(str_date.toAscii());

        //get PM2.5
        i_begin = i_end + 8;
        i_end = line.indexOf(";", i_begin);
        str_PM25 = line.mid(i_begin + 1, i_end - i_begin - 1);
        qDebug(str_PM25.toAscii());

        //get AQI
        i_begin = i_end + 1;
        i_end = line.indexOf(";", i_begin);
        str_AQI = line.mid(i_begin + 1, i_end - i_begin - 1);
        qDebug(str_AQI.toAscii());
        return TRUE;
    }
    return FALSE;
}

void Dialog::openUrl(QString url)
{
    QDesktopServices::openUrl(QUrl(url));
}
