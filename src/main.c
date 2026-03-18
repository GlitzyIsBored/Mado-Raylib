#define SCREEN_HEIGHT 300
#define SCREEN_WIDTH 300

#include <raylib.h>
#include <time.h>
#include <stdlib.h>
#include "button.c"

Button button;

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Omg Mado");
    SetConfigFlags(FLAG_WINDOW_TRANSPARENT);
    SetWindowIcon(LoadImage("../images/icon/Mado-icon.png"));
    SetWindowState(FLAG_WINDOW_UNDECORATED);
    InitAudioDevice();

    setButton();

    SetTargetFPS(30);

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(BLANK);
            DrawText("Omgsss", 0, 0, 20, PINK);
            drawButton();

        EndDrawing();
    }
    unloadButton();
    CloseAudioDevice();
    CloseWindow();

    return 0;
}
