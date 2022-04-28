#include "raylib.h"

#include "raymath.h"        // Required for: MatrixRotateXYZ()

int main(void)
{
    // Initialization
  //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "PlaneFight");

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)

    Image image1 = LoadImage("Pictures/avion1_droite.png");
    Image image2 = LoadImage("Pictures/avion2_gauche.png");
    // Loaded in CPU memory (RAM)
    Texture2D texture1 = LoadTextureFromImage(image1);   
    Texture2D texture2 = LoadTextureFromImage(image2);     // Image converted to texture, GPU memory (VRAM)
    UnloadImage(image1);   // Once image has been converted to texture and uploaded to VRAM, it can be unloaded from RAM
    UnloadImage(image2);

    Vector2 position1 = { 350.0f, 280.0f };
    Vector2 position2 = { 0.0f, 0.0f };
    SetTargetFPS(60);     // Set our game to run at 60 frames-per-second
    //---------------------------------------------------------------------------------------
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        if (IsKeyPressed(KEY_RIGHT)) 
        {
            position1.x += 10.0f;
            image1 = LoadImage("Pictures/avion1_droite.png");
            texture1 = LoadTextureFromImage(image1);
            UnloadImage(image1);
        }
        else if (IsKeyPressed(KEY_LEFT)) {
            position1.x -= 10.0f;
            image1 = LoadImage("Pictures/avion1_gauche.png");
            texture1 = LoadTextureFromImage(image1);
            UnloadImage(image1);
        }  

        else if (IsKeyPressed(KEY_UP)) {
            position1.y -= 10.0f;
            image1 = LoadImage("Pictures/avion1_haut.png");
            texture1 = LoadTextureFromImage(image1);
            UnloadImage(image1);
        }
        else if (IsKeyPressed(KEY_DOWN)) {
            position1.y += 10.0f;
            image1 = LoadImage("Pictures/avion1_bas.png");
            texture1 = LoadTextureFromImage(image1);
            UnloadImage(image1);
        } 


        if (IsKeyPressed(KEY_B))
        {
            position2.x += 10.0f;
            image2 = LoadImage("Pictures/avion2_droite.png");
            texture2 = LoadTextureFromImage(image2);
            UnloadImage(image2);
        }
        else if (IsKeyPressed(KEY_C)) {
            position2.x -= 10.0f;
            image2 = LoadImage("Pictures/avion2_gauche.png");
            texture2 = LoadTextureFromImage(image2);
            UnloadImage(image2);
        }

        else if (IsKeyPressed(KEY_F)) {
            position2.y -= 10.0f;
            image2 = LoadImage("Pictures/avion2_haut.png");
            texture2 = LoadTextureFromImage(image2);
            UnloadImage(image2);
        }
        else if (IsKeyPressed(KEY_V)) {
            position2.y += 10.0f;
            image2 = LoadImage("Pictures/avion2_bas.png");
            texture2 = LoadTextureFromImage(image2);
            UnloadImage(image2);
        }
        // Draw
        
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTextureV(texture1, position1, WHITE);
        DrawTextureV(texture2, position2, WHITE);
        //DrawText("this IS a texture loaded from an image!", 300, 370, 10, GRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadTexture(texture1);  
    UnloadTexture(texture2);// Texture unloading

    CloseWindow();                // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}