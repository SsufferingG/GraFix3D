/********************************************************************************
** Form generated from reading UI file 'vibor.ui'
**
** Created: Mon Sep 19 09:48:26 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIBOR_H
#define UI_VIBOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_vibor
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;

    void setupUi(QDialog *vibor)
    {
        if (vibor->objectName().isEmpty())
            vibor->setObjectName(QString::fromUtf8("vibor"));
        vibor->resize(453, 371);
        gridLayout = new QGridLayout(vibor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(vibor);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        pushButton = new QPushButton(vibor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/2.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(70, 70));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(vibor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/1.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(70, 70));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(vibor);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/3.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(70, 70));

        gridLayout->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(vibor);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/4.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(70, 70));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(vibor);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/5.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_7->setIcon(icon4);
        pushButton_7->setIconSize(QSize(70, 70));

        gridLayout->addWidget(pushButton_7, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(vibor);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/6.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(70, 70));

        gridLayout->addWidget(pushButton_5, 2, 2, 1, 1);

        pushButton_8 = new QPushButton(vibor);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/i.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_8->setIcon(icon6);
        pushButton_8->setIconSize(QSize(70, 70));

        gridLayout->addWidget(pushButton_8, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(vibor);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217/220px-Sphere-wireframe.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_6->setIcon(icon7);
        pushButton_6->setIconSize(QSize(70, 70));

        gridLayout->addWidget(pushButton_6, 3, 1, 1, 1);

        pushButton_9 = new QPushButton(vibor);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 4, 0, 1, 1);


        retranslateUi(vibor);

        QMetaObject::connectSlotsByName(vibor);
    } // setupUi

    void retranslateUi(QDialog *vibor)
    {
        vibor->setWindowTitle(QApplication::translate("vibor", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("vibor", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00007f;\">\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\276\320\264\320\270\320\275 \320\270\320\267 \320\275\320\270\320\266\320\265 \320\277\321\200\320\270\320\262\320\265\320\264\321\221\320\275\320\275\321\213\321\205 \320\263\321\200\320\260\321\204\320\270\320\272\320\276\320\262</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_7->setText(QString());
        pushButton_5->setText(QString());
        pushButton_8->setText(QString());
        pushButton_6->setText(QString());
        pushButton_9->setText(QApplication::translate("vibor", "\320\235\320\260\320\267\320\260\320\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vibor: public Ui_vibor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIBOR_H
