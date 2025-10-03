#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QVector>

class DrawWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DrawWidget(QWidget *parent = nullptr);
    void clearCanvas();
    void slowConvexHull();
    const QList<QPoint>& getPosition() const;
    int iterationCount = 0;
    const QList<QPoint>& getResult() const;

protected:
    void paintEvent(QPaintEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;


private:
    QPoint startPoint;
    QPoint endPoint;
    bool drawing;
    QVector<QPoint> points;
    QList<QPoint> positions;
    QList<QPair<QPoint, QPoint>> E;
};

#endif // DRAWWIDGET_H
