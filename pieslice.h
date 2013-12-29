#ifndef PIESLICE_H
#define PIESLICE_H

#include <QQuickPaintedItem>
#include <QPainter>\
#include <QPen>
#include <QColor>

class PieSlice : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(int angle READ angle WRITE setAngle NOTIFY angleChanged)
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
public:
    explicit PieSlice(QQuickItem *parent = 0);
    void paint(QPainter *painter);

    void setAngle(int angle);
    int angle() const;

    void setColor(QColor color);
    QColor color() const;

signals:
    void angleChanged();
    void colorChanged();
public slots:

private:
    int v_angle;
    QColor v_color;

};

#endif // PIESLICE_H
