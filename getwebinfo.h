#ifndef GETWEBINFO_H
#define GETWEBINFO_H

#include <QObject>

#include <QFile>
#include <QFileInfo>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QTimer>
#include <QUrl>
#include <QNetworkProxy>


class GetWebInfo : public QObject
{
    Q_OBJECT
    QNetworkAccessManager manager;
    QNetworkProxy proxy;
public:
    explicit GetWebInfo(QObject *parent = 0);
    void doDownload(const QUrl &url);
    QString saveFileName(const QUrl &url);
    bool saveToDisk(const QString &filename, QIODevice *data);
signals:
    void saveFileFinished(QString fileName);

public slots:
    void downloadFinished(QNetworkReply *reply);
};

#endif // GETWEBINFO_H
