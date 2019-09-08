#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>

// default code on creation of the project
class RenderArea : public QWidget
{
    Q_OBJECT
public:
    // all our shapes from our gui
    enum ShapeType {Ark, Polygon, Cross, Name, Ellipse, Square, Rectangle};

    // default code on creation of the project
    explicit RenderArea(QWidget *parent = nullptr);

    // added these to make window size stable
    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    // set background color using INLINE and a SETTER
    void setBackgroundColor (QColor color) {myBackgroundColor = color;} // Setter
    QColor backgroundColor () const { return myBackgroundColor;} // getter


    void setShape (ShapeType shape)  {myShape = shape;} // setter
    ShapeType shape () const { return myShape; }        // getter

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:

    //added these to change background
    QColor myBackgroundColor;
    QColor myShapeColor;
    ShapeType myShape;
};

#endif // RENDERAREA_H
