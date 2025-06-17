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
	printf("���[ %d ] ��ǻ��[ %d ] ���[ %d ]\n",
		m_userWin, m_comWin, m_Draw);
}