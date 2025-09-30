#include "drawwidget.h"

#include <QPen>

DrawWidget::DrawWidget(QWidget *parent) : QWidget(parent) {
    setFixedSize(600, 400);
    drawing = false;
}

void DrawWidget::paintEvent(QPaintEvent *event){
    QPainter painter(this);

    QPen pen(Qt::blue, 4, Qt::SolidLine);
    painter.setPen(pen);

    for (const QPoint &point : points){
        painter.drawPoint(point);
    }

    painter.drawText(10, 20, QString("Jumlah iterasi: %1").arg(iterationCount));
}

void DrawWidget::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
        int x = event->position().x();
        int y = event->position().y();

        drawing = true;
        positions.append(QPoint(x,y));
        points.append(event->position().toPoint());
        update();
    }

}

void DrawWidget::mouseMoveEvent(QMouseEvent *event){
    if(drawing){
        points.append(event->position().toPoint());
        update();
    }
}

void DrawWidget::mouseReleaseEvent(QMouseEvent *event){
    if(drawing){
        drawing = false;
        update();
    }
}

void DrawWidget::clearCanvas(){
    points.clear();
    positions.clear();

    update();
}

const QList<QPoint>& DrawWidget::getPosition() const{
    return positions;
}

