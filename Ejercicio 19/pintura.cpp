#include "pintura.h"
#include <QPainter>

//constructor
Pintura::Pintura(QWidget *parent) : QWidget(parent) {
    setAttribute(Qt::WA_StaticContents);
    myPenWidth = 1;
    myPenColor = Qt::black;
    image = QImage(size(), QImage::Format_RGB32);
}

//setea el color
void Pintura::setPenColor(const QColor &newColor) {
    myPenColor = newColor;
}

//setea el ancho
void Pintura::setPenWidth(int newWidth) {
    myPenWidth = newWidth;
}

void Pintura::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        lastPoint = event->pos();
        painting = true;
    }
}


void Pintura::mouseMoveEvent(QMouseEvent *event) {
    if ((event->buttons() & Qt::LeftButton) && painting)
        drawLineTo(event->pos());
}


void Pintura::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton && painting) {
        drawLineTo(event->pos());
        painting = false;
    }
}

void Pintura::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    QRect dirtyRect = event->rect();
    painter.drawImage(dirtyRect, image, dirtyRect);


}

void Pintura::wheelEvent(QWheelEvent *event)
{

    myPenWidth += event->angleDelta().y() / 120;
    if (myPenWidth < 1)
        myPenWidth = 1;

    event->accept();
}

void Pintura::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
        case Qt::Key_R:
            setPenColor(Qt::red);
            break;
        case Qt::Key_G:
            setPenColor(Qt::green);
            break;
        case Qt::Key_B:
            setPenColor(Qt::blue);
            break;
        case Qt::Key_Escape:
            image.fill(Qt::white);
            update();
            break;
        default:
            QWidget::keyPressEvent(event);
    }
}

void Pintura::drawLineTo(const QPoint &endPoint) {
    QPainter painter(&image);
    painter.setPen(QPen(myPenColor,
    myPenWidth,
    Qt::SolidLine,
    Qt::RoundCap,
    Qt::RoundJoin));
    painter.drawLine(lastPoint, endPoint);
    int rad = (myPenWidth / 2) + 2;
    update(QRect(lastPoint, endPoint).normalized()
    .adjusted(-rad, -rad, +rad, +rad));
    lastPoint = endPoint;
}
