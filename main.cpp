#include "QtCore"
#include "QApplication"
#include "QWidget"
#include "iostream"
using namespace std;

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    QWidget window;

    window.resize(800, 800);
    window.setWindowTitle("Simple example");
    window.show();

    return app.exec();
}
