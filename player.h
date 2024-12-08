#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "raylib.h"

class Player {
private:
    int x;
    int y;
    int width;
    int height;
    Color color;

    int scrHeight=0;
    int scrWidth=0;

public:

    Player(int x,int y,int width,int height,Color color);
    void renderPlayer(int x,int y);
    int getX();
    void setX(int value);
    int getY();
    void setY(int value);
    void setWidth(int value);
    int getWidth();
    void setHeight(int value);
    int getHeight();


};


#endif // PLAYER_H_INCLUDED
