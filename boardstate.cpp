#include "boardstate.h"

BoardState::BoardState()
{
    // TODO
}

BoardState::~BoardState()
{
    // TODO
}

void BoardState::render()
{
    // TODO
}

bool BoardState::addNail(float xpos, float ypos)
{
    // TODO
    return false;
}

bool BoardState::addStringPart(int nailIndOne, int nailIndTwo, int endSide)
{
    // TODO
    return false;
}

bool BoardState::removeNail(int index)
{
    // TODO
    return false;
}

bool BoardState::removeStringPart(int index)
{
    // TODO
    return false;
}

void BoardState::printNails()
{
    // TODO
}

void BoardState::printStringParts()
{
    // TODO
}

void BoardState::clearAll()
{
    // TODO
}

void BoardState::setNailWidth(float param) { nailWidth = param; }
void BoardState::setStringWidth(float param) { stringWidth = param; }
