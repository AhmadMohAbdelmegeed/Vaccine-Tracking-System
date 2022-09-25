/********************************************************************************
** Form generated from reading UI file 'Screen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN_H
#define UI_SCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenClass
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *user;
    QPushButton *BackBtn;
    QPushButton *RemoveBtn;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_3;
    QPushButton *SignUpBtn;
    QLabel *label_5;
    QPushButton *EditBtn;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_8;
    QGroupBox *groupBox;
    QRadioButton *Not_R_Btn;
    QRadioButton *second_R_Btn;
    QRadioButton *First_R_Btn;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QComboBox *comboBox;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QWidget *admin;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *search;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *back;
    QLineEdit *lineEdit_11;
    QLabel *label_26;
    QLabel *label_27;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_4;
    QPushButton *moreStat;
    QPushButton *pushButton_2;
    QWidget *home;
    QLabel *SingUplabel;
    QPushButton *signuplink_2;
    QGroupBox *groupBox_3;
    QPushButton *logIn;
    QLineEdit *lineEdit_3;
    QLabel *Passwordlabel_4;
    QLineEdit *lineEdit_4;
    QLabel *IDlabel_3;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_5;
    QLabel *Passwordlabel_5;
    QPushButton *logIn_2;
    QWidget *stat;
    QLabel *label_11;
    QProgressBar *progressBar_5;
    QLabel *label_14;
    QProgressBar *progressBar_6;
    QLabel *label_15;
    QProgressBar *progressBar_7;
    QLabel *label_16;
    QProgressBar *progressBar_8;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QProgressBar *progressBar_9;
    QProgressBar *progressBar_10;
    QLabel *label_21;
    QPushButton *backToAdmin;
    QWidget *page;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_8;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QMenuBar *menuBar;
    QMenu *menuWelcome_to_the_Vaccine_Tracker;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ScreenClass)
    {
        if (ScreenClass->objectName().isEmpty())
            ScreenClass->setObjectName(QString::fromUtf8("ScreenClass"));
        ScreenClass->resize(954, 556);
        ScreenClass->setMinimumSize(QSize(954, 556));
        ScreenClass->setMaximumSize(QSize(954, 556));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../OneDrive/Desktop/9Nch8Ib.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ScreenClass->setWindowIcon(icon);
        ScreenClass->setAutoFillBackground(false);
        centralWidget = new QWidget(ScreenClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 951, 521));
        user = new QWidget();
        user->setObjectName(QString::fromUtf8("user"));
        BackBtn = new QPushButton(user);
        BackBtn->setObjectName(QString::fromUtf8("BackBtn"));
        BackBtn->setGeometry(QRect(580, 470, 75, 24));
        RemoveBtn = new QPushButton(user);
        RemoveBtn->setObjectName(QString::fromUtf8("RemoveBtn"));
        RemoveBtn->setGeometry(QRect(670, 470, 75, 24));
        label_2 = new QLabel(user);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(40, 140, 61, 16));
        label_2->setAutoFillBackground(true);
        label_6 = new QLabel(user);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);
        label_6->setGeometry(QRect(40, 420, 111, 16));
        label_6->setAutoFillBackground(true);
        label = new QLabel(user);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(40, 20, 121, 16));
        label->setAutoFillBackground(true);
        label_3 = new QLabel(user);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(40, 210, 101, 16));
        label_3->setAutoFillBackground(true);
        SignUpBtn = new QPushButton(user);
        SignUpBtn->setObjectName(QString::fromUtf8("SignUpBtn"));
        SignUpBtn->setGeometry(QRect(850, 470, 75, 24));
        label_5 = new QLabel(user);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(40, 350, 49, 16));
        label_5->setAutoFillBackground(true);
        EditBtn = new QPushButton(user);
        EditBtn->setObjectName(QString::fromUtf8("EditBtn"));
        EditBtn->setGeometry(QRect(760, 470, 75, 24));
        lineEdit = new QLineEdit(user);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 50, 300, 21));
        lineEdit_2 = new QLineEdit(user);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 170, 300, 21));
        lineEdit_6 = new QLineEdit(user);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(40, 240, 300, 21));
        lineEdit_8 = new QLineEdit(user);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(40, 380, 300, 21));
        groupBox = new QGroupBox(user);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(630, 170, 241, 131));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        groupBox->setFont(font);
        Not_R_Btn = new QRadioButton(groupBox);
        Not_R_Btn->setObjectName(QString::fromUtf8("Not_R_Btn"));
        Not_R_Btn->setGeometry(QRect(50, 30, 151, 20));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        Not_R_Btn->setFont(font1);
        second_R_Btn = new QRadioButton(groupBox);
        second_R_Btn->setObjectName(QString::fromUtf8("second_R_Btn"));
        second_R_Btn->setGeometry(QRect(50, 90, 111, 20));
        second_R_Btn->setFont(font1);
        First_R_Btn = new QRadioButton(groupBox);
        First_R_Btn->setObjectName(QString::fromUtf8("First_R_Btn"));
        First_R_Btn->setGeometry(QRect(50, 60, 89, 20));
        First_R_Btn->setFont(font1);
        groupBox_2 = new QGroupBox(user);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 280, 281, 61));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 30, 89, 20));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(170, 30, 89, 20));
        comboBox = new QComboBox(user);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 450, 300, 21));
        label_7 = new QLabel(user);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setEnabled(true);
        label_7->setGeometry(QRect(40, 80, 141, 16));
        label_7->setAutoFillBackground(true);
        lineEdit_7 = new QLineEdit(user);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(40, 110, 300, 21));
        stackedWidget->addWidget(user);
        admin = new QWidget();
        admin->setObjectName(QString::fromUtf8("admin"));
        label_9 = new QLabel(admin);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(200, 30, 91, 20));
        label_10 = new QLabel(admin);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(220, 400, 71, 16));
        search = new QPushButton(admin);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(660, 400, 131, 25));
        label_12 = new QLabel(admin);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(460, 350, 41, 16));
        label_13 = new QLabel(admin);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(210, 110, 71, 20));
        back = new QPushButton(admin);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(160, 450, 131, 24));
        lineEdit_11 = new QLineEdit(admin);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(300, 400, 350, 23));
        label_26 = new QLabel(admin);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(220, 190, 61, 20));
        label_27 = new QLabel(admin);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(180, 270, 101, 20));
        progressBar = new QProgressBar(admin);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(300, 30, 380, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(admin);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(300, 110, 380, 23));
        progressBar_2->setValue(24);
        progressBar_3 = new QProgressBar(admin);
        progressBar_3->setObjectName(QString::fromUtf8("progressBar_3"));
        progressBar_3->setGeometry(QRect(300, 190, 380, 23));
        progressBar_3->setValue(24);
        progressBar_4 = new QProgressBar(admin);
        progressBar_4->setObjectName(QString::fromUtf8("progressBar_4"));
        progressBar_4->setGeometry(QRect(300, 270, 380, 23));
        progressBar_4->setValue(24);
        moreStat = new QPushButton(admin);
        moreStat->setObjectName(QString::fromUtf8("moreStat"));
        moreStat->setGeometry(QRect(660, 450, 131, 24));
        pushButton_2 = new QPushButton(admin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 450, 131, 24));
        stackedWidget->addWidget(admin);
        home = new QWidget();
        home->setObjectName(QString::fromUtf8("home"));
        SingUplabel = new QLabel(home);
        SingUplabel->setObjectName(QString::fromUtf8("SingUplabel"));
        SingUplabel->setGeometry(QRect(120, 420, 81, 20));
        QFont font2;
        font2.setBold(true);
        SingUplabel->setFont(font2);
        signuplink_2 = new QPushButton(home);
        signuplink_2->setObjectName(QString::fromUtf8("signuplink_2"));
        signuplink_2->setGeometry(QRect(120, 450, 183, 41));
        groupBox_3 = new QGroupBox(home);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(100, 190, 681, 221));
        groupBox_3->setFont(font2);
        logIn = new QPushButton(groupBox_3);
        logIn->setObjectName(QString::fromUtf8("logIn"));
        logIn->setGeometry(QRect(20, 180, 131, 24));
        QFont font3;
        font3.setBold(false);
        logIn->setFont(font3);
        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 60, 471, 28));
        Passwordlabel_4 = new QLabel(groupBox_3);
        Passwordlabel_4->setObjectName(QString::fromUtf8("Passwordlabel_4"));
        Passwordlabel_4->setGeometry(QRect(20, 100, 81, 20));
        Passwordlabel_4->setFont(font3);
        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(20, 130, 471, 28));
        lineEdit_4->setInputMethodHints(Qt::ImhHiddenText);
        lineEdit_4->setClearButtonEnabled(true);
        IDlabel_3 = new QLabel(groupBox_3);
        IDlabel_3->setObjectName(QString::fromUtf8("IDlabel_3"));
        IDlabel_3->setGeometry(QRect(20, 30, 81, 20));
        IDlabel_3->setFont(font3);
        groupBox_4 = new QGroupBox(home);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(100, 20, 681, 141));
        groupBox_4->setFont(font2);
        lineEdit_5 = new QLineEdit(groupBox_4);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(20, 60, 471, 28));
        lineEdit_5->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_5->setClearButtonEnabled(true);
        Passwordlabel_5 = new QLabel(groupBox_4);
        Passwordlabel_5->setObjectName(QString::fromUtf8("Passwordlabel_5"));
        Passwordlabel_5->setGeometry(QRect(20, 30, 141, 20));
        Passwordlabel_5->setFont(font3);
        logIn_2 = new QPushButton(groupBox_4);
        logIn_2->setObjectName(QString::fromUtf8("logIn_2"));
        logIn_2->setGeometry(QRect(20, 100, 131, 24));
        logIn_2->setFont(font3);
        stackedWidget->addWidget(home);
        stat = new QWidget();
        stat->setObjectName(QString::fromUtf8("stat"));
        label_11 = new QLabel(stat);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 120, 63, 20));
        progressBar_5 = new QProgressBar(stat);
        progressBar_5->setObjectName(QString::fromUtf8("progressBar_5"));
        progressBar_5->setGeometry(QRect(120, 120, 320, 23));
        progressBar_5->setValue(24);
        label_14 = new QLabel(stat);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 230, 63, 20));
        progressBar_6 = new QProgressBar(stat);
        progressBar_6->setObjectName(QString::fromUtf8("progressBar_6"));
        progressBar_6->setGeometry(QRect(120, 230, 320, 23));
        progressBar_6->setValue(24);
        label_15 = new QLabel(stat);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 340, 63, 20));
        progressBar_7 = new QProgressBar(stat);
        progressBar_7->setObjectName(QString::fromUtf8("progressBar_7"));
        progressBar_7->setGeometry(QRect(120, 340, 320, 23));
        progressBar_7->setValue(24);
        label_16 = new QLabel(stat);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(70, 60, 321, 21));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        label_16->setFont(font4);
        progressBar_8 = new QProgressBar(stat);
        progressBar_8->setObjectName(QString::fromUtf8("progressBar_8"));
        progressBar_8->setGeometry(QRect(590, 230, 320, 23));
        progressBar_8->setValue(24);
        label_18 = new QLabel(stat);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(500, 340, 63, 20));
        label_19 = new QLabel(stat);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(500, 120, 63, 20));
        label_20 = new QLabel(stat);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(500, 230, 63, 20));
        progressBar_9 = new QProgressBar(stat);
        progressBar_9->setObjectName(QString::fromUtf8("progressBar_9"));
        progressBar_9->setGeometry(QRect(590, 340, 320, 23));
        progressBar_9->setValue(24);
        progressBar_10 = new QProgressBar(stat);
        progressBar_10->setObjectName(QString::fromUtf8("progressBar_10"));
        progressBar_10->setGeometry(QRect(590, 120, 320, 23));
        progressBar_10->setValue(24);
        label_21 = new QLabel(stat);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(560, 60, 331, 21));
        label_21->setFont(font4);
        backToAdmin = new QPushButton(stat);
        backToAdmin->setObjectName(QString::fromUtf8("backToAdmin"));
        backToAdmin->setGeometry(QRect(410, 450, 131, 24));
        stackedWidget->addWidget(stat);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 450, 131, 24));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 30, 221, 51));
        label_4->setFont(font4);
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(610, 30, 251, 51));
        label_8->setFont(font4);
        textBrowser = new QTextBrowser(page);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 80, 381, 361));
        textBrowser_2 = new QTextBrowser(page);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(540, 80, 381, 361));
        stackedWidget->addWidget(page);
        ScreenClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ScreenClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 954, 22));
        menuWelcome_to_the_Vaccine_Tracker = new QMenu(menuBar);
        menuWelcome_to_the_Vaccine_Tracker->setObjectName(QString::fromUtf8("menuWelcome_to_the_Vaccine_Tracker"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        ScreenClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ScreenClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ScreenClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ScreenClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ScreenClass->setStatusBar(statusBar);

        menuBar->addAction(menuWelcome_to_the_Vaccine_Tracker->menuAction());
        menuBar->addAction(menu->menuAction());
        menuWelcome_to_the_Vaccine_Tracker->addSeparator();

        retranslateUi(ScreenClass);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ScreenClass);
    } // setupUi

    void retranslateUi(QMainWindow *ScreenClass)
    {
        ScreenClass->setWindowTitle(QCoreApplication::translate("ScreenClass", "Screen", nullptr));
        BackBtn->setText(QCoreApplication::translate("ScreenClass", "Back", nullptr));
        RemoveBtn->setText(QCoreApplication::translate("ScreenClass", "Remove", nullptr));
        label_2->setText(QCoreApplication::translate("ScreenClass", "National ID", nullptr));
        label_6->setText(QCoreApplication::translate("ScreenClass", "Governorate", nullptr));
        label->setText(QCoreApplication::translate("ScreenClass", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("ScreenClass", "Passsword", nullptr));
        SignUpBtn->setText(QCoreApplication::translate("ScreenClass", "Sign Up", nullptr));
        label_5->setText(QCoreApplication::translate("ScreenClass", "Age", nullptr));
        EditBtn->setText(QCoreApplication::translate("ScreenClass", "Edit", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ScreenClass", "State", nullptr));
        Not_R_Btn->setText(QCoreApplication::translate("ScreenClass", "Not Vaccinated ", nullptr));
        second_R_Btn->setText(QCoreApplication::translate("ScreenClass", "Second Dose", nullptr));
        First_R_Btn->setText(QCoreApplication::translate("ScreenClass", "First Dose ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ScreenClass", "Gender", nullptr));
        radioButton->setText(QCoreApplication::translate("ScreenClass", "Male", nullptr));
        radioButton_2->setText(QCoreApplication::translate("ScreenClass", "Female", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ScreenClass", "Cairo", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ScreenClass", "Giza", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ScreenClass", "Alexandria", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("ScreenClass", "Assiut", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("ScreenClass", "Aswan", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("ScreenClass", "Beheira", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("ScreenClass", "Bani-Suef", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("ScreenClass", "Daqahliya", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("ScreenClass", "Damietta", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("ScreenClass", "Fayyoum", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("ScreenClass", "Gharbiya", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("ScreenClass", "Ismailia", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("ScreenClass", "Kafr-El-Sheikh", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("ScreenClass", "Luxor", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("ScreenClass", "Marsa-Matrouh", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("ScreenClass", "Minya", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("ScreenClass", "Monofiya", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("ScreenClass", "New-Valley", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("ScreenClass", "North-Sinai", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("ScreenClass", "Port-Said", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("ScreenClass", "Qalioubiya", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("ScreenClass", "Qena", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("ScreenClass", "Red-Sea", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("ScreenClass", "Sharqiya", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("ScreenClass", "Sohag", nullptr));
        comboBox->setItemText(25, QCoreApplication::translate("ScreenClass", "South-Siani", nullptr));
        comboBox->setItemText(26, QCoreApplication::translate("ScreenClass", "Suez", nullptr));

        label_7->setText(QCoreApplication::translate("ScreenClass", "Last Name", nullptr));
        label_9->setText(QCoreApplication::translate("ScreenClass", "Fully Vaccinated", nullptr));
        label_10->setText(QCoreApplication::translate("ScreenClass", "National ID", nullptr));
        search->setText(QCoreApplication::translate("ScreenClass", "Search", nullptr));
        label_12->setText(QCoreApplication::translate("ScreenClass", "Search", nullptr));
        label_13->setText(QCoreApplication::translate("ScreenClass", "Unvaccinated", nullptr));
        back->setText(QCoreApplication::translate("ScreenClass", "Back", nullptr));
        label_26->setText(QCoreApplication::translate("ScreenClass", "Vaccinated", nullptr));
        label_27->setText(QCoreApplication::translate("ScreenClass", "Females Registered", nullptr));
        moreStat->setText(QCoreApplication::translate("ScreenClass", "Advanced Statistics", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ScreenClass", "Waiting list", nullptr));
        SingUplabel->setText(QCoreApplication::translate("ScreenClass", "first time?", nullptr));
        signuplink_2->setText(QCoreApplication::translate("ScreenClass", "SignUp", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ScreenClass", "User LogIn", nullptr));
        logIn->setText(QCoreApplication::translate("ScreenClass", "Log in", nullptr));
        Passwordlabel_4->setText(QCoreApplication::translate("ScreenClass", "Password", nullptr));
        IDlabel_3->setText(QCoreApplication::translate("ScreenClass", "National ID", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ScreenClass", "If you are an Admin", nullptr));
        lineEdit_5->setText(QString());
        Passwordlabel_5->setText(QCoreApplication::translate("ScreenClass", "Admin Password", nullptr));
        logIn_2->setText(QCoreApplication::translate("ScreenClass", "Log in as an Admin", nullptr));
        label_11->setText(QCoreApplication::translate("ScreenClass", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("ScreenClass", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("ScreenClass", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("ScreenClass", "Top 3 Vaccinated Governorates", nullptr));
        label_18->setText(QCoreApplication::translate("ScreenClass", "TextLabel", nullptr));
        label_19->setText(QCoreApplication::translate("ScreenClass", "TextLabel", nullptr));
        label_20->setText(QCoreApplication::translate("ScreenClass", "TextLabel", nullptr));
        label_21->setText(QCoreApplication::translate("ScreenClass", "Least 3 Vaccinated Governorates", nullptr));
        backToAdmin->setText(QCoreApplication::translate("ScreenClass", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("ScreenClass", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("ScreenClass", "First dose Waiting list", nullptr));
        label_8->setText(QCoreApplication::translate("ScreenClass", "Second dose Waiting list", nullptr));
        menuWelcome_to_the_Vaccine_Tracker->setTitle(QCoreApplication::translate("ScreenClass", "Welcome to the Vaccine Tracker", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class ScreenClass: public Ui_ScreenClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_H
