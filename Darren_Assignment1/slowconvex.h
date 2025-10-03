#ifndef SLOWCONVEX_H
#define SLOWCONVEX_H

#include "drawwidget.h"
#include <QWidget>

class SlowConvex : public QWidget
{
    Q_OBJECT

public:
    explicit SlowConvex(DrawWidget *m_drawWidget, QWidget *parent = nullptr);
    void slowAlgorithm();
    int crossProduct(int Px, int Py, int Qx, int Qy, int Rx, int Ry);
    const QList<QPair<QPoint, QPoint>>& getResult() const;
    void clear_E();

private:
    QList<QPair<QPoint, QPoint>> E;
    DrawWidget *m_drawWidget;
};

#endif // SLOWCONVEX_H
