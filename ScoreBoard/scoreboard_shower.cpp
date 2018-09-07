#include "scoreboard_shower.h"
#include "ui_scoreboard_shower.h"

Scoreboard_Shower::Scoreboard_Shower(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Scoreboard_Shower)
{
    ui->setupUi(this);
}

Scoreboard_Shower::~Scoreboard_Shower()
{
    delete ui;
}
