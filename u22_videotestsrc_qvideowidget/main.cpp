#include "mainwindow.h"

#include <QApplication>

#include <gst/gst.h>
#include <QMediaPlayer>
#include <QWidget>
#include <QVideoWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QVideoWidget *videoWidget = new QVideoWidget;

    QMediaPlayer *player = new QMediaPlayer;


    videoWidget->move(1,1);
    videoWidget->resize(320,240);
    videoWidget->show();
    player->setVideoOutput(videoWidget);
    player->setMedia(QUrl("gst-pipeline: videotestsrc pattern = ball ! "
                          "video/x-raw,framerate=30/1,width=320,height=240 ! "
                          "ximagesink name=\"qtvideosink\""));
    player->play();

    return a.exec();
}
