#include "Cthis.h"
#include <stdio.h>

/// 클래스의 구현체에서는 어떤 멤버 변수/함수인지
/// 범위 지정 연산자로 직접 알려줘야 한다.

/// 알려줘야 하는 내용 : 어떤 클래스의 멤버 인지
/// 반환값 클래스이름::메서드이름( 인수 )
void Cthis::setX(int x)
{
	/// this : 인스턴스 자신을 가리키는 포인터
	/// this의 유효 범위 : 클래스 내부에서만 유효!
	this->x = x;
}

int Cthis::getX()
{
	this->x;		/// 일반 멤버 함수에서는 this 사용 가능
	return x;
}

/// 정적 멤버 변수의 초기화 : 반드시 클래스 외부에서 초기화!
int Cthis::s_x = 10;

void Cthis::printX()
{
	/// 정적 멤버 함수 안에서는 정적 멤버 변수만 사용 가능
	/// 내부에서 선언된 변수는 당연히 사용 가능
	/// 일반 멤버 변수는 사용할 수 없다!!!!!!!!
	int a = 33;
	int b = 77;
	int c = a + b;
	/// 지역 변수와 정적 멤버 변수 값을 출력!
	printf("X: %d : %d\n", c, s_x);

	/// this-> : 정적 멤버 함수에서는 this 사용 불가능!!!
	/// this는 클래스가 인스턴스화 된 다음에 사용 가능!!!
}


/// 함수의 상수화 시에는 인수 뒤에 const를 반드시 표기!!!
void Cthis::getMyValue() const
{
	int a = 10;
	int b = 100;
	int c = a + b;
	c++;

	/// 아래 연산은 허용되지 않음!!!!
	/// const 멤버 함수 내부에서는 멤버 변경이 불가능!!!
	/*
	x++;
	x = c;
	*/
}