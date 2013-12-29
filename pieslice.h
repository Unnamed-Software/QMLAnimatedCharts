#ifndef PIESLICE_H
#define PIESLICE_H

#include <QQuickPaintedItem>
#include <QPainter>
#include <QPen>
#include <QColor>

class PieSlice : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(int startAngle READ startAngle WRITE setStartAngle NOTIFY startAngleChanged)
    Q_PROPERTY(int spanAngle READ spanAngle WRITE setSpanAngle NOTIFY spanAngleChanged)
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
public:
    PieSlice(QQuickItem *parent = 0 );
    void paint(QPainter *painter);

    void setStartAngle(int angle);
    int startAngle() const;

    void setSpanAngle(int angle);
    int spanAngle() const;

    void setColor(QColor color);
    QColor color() const;

    int v_startAngle;
    int v_spanAngle;
    QColor v_color;

signals:
    void startAngleChanged();
    void spanAngleChanged();
    void colorChanged();
public slots:

private:


};

#endif // PIESLICE_H
