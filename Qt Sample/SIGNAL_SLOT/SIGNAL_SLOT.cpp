#include "SIGNAL_SLOT.h"

SIGNAL_SLOT::SIGNAL_SLOT(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void SIGNAL_SLOT::sigslo(QApplication *app)
{
    // QuitButton��Push���邱�ƂŃA�v���P�[�V����(MainWindow)���I������
    // �A�v���P�[�V�����I����Button�̃C�x���g���荞�݂��A���������s����
    QObject::connect(ui.QuitButton, SIGNAL(clicked()), app, SLOT(quit()));
}
