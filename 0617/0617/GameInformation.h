#pragma once
class GameInformation
{
public:
	GameInformation();
	void userWin();
	void comWin();
	void allDraw();
	void printGame();
private:
	int m_userWin;
	int m_comWin;
	int m_Draw;
};

