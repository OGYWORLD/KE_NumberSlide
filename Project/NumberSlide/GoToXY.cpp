#include "GoToXY.h"

GoToXY::GoToXY()
{
}

GoToXY::~GoToXY()
{
}

void GoToXY::GoToXYPosition(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}