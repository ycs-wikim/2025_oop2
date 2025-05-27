#pragma once

/// 헤더 파일에서는 선언만!!!
/// 구현 파일에서는 구현만!!!

class Cthis
{
public:
	/// class를 이용한 객체지향 언어의 멤버 명명법
	/// m_변수명, m_함수명
	int x;			/// 멤버 변수 x를 선언
	static int s_x;	

	/// 멤버 함수 : 설정한다.
	void setX(int x);
	/// 멤버 함수 : 값을 반환한다.
	int getX();

	/// 함수 명명법 : get/set 메서드
	///  get 메서드 : 값을 반환한다.
	///  set 메서드 : 값을 설정한다.
	
	/// 정적 멤버 함수
	static void printX();

	/// 멤버 상수 선언 : const ==> 변수 상수화
	const int c_int = 100;

	/// 멤버 함수 선언 : const ==> 함수 상수화
	/// const는 void에 영향을 준다. 반환 값에 대해 적용
	/// 함수를 상수화 할때는 const가 가장 마지막에 붙는다.
	/// 함수의 상수화 : 모든 멤버 변수를 상수화 시켜서 동작
	void getMyValue() const;
	
};

