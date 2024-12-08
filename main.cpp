#include <iostream>
#include "raylib.h"
#include "player.h"
#include "brick.h"

int screenWidth=800;
int screenHeight=450;

int playerWidth=80;
int playerHeight=20;
Color playerColor=RED;

int playerIncX=0;
int playerIncY=0;


int brickWidth=40;
int brickHeight=10;
Color brickColor=YELLOW;

int brickIncX=0;
int brickIncY=0;

int initBrickX=10;
int initBrickY=10;

int ctrRef=0;

int main(int argc,char **argv)
{

    int i=0,j=0;
    Player pl(screenWidth/2,screenHeight-30,playerWidth,playerHeight,playerColor);

    Brick *br[10][17];

    for(i=0;i<10;i++)
    {
        for(j=0;j<17;j++)
        {
            br[i][j]=new Brick(initBrickX,initBrickY,brickWidth,brickHeight,brickColor);
            initBrickX=initBrickX+45;
        }
        initBrickX=10;
        initBrickY=initBrickY+15;
    }

    InitWindow(screenWidth,screenHeight,"Bricks Game");

    brickIncY=0;

    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        if(ctrRef==100)
        {
            brickIncY=1;
            ctrRef=0;
        }
        else
        {
            brickIncY=0;
        }
        if(IsKeyDown(KEY_LEFT))
        {
            playerIncX=-1;
        }
        else if(IsKeyDown(KEY_RIGHT))
        {
            playerIncX=1;
        }
        else
        {
            playerIncX=0;
        }

        BeginDrawing();
        ClearBackground(BLACK);

        for(i=0;i<10;i++)
        {
            for(j=0;j<17;j++)
            {
                br[i][j]->renderBrick(brickIncX,brickIncY);
            }
        }

        pl.renderPlayer(playerIncX,playerIncY);

        EndDrawing();

        ctrRef=ctrRef+1;
    }

    for (i = 0; i < 10; ++i) {
        for (j = 0; j < 17; ++j) {
            delete br[i][j];
        }
    }
    return 0;
}
