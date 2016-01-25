/********************************************************************************
** Form generated from reading UI file 'jlwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JLWIDGET_H
#define UI_JLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JLWidget
{
public:
    QTabWidget *JLControl;
    QWidget *TabSystem;
    QWidget *TabImage;
    QWidget *TabSetting;

    void setupUi(QWidget *JLWidget)
    {
        if (JLWidget->objectName().isEmpty())
            JLWidget->setObjectName(QStringLiteral("JLWidget"));
        JLWidget->setEnabled(false);
        JLWidget->resize(913, 461);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JLWidget->sizePolicy().hasHeightForWidth());
        JLWidget->setSizePolicy(sizePolicy);
        JLWidget->setMinimumSize(QSize(913, 461));
        JLWidget->setMaximumSize(QSize(913, 461));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        JLWidget->setFont(font);
        JLWidget->setMouseTracking(false);
        JLWidget->setFocusPolicy(Qt::ClickFocus);
        JLControl = new QTabWidget(JLWidget);
        JLControl->setObjectName(QStringLiteral("JLControl"));
        JLControl->setEnabled(false);
        JLControl->setGeometry(QRect(0, 0, 911, 461));
        JLControl->setFont(font);
        JLControl->setFocusPolicy(Qt::ClickFocus);
        JLControl->setContextMenuPolicy(Qt::ActionsContextMenu);
        JLControl->setTabPosition(QTabWidget::North);
        JLControl->setElideMode(Qt::ElideNone);
        JLControl->setTabsClosable(false);
        JLControl->setMovable(false);
        JLControl->setTabBarAutoHide(false);
        TabSystem = new QWidget();
        TabSystem->setObjectName(QStringLiteral("TabSystem"));
        TabSystem->setFocusPolicy(Qt::ClickFocus);
        JLControl->addTab(TabSystem, QString());
        TabImage = new QWidget();
        TabImage->setObjectName(QStringLiteral("TabImage"));
        TabImage->setFocusPolicy(Qt::ClickFocus);
        JLControl->addTab(TabImage, QString());
        TabSetting = new QWidget();
        TabSetting->setObjectName(QStringLiteral("TabSetting"));
        TabSetting->setFocusPolicy(Qt::ClickFocus);
        JLControl->addTab(TabSetting, QString());

        retranslateUi(JLWidget);

        JLControl->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(JLWidget);
    } // setupUi

    void retranslateUi(QWidget *JLWidget)
    {
        JLWidget->setWindowTitle(QApplication::translate("JLWidget", "JLFlash", 0));
        JLControl->setTabText(JLControl->indexOf(TabSystem), QApplication::translate("JLWidget", "\347\263\273\347\273\237", 0));
        JLControl->setTabText(JLControl->indexOf(TabImage), QApplication::translate("JLWidget", "\345\233\276\345\203\217", 0));
        JLControl->setTabText(JLControl->indexOf(TabSetting), QApplication::translate("JLWidget", "\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class JLWidget: public Ui_JLWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JLWIDGET_H
