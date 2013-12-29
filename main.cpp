#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
#include "pieslice.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<PieSlice>("Charts", 1, 0, "PieSlice");

    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/SuperCharts/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
