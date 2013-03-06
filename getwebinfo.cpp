#include "getwebinfo.h"


GetWebInfo::GetWebInfo(QObject *parent) :
    QObject(parent)
{
    connect(&manager, SIGNAL(finished(QNetworkReply*)),
            SLOT(downloadFinished(QNetworkReply*)));
    //set proxy
    proxy.setType(QNetworkProxy::HttpProxy);
    proxy.setHostName("138.120.252.81");
    proxy.setPort(80);
    proxy.setUser("");
    proxy.setPassword("");
#ifdef DEFINE_DEPENT_PROXY
    QNetworkProxy::setApplicationProxy(proxy);
#endif
}

void GetWebInfo::doDownload(const QUrl &url)
{
    QNetworkRequest request(url);

    request.setAttribute(QNetworkRequest::CacheLoadControlAttribute, QNetworkRequest::AlwaysNetwork);

#ifndef DEFINE_DEPENT_PROXY
    manager.setProxy(proxy);
#endif
    manager.get(request);

}

QString GetWebInfo::saveFileName(const QUrl &url)
{
    QString path = url.path();
    QString basename = QFileInfo(path).fileName();

    if (basename.isEmpty())
        basename = "download";

    if (QFile::exists(basename)) {
        QFile::remove(basename);
    }

    return basename;
}

bool GetWebInfo::saveToDisk(const QString &filename, QIODevice *data)
{
    QFile file(filename);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        fprintf(stderr, "Could not open %s for writing: %s\n",
                qPrintable(filename),
                qPrintable(file.errorString()));
        return false;
    }

    file.write(data->readAll());
    file.close();

    return true;
}

void GetWebInfo::downloadFinished(QNetworkReply *reply)
{
    QUrl url = reply->url();
    QString filename = "";

    if (reply->error()) {
        fprintf(stderr, "Download of %s failed: %s\n",
                url.toEncoded().constData(),
                qPrintable(reply->errorString()));
    } else {
        filename = saveFileName(url);
        filename = "D:\\pm25.xml";
        if (saveToDisk(filename, reply))
            printf("Download of %s succeeded (saved to %s)\n",
                   url.toEncoded().constData(), qPrintable(filename));
    }

    reply->deleteLater();
    emit saveFileFinished(filename);
}

