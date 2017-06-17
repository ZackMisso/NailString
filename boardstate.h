#pragma once

#include <iostream>
#include <vector>
#include "nail.h"
#include "stringpart.h"

using namespace std;

class BoardState
{
private:
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
    bool removeNail(int index);
    bool removeStringPart(int index);
    void printNails();
    void printStringParts();
    void clearAll();

    // setter methods
    void setNailWidth(float param);
    void setStringWidth(float param);
};
