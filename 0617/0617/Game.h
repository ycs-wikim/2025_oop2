#pragma once

#include "Random.h"
#include "GameBoard.h"
#include "GameInformation.h"


class Game : public GameBoard, public GameInformation
{
public:
	Game(){}
	int normalGame();
private:
	Random m_rnd;
};

