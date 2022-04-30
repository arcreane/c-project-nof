#include "raylib.h"
#include "Avion.h"
#include "AvionDeChasse.h"
#include "AvionEnnemi.h"
#include "Jeu.h"
#include "Bouclier.h"
#include "Helicoptere.h"
#include "Projectile.h"
#include "raymath.h"   
#include "Ciel.h"
#include "Nuage.h"
#include <iostream>

// Required for: MatrixRotateXYZ()

int main(void)
{
    // Initialization
  //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "PlaneFight");


    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)

    /*Image image1 = LoadImage("Pictures/avion1_droite.png");
    Image image2 = LoadImage("Pictures/avion2_gauche.png");
    // Loaded in CPU memory (RAM)
    Texture2D texture1 = LoadTextureFromImage(image1);   
    Texture2D texture2 = LoadTextureFromImage(image2);     // Image converted to texture, GPU memory (VRAM)
    UnloadImage(image1);   // Once image has been converted to texture and uploaded to VRAM, it can be unloaded from RAM
    UnloadImage(image2);
    */
    Vector2 position1 = { 550.0f, 250.0f };
    Vector2 position2 = { 0.0f, 100.0f };
    Vector2 position3 = { 10.0f, 40.0f };
    AvionDeChasse *adc1 = new AvionDeChasse(position1,100);
    AvionEnnemi* ae1 = new AvionEnnemi(position2,100, 2);
    Nuage* nuage = new Nuage(position3);
  

    Texture2D background = LoadTexture("Pictures/FOND-CIEL.png");


    float scrollingBack = 0.0f;
    SetTargetFPS(60);     // Set our game to run at 60 frames-per-second
    //---------------------------------------------------------------------------------------
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        
        scrollingBack -= 0.5f;

        if (scrollingBack <= -background.width * 2) scrollingBack = 0;
        
        adc1->virtualize();
        ae1->virtualize();
  

        adc1->update();
        ae1->update();

        BeginDrawing();

        ClearBackground(DARKBLUE);

        DrawTextureEx(background, Vector2 { scrollingBack, 20 }, 0.0f, 2.0f, WHITE);
        DrawTextureEx(background, Vector2 { background.width * 2 + scrollingBack, 20 }, 0.0f, 2.0f, WHITE);
    
   
        DrawTextureV(adc1->getMyTexture(), adc1->getMyPos(), WHITE);
        DrawTextureV(ae1->getMyTexture(), ae1->getMyPos(), WHITE);
        //DrawText("this IS a texture loaded from an image!", 300, 370, 10, GRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    /*UnloadTexture(texture1);
    UnloadTexture(texture2);// Texture unloading
    */

    UnloadTexture(background);


    CloseWindow();                // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}