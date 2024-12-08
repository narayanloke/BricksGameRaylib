#include <iostream>
#include "raylib.h"
#include "player.h"

int screenWidth=800;
int screenHeight=450;

int playerWidth=80;
int playerHeight=20;
Color playerColor=RED;

int playerIncX=0;
int playerIncY=0;

int main(int argc,char **argv)
{

    Player pl(screenWidth/2,screenHeight-30,playerWidth,playerHeight,playerColor);
    InitWindow(screenWidth,screenHeight,"Bricks Game");

    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
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

        pl.renderPlayer(playerIncX,playerIncY);

        EndDrawing();
    }

    return 0;
}
