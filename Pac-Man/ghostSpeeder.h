//
// Created by maciek on 17/01/2020.
//

#pragma once

#include "avatar.h"
#include "wayFinder.h"
#include "tile.h"
#include "grid.h"
#include <vector>
#include <QPoint>


class GhostSpeeder : public Avatar{
public:
    GhostSpeeder();
    virtual QPoint ghostDestPoint(Avatar* avatar, Grid* grid);
    void setColor(Qt::GlobalColor newColor){color = newColor;};
    void setHomePoint(QPoint newHome){homePos = newHome;};

protected:


};


