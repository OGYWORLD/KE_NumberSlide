#pragma once
#include "Puzzle.h"

class OriginalPuzzle : protected Puzzle
{
private:

public:
	OriginalPuzzle();
	~OriginalPuzzle();

	void SetVNum(int n)
	{
		this->VNum = n;
	}

	int GetVNum()
	{
		return this->VNum;
	}

	void SetHNum(int n)
	{
		this->HNum = n;
	}

	int GetHNum()
	{
		return this->HNum;
	}

	virtual void MakePuzzleTable(int col, int row);

	virtual int NearCheck(int n1, int n2);

	virtual void PuzzleSort();

	virtual int SortCheck();

	void Swap(int& n1, int& n2);

};

