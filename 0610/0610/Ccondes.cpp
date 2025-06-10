#include "Ccondes.h"

void Ccondes::init_setting()
{
	m_attack = 3;
	m_defence = 5;
	m_skin = 1;
}

Ccondes::Ccondes() : m_value(3)
/// 생성자의 선처리 영역 : 생성자의 ')'와 '{' 사이
{
	init_setting();
	printf("인수 없는 생성자가 호출되었습니다.\n");
}

Ccondes::Ccondes(int x) : m_value(x)
{
	init_setting();
	printf("int 생성자가 호출되었습니다.\n");
}

Ccondes::Ccondes(char c) : m_value(55)
{
	init_setting();
	printf("char 생성자가 호출되었습니다.\n");
}

Ccondes::Ccondes(int x, int y) : m_value(x + y)
{
	init_setting();
	printf("int, int 생성자가 호출되었습니다.\n");
}

/// 복사 생성자
/// 새로운 객체 생성 시, 원래 존재하는 객체의 정보를 활용하여 객체를 초기화
/// 인수 : const(수정 X), Ccondes(나와 동일한 클래스)&(참조) 변수명
Ccondes::Ccondes(const Ccondes& obj) : m_value(99)
{
	this->m_skin = obj.m_skin;
	this->m_attack = obj.m_attack / 30;
	this->m_defence = obj.m_defence / 30;
}

/// 소멸자
Ccondes::~Ccondes()
{
	printf("소멸자가 호출되었습니다.\n");
}
/// 후처리 영역
