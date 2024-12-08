#include "brick.h"
Brick::Brick()
{

}
Brick::Brick(int x,int y,int width,int height,Color color)
{
    extern int screenHeight;
    extern int screenWidth;
    this->x=x;
    this->y=y;
    this->width=width;
    this->height=height;
    this->color=color;

    scrHeight=screenHeight;
    scrWidth=screenWidth;
}

void Brick::renderBrick(int xincr,int yincr)
{
    x=x+xincr;
    y=y+yincr;

    DrawRectangle(x,y,width,height,color);
}


int Brick::getX()
{
    return this->x;
}

void Brick::setX(int value)
{
    this->x=value;
}

int Brick::getY()
{
    return this->y;
}


void Brick::setY(int value)
{
    this->y=value;
}


void Brick::setWidth(int value)
{
    this->width=value;
}

int Brick::getWidth()
{
    return width;
}

void Brick::setHeight(int value)
{
    this->height=value;
}

int Brick::getHeight()
{
    return height;
}

void Brick::setCollisionBit(int value)
{
    this->collisionBit=value;
}

int Brick::getCollisionBit()
{
    return this->collisionBit;
}
