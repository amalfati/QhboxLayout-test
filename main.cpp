#include <QApplication>
#include<hbox.h>
int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  auto window = new hbox;
  window->setWindowTitle("QHBoxLayout Test");

  window->show();

  return app.exec();
}
