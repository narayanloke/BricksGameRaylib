#ifndef BRICK_H_INCLUDED
#define BRICK_H_INCLUDED
#include "raylib.h"

class Brick {
public:
    int x;
    int y;
    int width;
    int height;
    Color color;

    int scrHeight=0;
    int scrWidth=0;
    int collisionBit=0;
    Brick();
    Brick(int x,int y,int width,int height,Color color);
    void renderBrick(int x,int y);
    int getX();
    void setX(int value);
    int getY();
    void setY(int value);
    void setWidth(int value);
    int getWidth();
    void setHeight(int value);
    int getHeight();
    void setCollisionBit(int value);
    int getCollisionBit();

};


#endif // BRICK_H_INCLUDED
