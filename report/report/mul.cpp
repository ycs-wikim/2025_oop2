#include "add.h"
#include <iostream>

int mul(int x, int y)
{
	int sum = 0;		/// ���� ������� ���� ����
	int i = 0;			/// �ݺ��� ���� ����

	for (i = 0; i < y; i++)
	{
		/// x * y = x�� yȸ ��ŭ ���ؾ� �Ѵ�.
		/// ==> x + x + x + x + x === yȸ ��ŭ
		sum = add(sum, x);
	}
	printf("sum : %d\n", sum);
	return sum;
}