//
// Created by maciek on 14/01/2020.
//

#pragma once

#include <QWidget>
#include <QLCDNumber>

class PlayField;


class GameBoard : public QWidget
{
Q_OBJECT

public:
    GameBoard(QWidget *parent = 0);
public slots:
    void newGame();

protected slots:
    void getPoint();
    void newHighScore();

    void movPacManUp();
    void movPacManDown();
    void movPacManRight();
    void movPacManLeft();

private:
    QLCDNumber *scoreLCD;
    QLCDNumber *highScoreLCD;
    PlayField *playField;

};
