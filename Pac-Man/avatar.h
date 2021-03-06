//
// Created by maciek on 15/01/2020.
//
#pragma once

#include <QPoint>
#include <QPainter>




class Avatar {

public:
    enum MoveState { stay = 0, right = 1, left = 2, up = 3, down = 4};


    Avatar();

    inline QPoint getGridPos() { return gridPos;};
    inline QPoint getAvatarPixPos(){ return posPix;};
    inline void setAvatarPixPos(QPoint newPos){posPix = newPos;};
    inline void setGridPos(QPoint newPos) { gridPos = newPos;};
    inline void goHome(){gridPos = homePos;};
    inline MoveState getState(){ return moveState;};
    inline void setState(MoveState newState){moveState = newState;};
    inline Qt::GlobalColor  getColor(){ return color;};




    //void paintAvatar(QPainter* painter, int xLength, int yLength);

    //void movAvatarUp(int xLength, int yLength);
    //void movAnimation();

    //inline QPoint getPixPos() { return pixPos;};

protected:
    QPoint homePos;
    QPoint gridPos;
    QPoint posPix;
    MoveState moveState;
    Qt::GlobalColor color;
    /*
    QTimer timer;
    int animationTime;
    */
};

