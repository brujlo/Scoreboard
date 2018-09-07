#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <QMainWindow>
#include "scoreboard_shower.h"
#include <QtSql/QSqlDatabase>
#include <QTimer>

namespace Ui {
class Scoreboard;
}

class Scoreboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Scoreboard(QWidget *parent = nullptr);
    ~Scoreboard();

private slots:
    void on_pushButton_clicked();

    void on_setTeams_clicked();

    void on_setHalfTime_clicked();

    void on_goolPlusHome_clicked();

    void on_goolMinusHome_clicked();

    void on_goolPlusAway_clicked();

    void on_goolMinusAway_clicked();

    void on_foulPlusHome_clicked();

    void on_foulMinusHome_clicked();

    void on_foulPlusAway_clicked();

    void on_foulMinusAway_clicked();

    int foulsStringToInt(QString);

    int limtFoulsStringToInt(QString);

    void on_resetTimer_clicked();

    void on_startTimer_clicked();

    void on_pauseTimer_clicked();

public slots:
    void setTimer();

private:
    Ui::Scoreboard *ui;
    Scoreboard_Shower *scoreboardShower;
    QVector <QString> teamsList;
    QTimer *timer;

public:
    static int timerLimit;
    Scoreboard *scr;
};

#endif // SCOREBOARD_H
