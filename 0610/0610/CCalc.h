#pragma once

class CCalc
{
public:
	int m_value;

	/// �����ڰ� ����� ��ü�� ��� ������ ��ü�� �ȴ�.
	/// �ڿ� �����ڰ� operator �������� ����, �ڿ� ���� �����ڸ� ���δ�.

	/// ��ü�� ������ �Լ�
	int operator + (int arg);
	CCalc operator + (CCalc arg);
	CCalc operator - (CCalc arg) {}
	CCalc operator * (CCalc arg) {}
	CCalc operator / (CCalc arg) {}
	CCalc operator ^ (CCalc arg) {}
	CCalc operator % (CCalc arg) {}


	/// ��ü�� ������ ��� �����ϵ��� ���� ���̳�!
	/// ��ȯ�� ������ OPERATOR(ARG_LIST)
	/// a = b + 2;
	/// b : ������ �켱 ��ü
	/// + : ������
	/// 2 : ARG_LIST
};


