#pragma once
class Player
{
private:
	int TurnNum;
	int GameMode;

public:
	Player();
	~Player();

	void SetTurnNum(int n)
	{
		this->TurnNum = n;
	}

	int GetTurnNum()
	{
		return this->TurnNum;
	}

	void SetGameMode(int n)
	{
		this->GameMode = n;
	}

	int GetGameMode()
	{
		return this->GameMode;
	}
};

