#include "Random.h"

#include <stdlib.h>
#include <time.h>

Random::Random()
{
	/// �õ� �ʱ�ȭ
	srand(time(NULL));
}

int Random::GetRamdom(int scope)
{
	return rand() % scope;
}
