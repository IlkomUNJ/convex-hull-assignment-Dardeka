/********************************************************************************
** Form generated from reading UI file 'drawingcanvas.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWINGCANVAS_H
#define UI_DRAWINGCANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrawingCanvas
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DrawingCanvas)
    {
        if (DrawingCanvas->objectName().isEmpty())
            DrawingCanvas->setObjectName("DrawingCanvas");
        DrawingCanvas->resize(800, 600);
        centralwidget = new QWidget(DrawingCanvas);
        centralwidget->setObjectName("centralwidget");
        DrawingCanvas->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DrawingCanvas);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        DrawingCanvas->setMenuBar(menubar);
        statusbar = new QStatusBar(DrawingCanvas);
        statusbar->setObjectName("statusbar");
        DrawingCanvas->setStatusBar(statusbar);

        retranslateUi(DrawingCanvas);

        QMetaObject::connectSlotsByName(DrawingCanvas);
    } // setupUi

    void retranslateUi(QMainWindow *DrawingCanvas)
    {
        DrawingCanvas->setWindowTitle(QCoreApplication::translate("DrawingCanvas", "DrawingCanvas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrawingCanvas: public Ui_DrawingCanvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWINGCANVAS_H
