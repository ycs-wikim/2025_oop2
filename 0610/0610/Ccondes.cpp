#include "Ccondes.h"

void Ccondes::init_setting()
{
	m_attack = 3;
	m_defence = 5;
	m_skin = 1;
}

Ccondes::Ccondes() : m_value(3)
/// �������� ��ó�� ���� : �������� ')'�� '{' ����
{
	init_setting();
	printf("�μ� ���� �����ڰ� ȣ��Ǿ����ϴ�.\n");
}

Ccondes::Ccondes(int x) : m_value(x)
{
	init_setting();
	printf("int �����ڰ� ȣ��Ǿ����ϴ�.\n");
}

Ccondes::Ccondes(char c) : m_value(55)
{
	init_setting();
	printf("char �����ڰ� ȣ��Ǿ����ϴ�.\n");
}

Ccondes::Ccondes(int x, int y) : m_value(x + y)
{
	init_setting();
	printf("int, int �����ڰ� ȣ��Ǿ����ϴ�.\n");
}

/// ���� ������
/// ���ο� ��ü ���� ��, ���� �����ϴ� ��ü�� ������ Ȱ���Ͽ� ��ü�� �ʱ�ȭ
/// �μ� : const(���� X), Ccondes(���� ������ Ŭ����)&(����) ������
Ccondes::Ccondes(const Ccondes& obj) : m_value(99)
{
	this->m_skin = obj.m_skin;
	this->m_attack = obj.m_attack / 30;
	this->m_defence = obj.m_defence / 30;
}

/// �Ҹ���
Ccondes::~Ccondes()
{
	printf("�Ҹ��ڰ� ȣ��Ǿ����ϴ�.\n");
}
/// ��ó�� ����
