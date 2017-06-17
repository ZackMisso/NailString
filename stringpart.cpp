#include "stringpart.h"

StringPart::StringPart() : startNail(-1), endNail(-1), endSide(-1)
{
}

StringPart::StringPart(int sn, int en, int es) : startNail(sn), endNail(en), endSide(es)
{
}

int StringPart::getStartNail() { return startNail; }
int StringPart::getEndNail() { return endNail; }
int StringPart::getEndSide() { return endSide; }

void StringPart::setStartNail(int param) { startNail = param; }
void StringPart::setEndNail(int param) { endNail = param; }
void StringPart::setEndSide(int param) { endSide = param; }
