#include <QApplication>
// #include <QTextCodec> //在qt6中已经移除
#include <QTime>

#include "myview.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

    // 设置随机数的初始值
    // qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime())); //qsrand在qt6中已经被移除
    srand(QTime(0, 0, 0).secsTo(QTime::currentTime()));

    MyView view;
    view.show();

    return app.exec();
}
