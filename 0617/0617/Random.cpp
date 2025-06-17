#include "Random.h"

#include <stdlib.h>
#include <time.h>

Random::Random()
{
	/// 시드 초기화
	srand(time(NULL));
}

int Random::GetRamdom(int scope)
{
	return rand() % scope;
}
