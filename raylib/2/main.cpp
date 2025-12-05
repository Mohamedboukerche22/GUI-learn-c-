#include "raylib.h"
#include <bits/stdc++.h>
using namespace std;

// this will fit the window in any screen resolution
/*
** you could make it resizeable 
** this will be my template on my raylib projects
**
*/

std::string getOS(){

#if defined(_WIN32)
 // system is windows
   return "Windows";

#elif defined(__linux__)   

   return "Linux";

#elif defined(__APPLE__)

  return "macOS";  

#else

  return "Unknown";

#endif
};


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
        DrawText("your computer properties are : ", 300, 280, 20, RED);
        pair<int,int>screen_size = sizeofscreen();
        int width = screen_size.first;
        int height = screen_size.second;
        string os = getOS();
        DrawText(TextFormat("your screen size is  : %i * %i",width,height) , 300 ,300,20,BLACK);
        DrawText(TextFormat("your operating system is : %s ",os.c_str()) , 300 ,320,20,BLACK);
        
        


         


        EndDrawing();
    }

    CloseWindow();
    return 0;
}
