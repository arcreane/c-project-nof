#pragma once
#include <iostream>
#include <string>

class Univers{
    private:
    uint16_t x;
    uint16_t y;
    void image();
    void temps();

    public:
    Univers(uint16_t x,uint16_t y);
    virtual void setImage();
    virtual void setPosition();
    void getPosition();
};