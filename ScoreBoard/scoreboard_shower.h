#ifndef SCOREBOARD_SHOWER_H
#define SCOREBOARD_SHOWER_H

#include <QDialog>

namespace Ui {
class Scoreboard_Shower;
}

class Scoreboard_Shower : public QDialog
{
    Q_OBJECT

public:
    explicit Scoreboard_Shower(QWidget *parent = nullptr);
    ~Scoreboard_Shower();

private:
    Ui::Scoreboard_Shower *ui;
};

#endif // SCOREBOARD_SHOWER_H
