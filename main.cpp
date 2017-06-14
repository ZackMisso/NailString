#include <iostream>
#include <string>

#include "boardstate.h"

using namespace std;

void printHelp()
{
    cout << "Project By: Zack Misso" << endl;
    cout << "addn (xpos) (ypos) - adds a nail at the specified coordinates" << endl;
    cout << "adds (ind1) (ind2) (side) - adds a string part between the two nails ending on the specified side" << endl;
    cout << "pn - prints all existing nails" << endl;
    cout << "ps - prints all existing string parts" << endl;
    cout << "rn (index) - removes the nail at the specified index" << endl;
    cout << "rs (index) - removes the string part at the specified index" << endl;
    cout << "clear - removes all current string parts and nails" << endl;
    cout << "render - ends command input and renders out the state" << endl;
    cout << endl;
}

void addNail(BoardState* boardState)
{
    // TODO
}

void addStringPart(BoardState* boardState)
{
    // TODO
}

void printNails(BoardState* boardState)
{
    // TODO
}

void printStringParts(BoardState* boardState)
{
    // TODO
}

void removeNail(BoardState* boardState)
{
    // TODO
}

void removeStringPart(BoardState* boardState)
{
    // TODO
}

void clearState(BoardState* boardState)
{
    // TODO
}

int main(int argc, char* argv[])
{
    cout << "Initializing Command Line System" << endl;
    BoardState *boardState = new BoardState();
    bool cmdMode = true;
    while(cmdMode)
    {
        cout << "Enter Command. 'help' for full list of commands" << endl;
	string arg;
	cin >> arg;
	if (arg.equals("help")) printHelp();
	else if (arg.equals("addn")) addNail(boardState);
	else if (arg.equals("adds")) addStringPart(boardState);
	else if (arg.equals("pn")) printNails(boardState);
	else if (arg.equals("ps")) printStringParts(boardState);
	else if (arg.equals("rn")) removeNail(boardState);
	else if (arg.equals("rs")) removeStringPart(boardState);
	else if (arg.equals("clear")) clearState(boardState);
	else if (arg.equals("render")) cmdMode = false;
	else cout << "Invalid Command." << endl;
	cmdMode = false;
    }
    cout << "Rendering The Board" << endl;
    boardState->render();
    cout << "Cleaning Up" << endl;
    delete boardState();
    cout << "Shutting Down Simulation" << endl;
}
