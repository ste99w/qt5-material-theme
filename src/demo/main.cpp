#include <QtWidgets>

#include "demowindow.h"

int main(int argv, char *args[]) {
  QApplication app(argv, args);
  QApplication::setStyle(QStyleFactory::create("gmdamaterialstyle"));

  DemoWindow window;
  window.resize(200, 50);
  window.show();

  return app.exec();
}
