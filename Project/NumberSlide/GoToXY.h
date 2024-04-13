#pragma once
#include <Windows.h>
#include <conio.h>
#include "PositionNum.h"

class GoToXY
{
private:

public:
	GoToXY();
	~GoToXY();

	void GoToXYPosition(int x, int y);
};