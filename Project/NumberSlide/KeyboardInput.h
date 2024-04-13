#pragma once
#include "GoToXY.h"
#include "EKeboardNum.h";
#include <iostream>

class KeyboardInput
{
private:
	GoToXY* to = new GoToXY;

public:
	KeyboardInput();
	~KeyboardInput();

	void CleanInputBuffer();
	int IntroBoxSelect();

};

