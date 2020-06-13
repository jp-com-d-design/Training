#include "TEXT_CHANGE.h"
#include <string>

using namespace std;

const int MAX = 10;
const int MIN = 0;

TEXT_CHANGE::TEXT_CHANGE(QWidget *parent)
    : QMainWindow(parent),
    iNum(0)
{
    ui.setupUi(this);

    connect(ui.plus, &QAbstractButton::clicked, this, &TEXT_CHANGE::NumLabel_Plus);
    connect(ui.minus, &QAbstractButton::clicked, this, &TEXT_CHANGE::NumLabel_Minus);
}

void TEXT_CHANGE::NumLabel_Plus(void)
{
    if (MAX > iNum) {
        ui.num->setText(QString::number(++iNum));
    }
}

void TEXT_CHANGE::NumLabel_Minus(void)
{
    if (MIN < iNum) {
        ui.num->setText(QString::number(--iNum));
    }
}