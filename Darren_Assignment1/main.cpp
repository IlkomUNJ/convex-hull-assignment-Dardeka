#include "drawingcanvas.h"

#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QWidget>
#include <QTextEdit>
#include "drawwidget.h"
#include "slowconvex.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *centralWidget = new QWidget;

    // QWidget *bottomWidget = new QWidget;

    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);

    DrawWidget *drawWidget = new DrawWidget;

    SlowConvex *convex = new SlowConvex(drawWidget);

    QHBoxLayout *buttons = new QHBoxLayout(centralWidget);

    QPushButton *clearButton = new QPushButton("Clear Canvas");

    QPushButton *slowConvex = new QPushButton("Run Slow Convex Hull");

    QPushButton *convexAlgorithm = new QPushButton("Run Convex Hull");

    buttons->addWidget(slowConvex);
    buttons->addWidget(convexAlgorithm);
    buttons->addWidget(clearButton);

    mainLayout->addWidget(drawWidget);
    mainLayout->addLayout(buttons);

    // convex->setOutputBox(box);

    QMainWindow mainWindow;
    mainWindow.setCentralWidget(centralWidget);
    mainWindow.setWindowTitle("Drawing app");

    QObject::connect(clearButton, &QPushButton::clicked, drawWidget, &DrawWidget::clearCanvas);
    QObject::connect(slowConvex, &QPushButton::clicked, convex, &SlowConvex::slowAlgorithm);

    mainWindow.show();

    return a.exec();
}
