#include "GamePlay.h"

int main()
{
	system("mode con cols=150 lines = 40 | title ★ナンバ-スライド★");
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	GamePlay* NumberSlide = new GamePlay;
	NumberSlide->NumberSlidePlay();

	delete NumberSlide;

	return 0;
}