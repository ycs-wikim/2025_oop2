#include "GameInformation.h"
#include <iostream>


GameInformation::GameInformation()
{
	m_userWin = 0;
	m_comWin = 0;
	m_Draw = 0;
}

void GameInformation::userWin()
{
	m_userWin++;
}


void GameInformation::comWin()
{
	m_comWin++;
}


void GameInformation::allDraw()
{
	m_Draw++;
}

void GameInformation::printGame()
{
	printf("ÀüÃ¼[ %d ] : »ç¶÷[ %d ] ÄÄÇ»ÅÍ[ %d ] ºñ±è[ %d ]\n",
		m_userWin + m_comWin + m_Draw,
		m_userWin, m_comWin, m_Draw);
	printf("³ªÀÇ ½Â·ü: %.2f %%\n",
		(float)m_userWin / (m_userWin + m_comWin + m_Draw) * 100);
}