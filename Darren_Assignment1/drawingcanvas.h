#ifndef DRAWINGCANVAS_H
#define DRAWINGCANVAS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class DrawingCanvas;
}
QT_END_NAMESPACE

class DrawingCanvas : public QMainWindow
{
    Q_OBJECT

public:
    DrawingCanvas(QWidget *parent = nullptr);
    ~DrawingCanvas();

private:
    Ui::DrawingCanvas *ui;
};
#endif // DRAWINGCANVAS_H
