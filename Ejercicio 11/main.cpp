#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Crear objetos
    QWidget widget;
    QLineEdit lineEdit;
    QLabel label("Hola");
    QPushButton button("clicK");


    lineEdit.show();// Mostrar los objetos
    widget.show();
    button.show();
    label.show();



    return app.exec();
}
