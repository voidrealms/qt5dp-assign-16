#include <QCoreApplication>

#include <QDebug>

void osTask()
{
#ifdef Q_OS_OSX
    qInfo() << "Some Mac task";
#endif

#ifdef Q_OS_IOS
    qInfo() << "Some IOS task";
#endif

#ifdef Q_OS_ANDROID
    qInfo() << "Some Android task";
#endif

#ifdef Q_OS_LINUX
    qInfo() << "Some Linux task";
#endif

#ifdef Q_OS_WIN
    qInfo() << "Some Windows task";
#endif
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    osTask();

    return a.exec();
}
