#ifndef GAMESYMBOLS_H
#define GAMESYMBOLS_H
#include <windows.h>

const int cMazeColumns = 30;
const int cMazeRows = 15;

const char cEmptySymbol = ' ';
const char cWallSymbol = 'X';
const char cCharacterSymbol = '@';
const char cExitSymbol = '#';
const char cKeySymbol = '?';

bool takeTheKey = false;

void setcur(int x, int y)//установка курсора на позицию  x y
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
};

#endif // GAMESYMBOLS_H
