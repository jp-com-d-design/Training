#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TEXT_CHANGE.h"

class TEXT_CHANGE : public QMainWindow
{
    Q_OBJECT
// �֐��錾
public:
    TEXT_CHANGE(QWidget *parent = Q_NULLPTR);
    //void SIG_SLO(QApplication* app);

private:
    Ui::TEXT_CHANGEClass ui;

//signals:
//    Label_Plus(void);
//    Label_Minus(void);


private slots:
    void NumLabel_Plus(void);
    void NumLabel_Minus(void);

// �ϐ��錾
private:
    int iNum;
};
