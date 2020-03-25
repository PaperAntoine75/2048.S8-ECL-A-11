#include <QApplication>
#include <QQuickItem>
#include <QQuickView>
#include <QObject>
#include <QQmlContext>
#include <QQmlEngine>

#include "mecanisme.h"



int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QQuickView view{};
    const QUrl url(QStringLiteral("qrc:/main.qml"));

    Mecanisme partie(view);

    partie.setParent(view.rootObject());

    view.engine()->rootContext()->setContextProperty("vuePartie", &partie);

    view.setSource(url);
    view.show();


    partie.debutPartie();

    return app.exec();


}



