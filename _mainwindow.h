
/********************************************************************************
** Form generated from reading UI file 'designerIjarsy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DESIGNERIJARSY_H
#define DESIGNERIJARSY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form {
public:
  QHBoxLayout *horizontalLayout;
  QFrame *frame;
  QVBoxLayout *verticalLayout_2;
  QTextEdit *textEdit;
  QFrame *frame_2;
  QVBoxLayout *verticalLayout;
  QPushButton *pushButton;

  void setupUi(QWidget *Form) {
    if (Form->objectName().isEmpty())
      Form->setObjectName(QString::fromUtf8("Form"));
    Form->resize(825, 539);
    horizontalLayout = new QHBoxLayout(Form);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    frame = new QFrame(Form);
    frame->setObjectName(QString::fromUtf8("frame"));
    frame->setFrameShape(QFrame::StyledPanel);
    frame->setFrameShadow(QFrame::Raised);
    verticalLayout_2 = new QVBoxLayout(frame);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    textEdit = new QTextEdit(frame);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));

    verticalLayout_2->addWidget(textEdit);

    horizontalLayout->addWidget(frame);

    frame_2 = new QFrame(Form);
    frame_2->setObjectName(QString::fromUtf8("frame_2"));
    frame_2->setFrameShape(QFrame::StyledPanel);
    frame_2->setFrameShadow(QFrame::Raised);
    verticalLayout = new QVBoxLayout(frame_2);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    pushButton = new QPushButton(frame_2);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));

    verticalLayout->addWidget(pushButton);

    horizontalLayout->addWidget(frame_2);

    retranslateUi(Form);

    QMetaObject::connectSlotsByName(Form);
  } // setupUi

  void retranslateUi(QWidget *Form) {
    Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
    pushButton->setText(
        QCoreApplication::translate("Form", "PushButton", nullptr));
  } // retranslateUi
};

namespace Ui {
class Form : public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DESIGNERIJARSY_H
