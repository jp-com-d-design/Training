#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SIGNAL_SLOT.h"

class SIGNAL_SLOT : public QMainWindow
{
    Q_OBJECT

public:
    SIGNAL_SLOT(QWidget *parent = Q_NULLPTR);

    void SIGNAL_SLOT::sigslo(QApplication* app);

private:
    Ui::SIGNAL_SLOTClass ui;
};
