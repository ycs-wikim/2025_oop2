#pragma once

class CCalc
{
public:
	int m_value;

	/// 연산자가 적용된 객체인 경우 기준은 객체가 된다.
	/// 뒤에 연산자가 operator 형식으로 구성, 뒤에 실제 연산자를 붙인다.

	/// 객체의 연산자 함수
	int operator + (int arg);
	CCalc operator + (CCalc arg);
	CCalc operator - (CCalc arg) {}
	CCalc operator * (CCalc arg) {}
	CCalc operator / (CCalc arg) {}
	CCalc operator ^ (CCalc arg) {}
	CCalc operator % (CCalc arg) {}


	/// 객체의 연산을 어떻게 가능하도록 만들 것이냐!
	/// 반환값 연산자 OPERATOR(ARG_LIST)
	/// a = b + 2;
	/// b : 연산의 우선 주체
	/// + : 연산자
	/// 2 : ARG_LIST
};


