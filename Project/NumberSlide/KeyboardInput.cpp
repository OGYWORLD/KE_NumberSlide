#include "KeyboardInput.h"

KeyboardInput::KeyboardInput()
{
}

KeyboardInput::~KeyboardInput()
{
	delete to;
}

void KeyboardInput::CleanInputBuffer()
{
	while (_kbhit())
	{
		_getch();
	}
}

int KeyboardInput::IntroBoxSelect()
{
	int y = 0;
	int nKey = 0;

	while (1)
	{
		to->GoToXYPosition(INTRO_SELECT_X, INTRO_SELECT_Y + y);
		printf("▶");
		Sleep(500);

		to->GoToXYPosition(INTRO_SELECT_X, INTRO_SELECT_Y + y);
		printf(" ");
		Sleep(500);

		if (_kbhit())
		{
			nKey = _getch();
			if (nKey == EKEYBOARD_NUM::SPACE)
			{
				to->GoToXYPosition(INTRO_SELECT_X, INTRO_SELECT_Y + 9);
				break;
			}
			else if (nKey == EKEYBOARD_NUM::DIRECTION)
			{
				nKey = _getch();
				if (nKey == EKEYBOARD_NUM::KEY_UP)
				{
					y = 0;

				}
				else if (nKey == EKEYBOARD_NUM::KEY_DOWN)
				{
					y = 2;
				}
			}

			CleanInputBuffer();
		}
	}

	return y;

}
