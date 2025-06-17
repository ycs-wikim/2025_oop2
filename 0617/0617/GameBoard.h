#pragma once

class GameBoard
{
protected:
	/// 게임의 승패를 결정
	int m_board[3][3];
public:
	GameBoard();
	int GetGameResult(int user, int com);
};

