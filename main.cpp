#include <iostream>

#include <QApplication>
#include <QWidget>
#include <QtGui/QPainter>
#include "render/Canvas.h"
#include "playground/Camera.h"

int main(int argc, char **argv) {
    std::cout << "Starting app..." << std::endl;

    QApplication app(argc, argv);

    Canvas canvas;
    canvas.setFixedSize(1400, 800);
    canvas.show();

    Camera camera({0, 0, 0}, 0, 1400);

    return app.exec();
}
