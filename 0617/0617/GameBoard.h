#pragma once

class GameBoard
{
private:
	/// ������ ���и� ����
	int m_board[3][3];
public:
	GameBoard();
	int GetGameResult(int user, int com);
};

