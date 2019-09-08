#include "renderarea.h"
#include "QPainter"
#include "QPaintEvent"

// automatically created from adding a C++ class function using gui editor
RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    myBackgroundColor (Qt::blue)

{

}

// Sets the size of the min size of the window on open
QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 100);
}
QSize RenderArea::sizeHint() const
{
    return QSize(400, 200);
}

// Paints an the widget area the was set using the GUI editior
void RenderArea::paintEvent(QPaintEvent *)
{
    // Enable the function QPainter
    QPainter painter(this);

    // draw ark
    static const QRectF rectangle3(10.0, 20.0, 80.0, 60.0);
    int startAngle = 30 * 16;
    int spanAngle = 120 * 16;

    // Draw polygon
    static const QPointF points[4] = {
        QPointF(10.0, 80.0),
        QPointF(20.0, 10.0),
        QPointF(80.0, 30.0),
        QPointF(90.0, 70.0)
    };

    switch (myShape) {
    case Ark:
   myBackgroundColor = Qt::red;

   painter.drawArc(rectangle3, startAngle, spanAngle);
        break;

    case Polygon:
        painter.drawConvexPolygon(points, 4);
         myBackgroundColor = Qt::blue;
        break;

    case Cross:
        myBackgroundColor = Qt::yellow;
    // Draw an X
    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());
    painter.drawLine(this->rect().bottomLeft(), this->rect().topRight());
        break;

    case Name:
        myBackgroundColor = Qt::black;
        painter.setFont(QFont("Arial", 30));
        painter.drawText(rect(), Qt::BottomEdge, "Hcku");
        break;

    case Ellipse:
        myBackgroundColor = Qt::black;
        //Draw ellipse
   static const QRectF ellipseLocation(90.0, 20.0, 80.0, 60.0);
    painter.drawEllipse(ellipseLocation);
          break;

    case Square:
      static const QRectF rectangle(10.0, 20.0, 80.0, 60.0);
        painter.drawRect(rectangle);
           break;

    case Rectangle:
       static const QRectF rectangle2(10.0, 20.0, 80.0, 60.0);
        painter.drawRoundedRect(rectangle2, 20.0, 15.0);
           break;
    }
    // tells program to use this color after eval the swtich case
     painter.setPen(myBackgroundColor);

    // Write text, increase font size, add blue color






}// end of function
