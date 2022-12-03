#include "mainwindow.h"
#include "_mainwindow.h"

CustomForm::CustomForm(QWidget *parent) : QWidget(parent), ui(new Ui::Form) {
  ui->setupUi(this);
}

CustomForm::~CustomForm() { delete ui; }

void CustomForm::on_pushButton_clicked() {
  this->ui->textEdit->append("start");
}
