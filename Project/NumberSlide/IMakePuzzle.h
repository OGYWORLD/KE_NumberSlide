#pragma once

__interface MakePuzzle
{
	virtual void MakePuzzleTable(int col, int row) = 0;
	virtual int NearCheck(int n1, int n2) = 0;
	virtual void PuzzleSort() = 0;
	virtual int SortCheck() = 0;
};

