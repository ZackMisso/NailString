#pragma once

class Nail
{
private:
    float xpos;
    float ypos;

public:
    Nail();
    Nail(float x, float y);

    // getter methods
    float getXpos();
    float getYpos();

    // setter methods
    void setXpos(float param);
    void setYpos(float param);
};
