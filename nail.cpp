#include "nail.h"

Nail::Nail() : xpos(0.f), ypos(0.f)
{
}

Nail::Nail(float x, float y) : xpos(x), ypos(y)
{
}

float Nail::getXpos() { return xpos; }
float Nail::getYpos() { return ypos; }

void Nail::setXpos() { return xpos; }
void Nail::setYpos() { return ypos; }
