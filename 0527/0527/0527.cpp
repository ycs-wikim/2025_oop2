// 0527.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Cthis.h"

/*
static : 정적 Vs. 동적 (함수 내부의 변수)
 * C언어
    1. 변수에 사용 : 한번만 초기화되는 변수 == 전역 변수(Data 영역)
    2. 함수에 사용 : 구현된 파일 내부에서만 호출되는 함수

 * C++
    변수/함수에 사용 : 전역 변수와 전역 함수 형태로 사용 가능
*/


class asdf      /// 설계도 : 메모리 적재 X
{
public:
    int x;
    int x1;
    int x2;
    int x3;
    int x4;
    int x5;
    /// 정적 멤버 : 클래스의 인스턴스와 관계 없이 존재
    static int sta;     
};

int asdf::sta = 30;

int g_x = 3;
void x()
{
    int x;
    int g_x;
    g_x = 5;        /// 지역 변수 g_x
}
void y()
{
    int x;
    g_x = 10;
}

class CTest
{
public:
    int m_I = 1;                /// 일반 멤버 변수 초기화
    const int m_CI = 2;         /// 일반 멤버 상수 초기화
    static int s_I;             /// 정적 멤버 변수 선언
    static const int s_CI = 4;  /// 정적 상수 멤버 초기화

    double m_D = 1;             /// 일반 멤버 변수 초기화
    const double m_CD = 2.2;    /// 일반 멤버 상수 초기화
    static double s_D;          /// 정적 멤버 변수 선언
    static const double s_CD;   /// 정적 상수 멤버 선언
};

/// 클래스 외부 초기화
int CTest::s_I = 3;
double CTest::s_D = 3.3;
const double CTest::s_CD = 4.4;

int kikk = 3;


/// 클래스와 구조체의 메모리 구조는 동일하다.
/// 클래스의 멤버 함수들은 모두 Code(text)영역에 존재한다.
/// 프로그램 동작 시 스택(stack)에 포함되는 정보는
/// 오로지 멤버 변수만! 포함된다.


int main()
{
    /// asdf::x = 10;
    //asdf b;     /// 인스턴스화(객체)되어 메모리에 적재
    asdf::sta = 10;

    /// 클래스의 인스턴스를 다수 개 생성하는 예제
    Cthis c1, c2;       /// == int x, y;
    c1.setX(100);       /// x = 100;
    c2.setX(200);       /// y = 200;
    printf("Instance : %p %p\n", &c1, &c2);
    printf("X : %p %p\n", &c1.x, &c2.x);
    Cthis ca[10];
    ca[0].x = 10;

    Cthis ct;       /// 클래스의 인스턴스 생성 : 메모리 적재
    ct.setX(999);   /// x 멤버의 값을 설정하는 멤버 함수 호출
    printf("before : %d\n", ct.x);      /// 값 확인
    ct.setX(777);   /// x 멤버의 값을 설정하는 멤버 함수 호출
    printf("after : %d\n", ct.getX());  /// 값 확인
    std::cout << "Hello World!\n" << asdf::sta << "\n";
}
