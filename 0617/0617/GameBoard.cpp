#include "GameBoard.h"


/// 0 : ¿Ã∞Â¥Ÿ.
/// 1 : ¡≥¥Ÿ.
/// 2 : ∫Ò∞Â¥Ÿ.
GameBoard::GameBoard()
{
	m_board[0][0] = 2;
	m_board[0][1] = 1;
	m_board[0][2] = 0;

	m_board[1][0] = 0;
	m_board[1][1] = 2;
	m_board[1][2] = 1;

	m_board[2][0] = 1;
	m_board[2][1] = 0;
	m_board[2][2] = 2;

}

int GameBoard::GetGameResult(int user, int com)
{
	return m_board[user][com];
}