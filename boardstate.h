#pragma once

#include <iostream>

using namespace std;

class BoardState
{
privatE:
    vector<Nail*> nails;
    vector<StringPart*> stringParts;
    float nailWidth;
    float stringWidth;

public:
    BoardState();
    ~BoardState();

    void render();
    bool addNail(float xpos, float ypos);
    bool addStringPart(int nailIndOne, int nailIndTwo, int endSide);

    // setter methods
    void setNailWidth(float param);
    voit setStringWidth(float param);
};
