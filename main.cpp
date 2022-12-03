#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  CustomForm w;
  w.show();
  return a.exec();
}
