#include <QApplication>
#include <QLabel>
#include <QPixmap>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Crear un objeto QLabel
    QLabel label;

    // Cargar la imagen desde un archivo JPG
    QPixmap image("C://Users//gonza//OneDrive//Imágenes//Capturas de pantalla//Screenshot 2024-01-13 111858.png");
    label.setPixmap(image);
    label.setScaledContents(true);
    // Mostrar el QLabel maximizado
    label.showMaximized();

    // Configurar un temporizador para cerrar la aplicación después de 3 segundos
    QTimer::singleShot(3000, &a, SLOT(quit()));

    return a.exec();
}
