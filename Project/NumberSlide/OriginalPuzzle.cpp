#include "OriginalPuzzle.h"

OriginalPuzzle::OriginalPuzzle()
{
}

OriginalPuzzle::~OriginalPuzzle()
{
}

void OriginalPuzzle::MakePuzzleTable(int col, int row)
{
	this->VNum = col;
	this->HNum = row;

	int TotalCardNum = VNum * HNum;

	std::vector<int> isAlreadyPick(TotalCardNum+1, 0);

	NumberPuzzle.resize(VNum);
	NumberPosition.resize(TotalCardNum + 1);
	DisplayPosition.resize(TotalCardNum + 1);

	for (int i = 0; i < VNum; i++)
	{
		for (int j = 0; j < HNum; )
		{
			int Random = rand() % TotalCardNum + 1;

			if (isAlreadyPick[Random] == 0)
			{
				isAlreadyPick[Random] = 1;
				NumberPosition[Random].first = i;
				NumberPosition[Random].second = j;

				NumberPuzzle[i].push_back(Random);

				j++;
			}
			else
			{
				continue;
			}
		}
	}

	int jJump = 0;
	int iJump = 0;
	for (int i = 0; i < VNum; i++, iJump += 2)
	{
		for (int j = 0; j < HNum; j++, jJump += 8)
		{
			DisplayPosition[NumberPuzzle[i][j]].first = GAME_CUR_TRIAL_X + 8 + jJump;
			DisplayPosition[NumberPuzzle[i][j]].second = GAME_CUR_TRIAL_Y + 4 + iJump;
		}
		jJump = 0;
	}
}

int OriginalPuzzle::NearCheck(int n1, int n2)
{
	int x[4] = { -1, 1, 0, 0 };
	int y[4] = { 0, 0, -1, 1 };

	for (int i = 0; i < 4; i++)
	{

		if (NumberPosition[n1].first + x[i] == NumberPosition[n2].first && NumberPosition[n1].second + y[i] == NumberPosition[n2].second)
		{
			return i;
		}
		else
		{
			continue;
		}
	}
	return -1;
}

void OriginalPuzzle::PuzzleSort()
{
	int jJump = 0;
	int iJump = 0;
	for (int i = 0; i < VNum; i++, iJump += 2)
	{
		for (int j = 0; j < HNum; j++, jJump += 8)
		{
			NumberPuzzle[i][j] = i * HNum + j + 1;

			NumberPosition[NumberPuzzle[i][j]].first = i;
			NumberPosition[NumberPuzzle[i][j]].second = j;

			DisplayPosition[NumberPuzzle[i][j]].first = GAME_CUR_TRIAL_X + 8 + jJump;
			DisplayPosition[NumberPuzzle[i][j]].second = GAME_CUR_TRIAL_Y + 4 + iJump;
		}
		jJump = 0;
	}

	Swap(NumberPuzzle[VNum - 1][HNum - 2], NumberPuzzle[VNum - 1][HNum - 1]);

	Swap(NumberPosition[VNum * HNum - 1].first, NumberPosition[VNum * HNum].first);
	Swap(NumberPosition[VNum * HNum - 1].second, NumberPosition[VNum * HNum].second);

	Swap(DisplayPosition[VNum * HNum - 1].first, DisplayPosition[VNum * HNum].first);
	Swap(DisplayPosition[VNum * HNum - 1].second, DisplayPosition[VNum * HNum].second);



}

int OriginalPuzzle::SortCheck()
{
	for (int i = 0; i < VNum; i++)
	{
		for (int j = 0; j < HNum; j++)
		{
			if (NumberPuzzle[i][j] != i * HNum + j + 1)
			{
				return 0;
			}
		}
	}

	return 1;
}

void OriginalPuzzle::Swap(int& n1, int& n2)
{
	int temp;

	temp = n1;
	n1 = n2;
	n2 = temp;
}
