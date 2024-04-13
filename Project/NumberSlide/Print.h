#pragma once
#include <iostream>
#include <time.h>
#include "GoToXY.h"
#include "KeyboardInput.h"
#include "Player.h"
#include "OriginalPuzzle.h"

class Print : OriginalPuzzle
{
private:
	GoToXY* to = new GoToXY;
	KeyboardInput* input = new KeyboardInput;
	Player* player = new Player;

public:
	Print();
	~Print();

	// Intro Scene
	int PrintIntroScene();
	void PrintIntroLogo();

	void PrintTwinkle();

	void PrintIntroBox();
	void PrintRainBowLine(int x, int y, int LineNum);

	// Personal Mode Scene
	void PrintPersonalMode();

	// Original Mode Scene
	void PrintPuzzle(int col, int row, int color);
	void PrintCurrentTrial();
	void PrintInGameBox();
	void PrintInGame(int col, int row);
	
	void PrintChangeNum(int n1, int n2, int ChangeDirection);



	
};

