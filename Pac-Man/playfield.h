//
// Created by maciek on 15/01/2020.
//

#pragma once

#include <QWidget>
#include "grid.h"
#include "avatar.h"

#define ANIMATION_TIME_MS 20

class PlayField
        : public QWidget{
Q_OBJECT

public:
    PlayField(QWidget *parent = 0);
    void newGame();


public slots:

    void movPacManUp();
    void movPacManDown();
    void movPacManRight();
    void movPacManLeft();

private slots:
    void movPacMan();
signals:
    void getPoint();
protected:
    void paintEvent(QPaintEvent *event);
    void paintPoints();
    void paintPacMan();
    void paintWalls();


private:
    QPixmap* pixMap;
    Grid* grid;
    Avatar* pacMan;
    void pointCheck(QPoint toCheckPoint);

    QTimer* timerPacMan;
};


