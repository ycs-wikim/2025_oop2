// 0429.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

typedef struct STag
{
    int m;          /// 구조체 멤버 변수 : 4
    char str1[4];   /// 구조체 멤버 변수 : 4
    const char* str2;     /// 구조체 멤버 변수 : 4
        /// 포인터의 크기는 자료형과 관계 없이 동일한 크기
        /// 항상 동일한 크기 int 형과 같은 크기를 갖는다.
} SType, *PSType;

/// 구조체 Vs. 배열(동일한 자료형을 여러 개 동시에 선언한다.)
/// 구조체는 서로 다른 자료형을 한꺼번에 선언한다.
/// 동일한 점 : 요청한 메모리 공간을 한꺼번에 할당한다.
/// 구조체 선언 : 예약어 구조체이름 { 멤버; 멤버; 멤버; ... };
///     Ex) strcut sname { int a; int b; int c; };
/// 구조체 사용 - sname == int
///  1) 선언 : sname x; (자로형 변수명) == int a; a + b
///  2) 사용 : x.a + x.b ==> 구조체 변수.멤버

typedef int INT;    /// typedef A B;
/// 구조체 선언 ==> 정보체/자료형의 선언
typedef
/// A 시작 : A부분은 자료형
struct x
{
    int a;      /// int 형 크기를 갖는 멤버 변수
    int b;
    int c;
}
/// A 종료 위치
ASDF        /// B
;


int main()
{
    /// C언어에서는 구조체는 다른 형식으로 처리가 되지만
    /// C++언어에서는 구조체는 클래스와 동일하게 처리된다.

    /// C언어 스타일의 구조체 변수 선언
    struct x k1;
    /// C++ 언어 스타일의 구조체 변수 선언
    x y;        /// x 구조체 형식의 변수 y 선언
    //y.a = y.b + y.c;    /// y 변수의 멤버 접근 방법

    ASDF a;     /// typedef 이용한 경우의 구조체 변수 선언


    /// 구조체형 변수 선언 : s1
    SType s1;
    /// 구조체 멤버 변수의 값 초기화
    s1.m = 2017;
    /// memcpy == memory cppy
    /// memcpy( dest, src, size )
    /// src의 내용을 dest로 size 크기만큼 복사
    memcpy(s1.str1, "C++", 4);
    s1.str2 = "World";

    SType s2;
    s2 = s1;        /// 구조체의 대입 연산 가능하다!!!

    SType* p = &s2;
    PSType p1 = &s2;
    p1->m = 90;
    p->m = 3;       /// 구조체 포인터 -> (간접 멤버 연산자)
    s2.m = 999;     /// 구조체 변수 . (직접 멤버 연산자)

    std::cout << s2.m << " " << s2.str1 << " " <<
        s2.str2 << std::endl;

    ASDF x1;        /// 멤버는 int 3개
    x1.a = 3; x1.b = 88; x1.c = 100;
    int* pa = (int*) & x1;
    printf("%d %d %d\n", pa[0], pa[1], pa[2]);

    std::cout << "Hello World!\n";
}
