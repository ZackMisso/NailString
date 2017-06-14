#pragma once

class StringPart
{
private:
    int startNail;
    int endNail;
    int endSide;

public:
    StringPart();
    StringPart(int sn, int en, int es);

    // getter methods
    int getStartNail();
    int getEndNail();
    int getEndSide();

    // setter methods
    void setStartNail(int param);
    void setEndNail(int param);
    void setEndSide(int param);
};
