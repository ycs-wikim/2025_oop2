#pragma once

#include <iostream>

class Ccondes
{
	void init_setting();	/// 캐릭터 초기 설정 함수
public:
	int m_skin;				/// 스킨
	int m_attack;			/// 공격력
	int m_defence;			/// 방어력

	const int m_value;

	/// 생성자
	Ccondes();
	Ccondes(int x);
	Ccondes(char c);
	Ccondes(int x, int y);
	/// 복사 생성자
	Ccondes(const Ccondes& obj);

	/// 소멸자
	~Ccondes();
};

