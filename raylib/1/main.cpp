#include "raylib.h"
#include <bits/stdc++.h>
using namespace std;

// this will fit the window in any screen resolution
/*
** you could make it resizeable 
** this will be my template on my raylib projects
**
*/
pair<int,int>sizeofscreen(){
    int monitor = GetCurrentMonitor();
    int width   = GetMonitorWidth(monitor);
    int height  = GetMonitorHeight(monitor);
 return {width,height};
}

// main function to run your app lol
int main() {
    pair<int,int>screen_size = sizeofscreen();
    InitWindow(screen_size.first, screen_size.second, "MOha's app");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("HEllo i'm mohamed ", 300, 280, 20, RED);
        DrawText("this text must be black" , 200 ,150,20,BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
