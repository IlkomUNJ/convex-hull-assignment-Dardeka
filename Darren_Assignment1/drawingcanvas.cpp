#include "drawingcanvas.h"
#include "./ui_drawingcanvas.h"

DrawingCanvas::DrawingCanvas(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DrawingCanvas)
{
    ui->setupUi(this);
}

DrawingCanvas::~DrawingCanvas()
{
    delete ui;
}
