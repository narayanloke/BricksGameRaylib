#include "player.h"

Player::Player(int x,int y,int width,int height,Color color)
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

void Player::renderPlayer(int xincr,int yincr)
{
    x=x+xincr;
    y=y+yincr;

    DrawRectangle(x,y,width,height,color);
}


int Player::getX()
{
    return this->x;
}

void Player::setX(int value)
{
    this->x=value;
}

int Player::getY()
{
    return this->y;
}


void Player::setY(int value)
{
    this->y=value;
}


void Player::setWidth(int value)
{
    this->width=value;
}

int Player::getWidth()
{
    return width;
}

void Player::setHeight(int value)
{
    this->height=value;
}

int Player::getHeight()
{
    return height;
}
