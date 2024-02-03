/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *MenuPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *HelpPage;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_10;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_16;
    QWidget *LoginPage;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *name;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *password;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QWidget *OperatePage;
    QGridLayout *gridLayout_3;
    QPushButton *addTask;
    QPushButton *pushButton_11;
    QLineEdit *delEdit;
    QPushButton *pushButton_8;
    QTableWidget *taskTable;
    QPushButton *pushButton_10;
    QWidget *page;
    QCalendarWidget *calendarWidget;
    QWidget *AddPage;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_13;
    QSpinBox *minBox;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QSpinBox *hourBox;
    QLineEdit *addEdit;
    QLineEdit *catoEdit;
    QComboBox *rankBox;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_7;
    QSpinBox *yearBox;
    QSpinBox *monthBox;
    QSpinBox *dayBox;
    QSpacerItem *verticalSpacer_14;
    QLabel *label_5;
    QLineEdit *startEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1200, 700);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        MenuPage = new QWidget();
        MenuPage->setObjectName(QString::fromUtf8("MenuPage"));
        MenuPage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(MenuPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(MenuPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"\346\245\267\344\275\223\";\n"
"background-image: url(:/images/labelSmallest.png);\n"
"background-position: top right;\n"
"background-repeat: no-repeat;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        pushButton = new QPushButton(MenuPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(232, 232, 232);"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(MenuPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(232, 232, 232);"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(MenuPage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(232, 232, 232);"));

        verticalLayout_2->addWidget(pushButton_3);

        stackedWidget->addWidget(MenuPage);
        HelpPage = new QWidget();
        HelpPage->setObjectName(QString::fromUtf8("HelpPage"));
        gridLayout = new QGridLayout(HelpPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        textBrowser = new QTextBrowser(HelpPage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 1, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(HelpPage);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_4, 3, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_6, 2, 1, 1, 1);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_16, 0, 1, 1, 1);

        stackedWidget->addWidget(HelpPage);
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->setAutoFillBackground(false);
        LoginPage->setStyleSheet(QString::fromUtf8("QWidget#LoginPage{\n"
"	border-image: url(:/images/lake.png);\n"
"}"));
        gridLayout_4 = new QGridLayout(LoginPage);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 6, 0, 1, 1);

        name = new QLineEdit(LoginPage);
        name->setObjectName(QString::fromUtf8("name"));
        name->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(170, 255, 255);\n"
"\n"
""));

        gridLayout_4->addWidget(name, 4, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 16, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 6, 3, 1, 1);

        password = new QLineEdit(LoginPage);
        password->setObjectName(QString::fromUtf8("password"));
        password->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(170, 255, 255);\n"
""));

        gridLayout_4->addWidget(password, 6, 1, 1, 2);

        pushButton_6 = new QPushButton(LoginPage);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(pushButton_6, 15, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 4, 3, 1, 1);

        pushButton_5 = new QPushButton(LoginPage);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(pushButton_5, 15, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_4, 5, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 2, 3, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_15, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 15, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 15, 3, 1, 1);

        label_2 = new QLabel(LoginPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\245\267\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 2, 1, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_3, 7, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 4, 0, 1, 1);

        stackedWidget->addWidget(LoginPage);
        OperatePage = new QWidget();
        OperatePage->setObjectName(QString::fromUtf8("OperatePage"));
        OperatePage->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(OperatePage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        addTask = new QPushButton(OperatePage);
        addTask->setObjectName(QString::fromUtf8("addTask"));

        gridLayout_3->addWidget(addTask, 5, 3, 1, 1);

        pushButton_11 = new QPushButton(OperatePage);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_3->addWidget(pushButton_11, 6, 3, 1, 1);

        delEdit = new QLineEdit(OperatePage);
        delEdit->setObjectName(QString::fromUtf8("delEdit"));

        gridLayout_3->addWidget(delEdit, 6, 0, 1, 1);

        pushButton_8 = new QPushButton(OperatePage);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_3->addWidget(pushButton_8, 8, 3, 1, 1);

        taskTable = new QTableWidget(OperatePage);
        if (taskTable->columnCount() < 5)
            taskTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        taskTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        taskTable->setObjectName(QString::fromUtf8("taskTable"));

        gridLayout_3->addWidget(taskTable, 3, 0, 1, 1);

        pushButton_10 = new QPushButton(OperatePage);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_3->addWidget(pushButton_10, 4, 3, 1, 1);

        stackedWidget->addWidget(OperatePage);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        calendarWidget = new QCalendarWidget(page);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(70, 10, 561, 381));
        stackedWidget->addWidget(page);
        AddPage = new QWidget();
        AddPage->setObjectName(QString::fromUtf8("AddPage"));
        gridLayout_5 = new QGridLayout(AddPage);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_4 = new QLabel(AddPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 11, 0, 1, 2);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_13, 5, 2, 1, 1);

        minBox = new QSpinBox(AddPage);
        minBox->setObjectName(QString::fromUtf8("minBox"));
        minBox->setMinimum(0);
        minBox->setMaximum(59);
        minBox->setValue(0);

        gridLayout_5->addWidget(minBox, 10, 2, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_12, 3, 2, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_9, 9, 2, 1, 1);

        label_3 = new QLabel(AddPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\245\267\344\275\223\";"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(AddPage);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_5->addWidget(pushButton_7, 12, 1, 1, 1);

        pushButton_9 = new QPushButton(AddPage);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_5->addWidget(pushButton_9, 12, 2, 1, 1);

        hourBox = new QSpinBox(AddPage);
        hourBox->setObjectName(QString::fromUtf8("hourBox"));
        hourBox->setMinimum(0);
        hourBox->setMaximum(23);

        gridLayout_5->addWidget(hourBox, 8, 2, 1, 1);

        addEdit = new QLineEdit(AddPage);
        addEdit->setObjectName(QString::fromUtf8("addEdit"));
        addEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"Microsoft YaHei UI\";"));

        gridLayout_5->addWidget(addEdit, 2, 0, 1, 1);

        catoEdit = new QLineEdit(AddPage);
        catoEdit->setObjectName(QString::fromUtf8("catoEdit"));
        catoEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"Microsoft YaHei UI\";"));

        gridLayout_5->addWidget(catoEdit, 8, 0, 1, 1);

        rankBox = new QComboBox(AddPage);
        rankBox->addItem(QString());
        rankBox->addItem(QString());
        rankBox->addItem(QString());
        rankBox->setObjectName(QString::fromUtf8("rankBox"));
        rankBox->setStyleSheet(QString::fromUtf8("font: 11pt \"Microsoft YaHei UI\";"));

        gridLayout_5->addWidget(rankBox, 4, 0, 3, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_11, 12, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_10, 9, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_7, 7, 2, 1, 1);

        yearBox = new QSpinBox(AddPage);
        yearBox->setObjectName(QString::fromUtf8("yearBox"));
        yearBox->setMinimum(2023);
        yearBox->setMaximum(3000);

        gridLayout_5->addWidget(yearBox, 2, 2, 1, 1);

        monthBox = new QSpinBox(AddPage);
        monthBox->setObjectName(QString::fromUtf8("monthBox"));
        monthBox->setMinimum(1);
        monthBox->setMaximum(12);

        gridLayout_5->addWidget(monthBox, 4, 2, 1, 1);

        dayBox = new QSpinBox(AddPage);
        dayBox->setObjectName(QString::fromUtf8("dayBox"));
        dayBox->setMinimum(1);
        dayBox->setMaximum(31);

        gridLayout_5->addWidget(dayBox, 6, 2, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_14, 1, 0, 1, 1);

        label_5 = new QLabel(AddPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        gridLayout_5->addWidget(label_5, 1, 2, 1, 1);

        startEdit = new QLineEdit(AddPage);
        startEdit->setObjectName(QString::fromUtf8("startEdit"));
        startEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"Microsoft YaHei UI\";"));

        gridLayout_5->addWidget(startEdit, 10, 0, 1, 1);

        stackedWidget->addWidget(AddPage);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
#if QT_CONFIG(accessibility)
        Widget->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        label->setText(QCoreApplication::translate("Widget", "\346\227\245\347\250\213\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\237\245\347\234\213\345\270\256\345\212\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:700;\">\345\270\256\345\212\251\344\270\255\345\277\203</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:700;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\346\254\242\350\277\216\344\275\277\347\224\250\346\227\245\347\250\213\347\256\241\347\220\206\347\263\273\347\273\237\357\274\201</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\350\257\245\347\263\273\347\273\237\345\217\257\345\256\236\347\216\260\344\270\215\345\220\214\350\264\246\346\210\267\344\270\213\344\273\273\345\212\241\345\275\225\345\205\245\343\200\201\346\230\276\347\244\272\343\200\201\345\210\240\351\231\244\345\222\214\346\217\220\351\206\222\345\212\237\350\203\275\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fo"
                        "nt-size:14pt;\">       \345\234\250\347\224\250\346\210\267\347\231\273\345\275\225\347\225\214\351\235\242\357\274\214\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\345\222\214\345\257\206\347\240\201\345\220\216\345\217\257\347\231\273\345\275\225\345\267\262\346\234\211\350\264\246\346\210\267\346\210\226\350\207\252\345\212\250\345\210\233\345\273\272\346\226\260\350\264\246\346\210\267\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">       \345\234\250\346\223\215\344\275\234\347\225\214\351\235\242\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">       \345\217\257\347\202\271\345\207\273\342\200\234\346\237\245\347\234\213\344\273\273\345\212\241\342\200\235\346\230\276\347\244\272\350\257\245\350\264\246\346\210\267\347\216\260"
                        "\346\234\211\344\273\273\345\212\241\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">       \347\202\271\345\207\273\342\200\234\346\267\273\345\212\240\344\273\273\345\212\241\342\200\235\344\273\245\345\275\225\345\205\245\346\226\260\344\273\273\345\212\241\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">       \350\276\223\345\205\245\345\276\205\345\210\240\351\231\244\344\273\273\345\212\241ID\345\271\266\347\202\271\345\207\273\342\200\235\345\210\240\351\231\244\344\273\273\345\212\241\342\200\235\344\273\245\345\210\240\351\231\244\350\257\245\344\273\273\345\212\241\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-"
                        "size:16pt;\"><br /></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        addTask->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\344\273\273\345\212\241", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\344\273\273\345\212\241", nullptr));
        delEdit->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\276\205\345\210\240\351\231\244\347\232\204\344\273\273\345\212\241\345\272\217\345\217\267", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = taskTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\344\273\273\345\212\241\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = taskTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = taskTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "\344\273\273\345\212\241\347\261\273\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = taskTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Widget", "\344\274\230\345\205\210\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = taskTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\344\273\273\345\212\241", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\256\236\344\276\213\357\274\2322023/07/08/08:45", nullptr));
        minBox->setSuffix(QCoreApplication::translate("Widget", "\345\210\206", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\344\273\273\345\212\241", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244\346\267\273\345\212\240\344\273\273\345\212\241", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        hourBox->setSuffix(QCoreApplication::translate("Widget", "\346\227\266", nullptr));
        addEdit->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\344\273\273\345\212\241\345\220\215", nullptr));
        catoEdit->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\344\273\273\345\212\241\347\261\273\345\210\253", nullptr));
        rankBox->setItemText(0, QCoreApplication::translate("Widget", "high", nullptr));
        rankBox->setItemText(1, QCoreApplication::translate("Widget", "medium", nullptr));
        rankBox->setItemText(2, QCoreApplication::translate("Widget", "low", nullptr));

        rankBox->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251\344\274\230\345\205\210\347\272\247", nullptr));
        yearBox->setSuffix(QCoreApplication::translate("Widget", "\345\271\264", nullptr));
        monthBox->setSuffix(QCoreApplication::translate("Widget", "\346\234\210", nullptr));
        dayBox->setSuffix(QCoreApplication::translate("Widget", "\346\227\245", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\346\217\220\351\206\222\346\227\266\351\227\264", nullptr));
        startEdit->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\274\200\345\247\213\346\227\266\351\227\264\357\274\210\345\271\264/\346\234\210/\346\227\245/\346\227\266/\345\210\206\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
