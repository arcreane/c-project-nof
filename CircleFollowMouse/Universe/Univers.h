#pragma once
#include <iostream>
#include <string>

class Univers{
    private:
        void image();
        void temps();

    public:
        virtual void setImage();
        virtual void setPosition();
        void getPosition();
};