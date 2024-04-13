#pragma once
#include "IMakePuzzle.h"
#include "PositionNum.h"
#include <iostream>
#include <time.h>
#include <vector>

class Puzzle : public MakePuzzle
{
protected:
	int VNum;
	int HNum;
	std::vector<std::vector<int>> NumberPuzzle;
	std::vector<std::pair<int, int>> NumberPosition;
	std::vector<std::pair<int, int>> DisplayPosition;
	

public:
	Puzzle();
	~Puzzle();
};

