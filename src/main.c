#include "raylib/raygui.h"
#include <stdio.h>

int main() {
    InitWindow(500, 500, "raylib_template");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        PollInputEvents();
    }

    CloseWindow();
    return 0;
}