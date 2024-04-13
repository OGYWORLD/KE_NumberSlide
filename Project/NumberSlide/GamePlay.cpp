#include "GamePlay.h"

GamePlay::GamePlay()
{
}

GamePlay::~GamePlay()
{
	delete print;
	delete puzzle;
}

void GamePlay::NumberSlidePlay()
{
	int PlayMode = print->PrintIntroScene();
	if (PlayMode == EGAME_MODE::PERSONAL)
	{
		PersonalMode();
	}

	OriginalMode();

}

void GamePlay::OriginalMode()
{
	system("cls");
	print->PrintInGame(puzzle->GetVNum(), puzzle->GetHNum());

}

void GamePlay::PersonalMode()
{
	system("cls");

	int col, row;
	print->PrintRainBowLine(INTRO_LOGO_X - 5, INTRO_LOGO_Y, 70);
	print->PrintRainBowLine(INTRO_LOGO_X - 5, INTRO_LOGO_Y + 9, 70);

	while (1)
	{
		print->PrintPersonalMode();
		std::cin >> col >> row;

		if (col < 0 || col > 10 || row < 0 || row > 10)
		{
			continue;
		}
		else
		{
			break;
		}
	}

	puzzle->SetVNum(col);
	puzzle->SetHNum(row);
	system("cls");
}

