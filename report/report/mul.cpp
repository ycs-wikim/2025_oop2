#include "add.h"
#include <iostream>

int mul(int x, int y)
{
	int sum = 0;		/// 더한 결과물을 누적 변수
	int i = 0;			/// 반복을 위한 변수

	for (i = 0; i < y; i++)
	{
		/// x * y = x를 y회 만큼 더해야 한다.
		/// ==> x + x + x + x + x === y회 만큼
		sum = add(sum, x);
	}
	printf("sum : %d\n", sum);
	return sum;
}