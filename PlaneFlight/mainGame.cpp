#include "raylib.h"
#include "Avion.h"
#include "AvionDeChasse.h"
#include "AvionEnnemi.h"
#include "Jeu.h"
#include "Bouclier.h"
#include "Helicoptere.h"
#include "Projectile.h"
#include "raymath.h" 
#include "Missile.h"
#include <iostream>

// Required for: MatrixRotateXYZ()

int main(void)
{
    // Initialization
  //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "PlaneFight");


    Vector2 position1 = { 550.0f, 250.0f };
    Vector2 position2 = { 0.0f, 100.0f };
    Vector2 position3 = { 10.0f, 40.0f };

    AvionDeChasse *adc1 = new AvionDeChasse(position1,100);
    AvionEnnemi* ae1 = new AvionEnnemi(position2,100, 2);
    Projectile* p1 = new Missile(1, position1);
    Projectile* p2 = new Missile(1, position2);
   
    Texture2D background = LoadTexture("Pictures/nuage.png");


    float scrollingBack = 0.0f;

    SetTargetFPS(60);     

    while (!WindowShouldClose())    
    {
      
        scrollingBack -= 0.5f;

        if (scrollingBack <= -background.width * 2) scrollingBack = 0;

        
        adc1->virtualize();
        ae1->virtualize();
        p1->virtualize();
        p2->virtualize();

        adc1->update();
        ae1->update();
        p1->update();
        p2->update();

        BeginDrawing();

        ClearBackground(DARKBLUE);

        bool visible = false;
        

        if (IsKeyPressed(KEY_SPACE) && ae1->getDroite() == true) {
            Projectile* m2 = new Missile(1, { ae1->getMyPos().x + 160.0f,ae1->getMyPos().y + 10.0f });
            m2->setMyImage(LoadImage("Pictures/Bomb_droite.png"));
            m2->setMyTexture(LoadTextureFromImage(m2->getMyImage()));
            m2->setIsVisible(true);
            m2->virtualize();
            m2->update();
            DrawTextureV(m2->getMyTexture(), { ae1->getMyPos().x + 160.0f,ae1->getMyPos().y + 10.0f }, WHITE);
        }
        else if (IsKeyPressed(KEY_SPACE) && ae1->getGauche() == true) {
            Projectile* m2 = new Missile(1, { ae1->getMyPos().x + 20.0f,ae1->getMyPos().y + 5.0f });
            m2->setMyImage(LoadImage("Pictures/Bomb_gauche.png"));
            m2->setMyTexture(LoadTextureFromImage(m2->getMyImage()));
            m2->setIsVisible(true);
            m2->virtualize();
            m2->update();
            DrawTextureV(m2->getMyTexture(), { ae1->getMyPos().x + 20.0f,ae1->getMyPos().y + 5.0f }, WHITE);

        }
        if (IsKeyPressed(KEY_SPACE) && ae1->getHaut() == true) {
            Projectile* m2 = new Missile(1, { ae1->getMyPos().x + 120.0f,ae1->getMyPos().y + 5.0f });
            m2->setMyImage(LoadImage("Pictures/Bomb_haut.png"));
            m2->setMyTexture(LoadTextureFromImage(m2->getMyImage()));
            m2->setIsVisible(true);
            m2->virtualize();
            m2->update();
            DrawTextureV(m2->getMyTexture(), { ae1->getMyPos().x + 120.0f,ae1->getMyPos().y + 5.0f }, WHITE);
        }

        if (IsKeyPressed(KEY_SPACE) && ae1->getBas() == true) {
            Projectile* m2 = new Missile(1, { ae1->getMyPos().x + 120.0f,ae1->getMyPos().y + 5.0f });
            m2->setMyImage(LoadImage("Pictures/Bomb_bas.png"));
            m2->setMyTexture(LoadTextureFromImage(m2->getMyImage()));
            m2->setIsVisible(true);
            m2->virtualize();
            m2->update();
            DrawTextureV(m2->getMyTexture(), { ae1->getMyPos().x + 120.0f,ae1->getMyPos().y + 5.0f }, WHITE);
        }





        if (IsKeyPressed(KEY_SPACE) && adc1->getDroite() == true) {
            Projectile* m2 = new Missile(1, { adc1->getMyPos().x + 160.0f,adc1->getMyPos().y + 10.0f });
            m2->setMyImage(LoadImage("Pictures/Bomb_droite.png"));
            m2->setMyTexture(LoadTextureFromImage(m2->getMyImage()));
            m2->setIsVisible(true);
            m2->virtualize();
            m2->update();
            DrawTextureV(m2->getMyTexture(), { adc1->getMyPos().x + 160.0f,adc1->getMyPos().y + 10.0f }, WHITE);
        }
        else if (IsKeyPressed(KEY_SPACE) && adc1->getGauche() == true) {
            Projectile* m2 = new Missile(1, { adc1->getMyPos().x + 20.0f,adc1->getMyPos().y + 5.0f });
            m2->setMyImage(LoadImage("Pictures/Bomb_gauche.png"));
            m2->setMyTexture(LoadTextureFromImage(m2->getMyImage()));
            m2->setIsVisible(true);
            m2->virtualize();
            m2->update();
            DrawTextureV(m2->getMyTexture(), { adc1->getMyPos().x + 20.0f,adc1->getMyPos().y + 5.0f }, WHITE);

        }
        if (IsKeyPressed(KEY_SPACE) && adc1->getHaut() == true) {
            Projectile* m2 = new Missile(1, { adc1->getMyPos().x + 120.0f,adc1->getMyPos().y + 5.0f });
            m2->setMyImage(LoadImage("Pictures/Bomb_haut.png"));
            m2->setMyTexture(LoadTextureFromImage(m2->getMyImage()));
            m2->setIsVisible(true);
            m2->virtualize();
            m2->update();
            DrawTextureV(m2->getMyTexture(), { adc1->getMyPos().x + 120.0f,adc1->getMyPos().y + 5.0f }, WHITE);
        }

        if (IsKeyPressed(KEY_SPACE) && adc1->getBas() == true) {
            Projectile* m2 = new Missile(1, { adc1->getMyPos().x + 120.0f,adc1->getMyPos().y + 15.0f });
            m2->setMyImage(LoadImage("Pictures/Bomb_bas.png"));
            m2->setMyTexture(LoadTextureFromImage(m2->getMyImage()));
            m2->setIsVisible(true);
            m2->virtualize();
            m2->update();
            DrawTextureV(m2->getMyTexture(), { adc1->getMyPos().x + 120.0f,adc1->getMyPos().y + 15.0f }, WHITE);
        }

        DrawTextureV(adc1->getMyTexture(), adc1->getMyPos(), WHITE);
        DrawTextureV(ae1->getMyTexture(), ae1->getMyPos(), WHITE);
        DrawTextureV(p1->getMyTexture(), p1->getMyPos(), WHITE);
        DrawTextureV(p2->getMyTexture(), p2->getMyPos(), WHITE);


        DrawTextureEx(background, Vector2{ scrollingBack, 20 }, 0.0f, 2.0f, WHITE);
        DrawTextureEx(background, Vector2{ background.width * 2 + scrollingBack, 20 }, 0.0f, 2.0f, WHITE);

        EndDrawing();
        
    }

   
    CloseWindow();                
    return 0;
}