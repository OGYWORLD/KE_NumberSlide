#include "Print.h"

Print::Print()
{
}

Print::~Print()
{
	delete to;
	delete input;
	delete player;
}

int Print::PrintIntroScene()
{
	PrintIntroLogo();
	PrintIntroBox();
	PrintTwinkle();

	player->SetGameMode(input->IntroBoxSelect());
	if (player->GetGameMode() == EGAME_MODE::ORIGINAL)
	{
		return EGAME_MODE::ORIGINAL;
	}
	else if (player->GetGameMode() == EGAME_MODE::PERSONAL)
	{
		return EGAME_MODE::PERSONAL;
	}

}

void Print::PrintIntroLogo()
{
	PrintRainBowLine(INTRO_LOGO_X, INTRO_LOGO_Y, 59);
	PrintRainBowLine(INTRO_LOGO_X, INTRO_LOGO_Y + 9, 59);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y + 1);
	printf(" _______   ______    _______   _______   _______   _______ \n");
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y + 2);
	printf("`._   __| /_____ `. `._   __| |       | | ._ _. | / ___  _|\n");
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y + 3);
	printf(" _`. `._   _____\\ |  _<  <__  | o v o | | \\ v / | | \\_/  \ \n");
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y + 4);
	printf("|_______| \\______.` /_______| '._.'._.' |_/   \\_| `.__.`\\_|\n");
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y + 5);
	printf("      __   _______   _     _   _______   _______           \n");
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y + 6);
	printf(" .-. \\  \\ /______ \\ | |___| | |  ___  | | ._ _. |          \n");
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y + 7);
	printf("/ _ \\_\\ |       / | |  ___  | | '._.' | | \\ v / |          \n");
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y + 8);
	printf("|_\\`.___/       \\_| |_|   |_| '._____.' |_/   \\_|          \n");
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y + 10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	printf("★ ナンバ-スライド: Number Slide ★");
}

void Print::PrintTwinkle()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

	int Random1 = rand() % TWINKLE_RANGE;
	int Random2 = rand() % TWINKLE_RANGE;
	int Random3 = rand() % TWINKLE_RANGE;
	int Random4 = rand() % TWINKLE_RANGE;
	to->GoToXYPosition(TWINKLE_QUADRANT_1_X + Random1, TWINKLE_QUADRANT_1_Y + Random1);
	printf("★");

	to->GoToXYPosition(TWINKLE_QUADRANT_2_X + Random2, TWINKLE_QUADRANT_2_Y + Random2);
	printf("★");

	to->GoToXYPosition(TWINKLE_QUADRANT_3_X + Random3, TWINKLE_QUADRANT_3_Y + Random3);
	printf("★");

	to->GoToXYPosition(TWINKLE_QUADRANT_4_X + Random4, TWINKLE_QUADRANT_4_Y + Random4);
	printf("★");

	to->GoToXYPosition(TWINKLE_QUADRANT_1_X + Random1 + 10, TWINKLE_QUADRANT_1_Y + Random1 + 10);
	printf("★");

	to->GoToXYPosition(TWINKLE_QUADRANT_2_X + Random2 + 3, TWINKLE_QUADRANT_2_Y + Random2 + 10);
	printf("★");

	to->GoToXYPosition(TWINKLE_QUADRANT_3_X + Random3 + 10, TWINKLE_QUADRANT_3_Y + Random3 + 3);
	printf("★");

	to->GoToXYPosition(TWINKLE_QUADRANT_4_X + Random4 + 3, TWINKLE_QUADRANT_4_Y + Random4 + 10);
	printf("★");

	/*
	Sleep(500);

	to->GoToXYPosition(TWINKLE_QUADRANT_1_X + Random1, TWINKLE_QUADRANT_1_Y + Random1);
	printf(" ");

	to->GoToXYPosition(TWINKLE_QUADRANT_2_X + Random2, TWINKLE_QUADRANT_2_Y + Random2);
	printf(" ");

	to->GoToXYPosition(TWINKLE_QUADRANT_3_X + Random3, TWINKLE_QUADRANT_3_Y + Random3);
	printf(" ");

	to->GoToXYPosition(TWINKLE_QUADRANT_4_X + Random4, TWINKLE_QUADRANT_4_Y + Random4);
	printf(" ");

	to->GoToXYPosition(TWINKLE_QUADRANT_1_X + Random1 + 10, TWINKLE_QUADRANT_1_Y + Random1 + 10);
	printf(" ");

	to->GoToXYPosition(TWINKLE_QUADRANT_2_X + Random2 + 3, TWINKLE_QUADRANT_2_Y + Random2 + 10);
	printf(" ");

	to->GoToXYPosition(TWINKLE_QUADRANT_3_X + Random3 + 10, TWINKLE_QUADRANT_3_Y + Random3 + 3);
	printf(" ");

	to->GoToXYPosition(TWINKLE_QUADRANT_4_X + Random4 + 3, TWINKLE_QUADRANT_4_Y + Random4 + 10);
	printf(" ");
	*/
}

void Print::PrintIntroBox()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	to->GoToXYPosition(INTRO_TEXTBOX_X, INTRO_TEXTBOX_Y);
	printf("┌────────────────────────────────┐");
	to->GoToXYPosition(INTRO_TEXTBOX_X, INTRO_TEXTBOX_Y + 1);
	printf("│      オリジナルモ-ド(5x4)      │");
	to->GoToXYPosition(INTRO_TEXTBOX_X, INTRO_TEXTBOX_Y + 2);
	printf("│                                │");
	to->GoToXYPosition(INTRO_TEXTBOX_X, INTRO_TEXTBOX_Y + 3);
	printf("│         パ-ソナルモ-ド         │");
	to->GoToXYPosition(INTRO_TEXTBOX_X, INTRO_TEXTBOX_Y + 4);
	printf("└────────────────────────────────┘");
}

void Print::PrintRainBowLine(int x, int y, int LineNum)
{
	for (int i = 0; i < LineNum; i++)
	{
		int Random = rand() % 15 + 1;

		to->GoToXYPosition(x+i, y);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Random);
		printf("=");
		Sleep(5);
	}
}

void Print::PrintPersonalMode()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y+5);
	printf("                                            ");
	to->GoToXYPosition(INTRO_LOGO_X, INTRO_LOGO_Y + 5);
	printf("どんなサイズにしたい？: ");
}

void Print::PrintPuzzle(int col, int row, int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

	int jJump = 0;
	int iJump = 0;
	for (int i = 0; i < VNum; i++, iJump += 2)
	{
		for (int j = 0; j < HNum; j++, jJump += 8)
		{
			to->GoToXYPosition(GAME_CUR_TRIAL_X + 8 + jJump, GAME_CUR_TRIAL_Y + 4 + iJump);

			if (NumberPuzzle[i][j] == VNum * HNum)
			{
				printf("★");
			}
			else
			{
				printf("%d", NumberPuzzle[i][j]);
			}
		}
		printf("\n\n");
		jJump = 0;
	}
}

void Print::PrintCurrentTrial()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	to->GoToXYPosition(GAME_CUR_TRIAL_X, GAME_CUR_TRIAL_Y);
	printf("┌───────────────────────────────────────┐\n");
	to->GoToXYPosition(GAME_CUR_TRIAL_X, GAME_CUR_TRIAL_Y+1);
	printf("│   ★  げんざいのしこうかいすう: %d  ★   │", player->GetTurnNum()+1);
	to->GoToXYPosition(GAME_CUR_TRIAL_X, GAME_CUR_TRIAL_Y + 2);
	printf("└───────────────────────────────────────┘");
}

void Print::PrintInGameBox()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	to->GoToXYPosition(GAME_TEXTBOX_X, GAME_TEXTBOX_Y);
	printf("┌───────────────────────────────────────────────────┐\n");
	to->GoToXYPosition(GAME_TEXTBOX_X, GAME_TEXTBOX_Y + 1);
	printf("│     すうじ ★ スワップ! :                          │");

	to->GoToXYPosition(GAME_TEXTBOX_X, GAME_TEXTBOX_Y + 2);
	printf("└───────────────────────────────────────────────────┘");
}

void Print::PrintInGame(int col, int row)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	int N;
	MakePuzzleTable(col, row);

	while (1)
	{
		system("cls");
		PrintPuzzle(col, row, 15);
		PrintCurrentTrial();
		PrintInGameBox();

		if (SortCheck() == 1)
		{
			for (int i = 0; i < 4; i++)
			{
				system("cls");
				PrintPuzzle(col, row, 11);
				Sleep(100);
			}
			system("cls");
			Sleep(1000);

			PrintTwinkle();
			to->GoToXYPosition(INTRO_LOGO_X + 15, INTRO_LOGO_Y + 5);
			printf("★  CLEAR！おめでとう！ ★");
			Sleep(2000);
			to->GoToXYPosition(INTRO_LOGO_X + 15, INTRO_LOGO_Y + 18);

			break;
		}

		to->GoToXYPosition(GAME_TEXTBOX_X + 30, GAME_TEXTBOX_Y + 1);
		std::cin >> N;

		if (N == -1)
		{
			PuzzleSort();
		}
		else if (N < 0 || N > this->HNum * this->VNum)
		{
			continue;
		}
		else
		{
			int ChangeDirection = NearCheck(N, col * row);

			if (ChangeDirection == -1)
			{
				continue;
			}
			else
			{
				PrintChangeNum(N, col * row, ChangeDirection);

			}
		}

		player->SetTurnNum(player->GetTurnNum() + 1);
	}
}

void Print::PrintChangeNum(int n1, int n2, int ChangeDirection)
{
	int temp;
	int n1X, n1Y, n2X, n2Y;

	n1X = NumberPosition[n1].first;
	n1Y = NumberPosition[n1].second;

	n2X = NumberPosition[n2].first;
	n2Y = NumberPosition[n2].second;

	// Value Change
	temp = NumberPuzzle[n1X][n1Y];
	NumberPuzzle[n1X][n1Y] = NumberPuzzle[n2X][n2Y];
	NumberPuzzle[n2X][n2Y] = temp;

	// Position Change
	NumberPosition[n1].first = n2X;
	NumberPosition[n1].second = n2Y;

	NumberPosition[n2].first = n1X;
	NumberPosition[n2].second = n1Y;

	// 별 기준 상: 1(-2), 하: 0(2), 좌: 3(-8), 우: 2(8)

	// Display Change
	int N1X = DisplayPosition[n1].first;
	int N1Y = DisplayPosition[n1].second;
	int N2X = DisplayPosition[n2].first;
	int N2Y = DisplayPosition[n2].second;

	if (ChangeDirection == 0)
	{
		for (int i = 1; i < 2; i++)
		{
			to->GoToXYPosition(DisplayPosition[n1].first, DisplayPosition[n1].second);
			printf("  ");
			to->GoToXYPosition(DisplayPosition[n1].first, DisplayPosition[n1].second - i);
			printf("%d", n1);
			DisplayPosition[n1].second = DisplayPosition[n1].second - i;

			to->GoToXYPosition(DisplayPosition[n2].first, DisplayPosition[n2].second);
			printf("  ");
			to->GoToXYPosition(DisplayPosition[n2].first, DisplayPosition[n2].second + i);
			printf("★");
			DisplayPosition[n2].second = DisplayPosition[n2].second + i;
			
			Sleep(500);
		}
	}
	else if (ChangeDirection == 1)
	{
		for (int i = 1; i < 2; i++)
		{
			to->GoToXYPosition(DisplayPosition[n1].first, DisplayPosition[n1].second);
			printf("  ");
			to->GoToXYPosition(DisplayPosition[n1].first, DisplayPosition[n1].second + i);
			printf("%d", n1);
			DisplayPosition[n1].second = DisplayPosition[n1].second + i;

			to->GoToXYPosition(DisplayPosition[n2].first, DisplayPosition[n2].second);
			printf("  ");
			to->GoToXYPosition(DisplayPosition[n2].first, DisplayPosition[n2].second - i);
			printf("★");
			DisplayPosition[n2].second = DisplayPosition[n2].second - i;

			Sleep(500);
		}
	}
	else if (ChangeDirection == 2)
	{
		for (int i = 1; i < 4; i++)
		{
			to->GoToXYPosition(DisplayPosition[n2].first, DisplayPosition[n2].second);
			printf(" ");
			to->GoToXYPosition(DisplayPosition[n2].first + i, DisplayPosition[n2].second);
			printf("★");

			DisplayPosition[n2].first = DisplayPosition[n2].first + i;
			to->GoToXYPosition(DisplayPosition[n1].first, DisplayPosition[n1].second);
			printf("  ");
			to->GoToXYPosition(DisplayPosition[n1].first - i, DisplayPosition[n1].second);
			printf("%d", n1);
			DisplayPosition[n1].first = DisplayPosition[n1].first - i;

			Sleep(200);
		}
	}
	else if (ChangeDirection == 3)
	{
		for (int i = 1; i < 4; i++)
		{
			to->GoToXYPosition(DisplayPosition[n1].first, DisplayPosition[n1].second);
			printf("  ");
			to->GoToXYPosition(DisplayPosition[n1].first + i, DisplayPosition[n1].second);
			printf("%d", n1);
			DisplayPosition[n1].first = DisplayPosition[n1].first + i;

			to->GoToXYPosition(DisplayPosition[n2].first, DisplayPosition[n2].second);
			printf(" ");
			to->GoToXYPosition(DisplayPosition[n2].first - i, DisplayPosition[n2].second);
			printf("★");
			DisplayPosition[n2].first = DisplayPosition[n2].first - i;

			Sleep(200);
		}
	}

	// DisPlay Position Change
	DisplayPosition[n1].first = N2X;
	DisplayPosition[n1].second = N2Y;

	DisplayPosition[n2].first = N1X;
	DisplayPosition[n2].second = N1Y;
}


