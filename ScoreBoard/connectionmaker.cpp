#include "connectionmaker.h"
#include "dbinput.h"

#include <QStandardPaths>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QtSql/QSqlError>
#include <windows.h>


ConnectionMaker::ConnectionMaker()
{

}

bool ConnectionMaker::makeConnection(){
    DBQ = "DBQ=F:/PROJEKTI/VS/QT/ScoreBoard/scoreboardDB.mdb;";
    DSN = "DSN=C:/Users/brujlo/Documents/scoreboardDB2;";
    driver = "Driver={Microsoft Access Driver (*.mdb)};";
    connString = driver + DBQ;

    db = QSqlDatabase::addDatabase("QODBC");

    db.setConnectOptions();
    db.setDatabaseName(connString);


    if(db.open()){
        //qDebug() << "oK";
        return true;
    }else{
        //qDebug() << db.lastError().text();
        return false;
    }
}
