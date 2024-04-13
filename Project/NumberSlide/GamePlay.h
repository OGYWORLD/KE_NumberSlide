#pragma once
#include "Print.h"
#include "OriginalPuzzle.h"

class GamePlay
{
private:
	Print* print = new Print;
	OriginalPuzzle* puzzle = new OriginalPuzzle;

public:
	GamePlay();
	~GamePlay();

	void NumberSlidePlay();

	void OriginalMode();
	void PersonalMode();
};

