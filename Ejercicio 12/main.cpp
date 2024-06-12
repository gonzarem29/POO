#include <QApplication>
#include <QLabel>
#include <QPixmap>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel label;
    QPixmap image("C://Users//gonza//OneDrive//Imágenes//Capturas de pantalla//Screenshot 2024-01-13 111858.png");
    label.setPixmap(image);
    label.showMaximized();
    label.setScaledContents(true);


    QTimer::singleShot(3000, &a, SLOT(quit()));

    return a.exec();
}

