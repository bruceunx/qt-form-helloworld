#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "_mainwindow.h"
#include <QtWidgets>

namespace Ui {
class CustomForm;
}

class CustomForm : public QWidget {
  Q_OBJECT

public:
  explicit CustomForm(QWidget *parent = 0);
  ~CustomForm();

private slots:
  void on_pushButton_clicked();

private:
  Ui::Form *ui;
};

#endif // MAINWINDOW_H
