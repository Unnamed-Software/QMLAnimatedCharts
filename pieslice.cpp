#include "pieslice.h"

PieSlice::PieSlice(QQuickItem *parent) :
    QQuickPaintedItem(parent)
{
    v_angle = 0;
    v_color = QColor("green");
}

int PieSlice::angle() const{
    return this->v_angle;
}

void PieSlice::setAngle(int angle){
    this->v_angle = angle;
    emit angleChanged();
}

QColor PieSlice::color() const{
    return this->v_color;
}

void PieSlice::setColor(QColor color){
    this->v_color= color;
    emit colorChanged();
}

void PieSlice::paint(QPainter *painter){
    QPen pen(v_color,0);
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setBrush(QBrush(v_color, Qt::SolidPattern));
    painter->setPen(pen);
    painter->drawPie(0,0,200,200, -90, 90);
}
