#include "Avion.h"
#include <iostream>
#include <vector>
#include "raylib.h"


Avion::Avion(){}
Avion::~Avion(){}

// getters + setters 

int Avion::getPv(){
    return myPv;
};
void Avion::setPv(int i){
    myPv = i;
};