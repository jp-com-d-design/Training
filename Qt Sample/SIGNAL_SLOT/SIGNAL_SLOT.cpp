#include "SIGNAL_SLOT.h"

SIGNAL_SLOT::SIGNAL_SLOT(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void SIGNAL_SLOT::sigslo(QApplication *app)
{
    // QuitButtonをPushすることでアプリケーション(MainWindow)を終了する
    // アプリケーション終了はButtonのイベント割り込みより、処理を実行する
    QObject::connect(ui.QuitButton, SIGNAL(clicked()), app, SLOT(quit()));
}
