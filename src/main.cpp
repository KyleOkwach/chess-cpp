#include "raylib.h"
#include "glm/glm.hpp"
#include "imgui.h"
#include <iostream>

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "C++ Chess Engine");
    SetTargetFPS(60);

    // Example GLM usage
    glm::vec2 boardOrigin(50.0f, 50.0f);

    while (!WindowShouldClose()) {
        // Update Logic
        // ...

        // Render Logic
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Chess Engine Base Running!", 190, 200, 20, LIGHTGRAY);
        
        // Example grid draw using GLM math
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                Color col = ((i + j) % 2 == 0) ? BEIGE : BROWN;
                DrawRectangle(boardOrigin.x + i * 50, boardOrigin.y + j * 50, 50, 50, col);
            }
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
