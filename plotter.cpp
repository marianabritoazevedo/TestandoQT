#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintDevice *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    // Brush (preenchimento) de cor amarela e sólida
    brush.setColor(QColor(255,255,100));
    brush.setStyle(Qt::SolidPattern);
    // Caneta (contorno) de cor vermelha
    pen.setColor(QColor(255,0,0));
    pen.setWidth(2);
    //Informa pene brush ao pintor + desenha retângulo
    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0, width(), height());

}
