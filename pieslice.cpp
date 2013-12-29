#include "pieslice.h"
#include <QMargins>

PieSlice::PieSlice(QQuickItem *parent ) :
    QQuickPaintedItem(parent)
{
}

int PieSlice::startAngle() const{
    return this->v_startAngle;
}

void PieSlice::setSpanAngle(int angle)
{
    this->v_spanAngle = angle;
    update();
    emit spanAngleChanged();
}

void PieSlice::setStartAngle(int angle){
    this->v_startAngle = angle;
    update();
    emit startAngleChanged();
}

QColor PieSlice::color() const{
    return this->v_color;
}

void PieSlice::setColor(QColor color){
    this->v_color= color;
    update();
    emit colorChanged();
}

void PieSlice::paint(QPainter *painter){
    QPen pen(v_color,0);
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setBrush(QBrush(v_color, Qt::SolidPattern));
    painter->setPen(pen);
    painter->drawPie(boundingRect().adjusted(1,1,-1,-1), 0, v_spanAngle * 16);
    pen.setColor(QColor("red"));
    painter->setPen(pen);
    painter->setBrush(QBrush(QColor("red"), Qt::SolidPattern));
    painter->drawPie(boundingRect().adjusted(1,1,-1,-1), v_spanAngle * 16, 360);

}

int PieSlice::spanAngle() const
{
    return this->v_spanAngle;
}
