#pragma once

#include <iostream>

class Ccondes
{
	void init_setting();	/// ĳ���� �ʱ� ���� �Լ�
public:
	int m_skin;				/// ��Ų
	int m_attack;			/// ���ݷ�
	int m_defence;			/// ����

	const int m_value;

	/// ������
	Ccondes();
	Ccondes(int x);
	Ccondes(char c);
	Ccondes(int x, int y);
	/// ���� ������
	Ccondes(const Ccondes& obj);

	/// �Ҹ���
	~Ccondes();
};

