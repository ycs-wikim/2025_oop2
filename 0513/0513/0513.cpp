// 0513.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include <stdlib.h>         /// 랜덤 함수 사용을 위한 헤더
#include <time.h>           /// 랜덤 시드 값 변경을 위한 헤더

/// 함수 : == 기능
/// 함수의 원형(Prototype) : 함수 선언부
/// 함수의 선언
///     반환값 : 기능 종료 후, 반환할 값. 반환 값이 없을 수 있다.(void)
///     함수의 이름 : 예약어(if, for ...) X, 변수 명명 규칙 위반 X
///             ==> 기능을 유추할 수 있는 형태의 이름을 사용
///     함수의 인수(== 인자, 파라미터, 매개 변수)
///             ==> 기능 동작을 위해 필요한 추가적인 정보
///     함수의 내용물 : 개발자가 구현
/// 반환값 함수이름(인수1, 인수2, 인수3, ... )
/// { 함수의 내용물; ... ; ... ; }

/// 반환 값 : 숫자(1 ~ 45 사이에 숫자) ==> int
/// 함수 이름 : getRandom
/// 인수 : 필요 없음
/// 내용물
int getRandom_value(    )
{
    int rnd = 0;
    /// K % N ==> 0 ~ N - 1 
    rnd = rand() % 45 + 1;       /// 랜덤 값 획득 : 0 ~ 44 => 1 ~ 45

    return rnd;
    /// return : 함수의 실행을 중단한다. 반환 값이 있으면 옆에 기록한다.
    ///         : 반환 값의 자료형과 함수의 반환 자료형이 동일해야 한다.
    //return rand() % 45 + 1;
}

void getRandom_address(int *random)
{
    *random = rand() % 45 + 1;
}

void getRandom_ref(int &random)
{
    random = rand() % 45 + 1;
}

/// 함수 호출과 인수의 관계
void abc(int value, int k)     /// 인수 입력 : 자료형과 변수이름
/// 2. int value = 3; 대입 식이 실행되는 것과 같은 효과
/// 3. int k = 999;
/// 순서에 따라 인수 값이 대입 연산되므로 순서가 중요!
{ 
    value == 3;
}

void bbb()
{
    abc(3, 999);
    /// 1. abc 함수 호출할 때 3이라는 값이 전달
}

/// 함수의 호출 방식 3가지 ( C에서는 2개, C++ 3개 )
/// 1. call by value (값에 의한 호출) : 일반 변수, 상수 값을 이용
/// 2. call by address (주소에 의한 호출) : 포인터
/// 3. call by reference (참조에 의한 호출) : 참조 변수

/// 값에 의한 호출은 인수의 값이 함수 내부에서 아무리 변경해도
/// 원래 변수에 영향을 미치지 않는다!
void call_by_value(int value)   /// int value = 111; OOOOO
                                /// int value = value; XXXXX
{
    value++;        /// 연산 : 112
    printf("%s : %d\n", __FUNCTION__, value);
}


void call_by_address(int *value)        /// int *value = &value;
{
    (*value)++;     /// 연산자의 우선순위
                    /// 주소에 직접 접근해서 값을 변경 ==> 원본에 영향
    printf("%s : %d\n", __FUNCTION__, *value);
}


void call_by_reference(int& value)      /// int &value = value;
{
    value++;        /// 일반적인 변수 연산 : 참조 변수 => 원본에 영향
    printf("%s : %d\n", __FUNCTION__, value);
}

/// 구조체를 인수로 사용하는 경우
typedef struct ASDF
{
    int x[10];
    int y[255];
    int z[1000];
} ASDF, *PASDF;

/// 구조체를 이용한 call by value
void cbv_asdf(ASDF a)       /// ASDF a = f;
{
    a.x[0] = 10;
    /// a는 별도의 메모리 공간
    printf("%s : %lld\n", __FUNCTION__, sizeof(a));
}
/// 구조체를 이용한 call by address
void cba_asdf(PASDF a)
{
    a->x[0] = 100;
    printf("%s : %lld\n", __FUNCTION__, sizeof(a));
}
/// 구조체를 이용한 call by reference
void cbr_asdf(ASDF& a)
{
    a.x[1] = 10;
    printf("%s : %lld\n", __FUNCTION__, sizeof(a));
}

/*
int 끼리 더하는 함수 : add
char , int 랑 더하는 함수 : add_char_int()
int, int, int 랑 3개를 더하는 함수 : add_int_int_int()
*/

/// 함수의 중복 정의 : C++에서 추가된 기능
/// 함수의 중복 정의 == 오버로드
/// : 동일한 함수 이름을 사용할 수 있도록 만들어주는 기능
///     ==> 개발자의 편의를 위해 추가된 기능
/// 1. 반환 값은 함수를 중복 정의할 때 사용할 수 없음.
/// 2. 함수 인수(매개 변수)에 따라 구분할 수 있다.
///     2-1. 함수 인수의 개수가 다르면 서로 다른 함수로 구분.
///     2-2. 인수 개수가 같더라도 자료형이 다르면 다른 함수로 구분.
void funcion_add(int *a)
{
    printf("인수 1개\n");
}

void funcion_add(int &b)
{
    printf("인수 1개\n");
}

void funcion_add(int a)
{
    printf("인수 1개\n");
}

void funcion_add(char a)
{
    printf("인수 1개\n");
}

int funcion_add(int a, int b)
{
    return a + b;
}

void funcion_add(char a, int b)
{
    a + b;
}

void funcion_add(int a, char b)
{
    a + b;
}


int main()
{
    int rnd = 0;        /// 랜덤 값을 얻을 변수

    /// 랜덤 시드(Seed) 값 변경
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        rnd = getRandom_value();        /// call by value
        printf("RANDOM: %d\n", rnd);    /// 값 출력

        getRandom_address(&rnd);        /// call by address
        printf("RANDOM: %d\n", rnd);    /// 값 출력

        getRandom_ref(rnd);             /// call by reference
        printf("RANDOM: %d\n\n", rnd);  /// 값 출력
    }
    std::cout << "Hello World!\n";

    int value = 111;
    /// call by value 함수 호출
    call_by_value(value);
    printf("value : %d\n", value);
    /// call by address 함수 호출
    call_by_address(&value);
    printf("value : %d\n", value);
    /// call by reference 함수 호출
    call_by_reference(value);
    printf("value : %d\n", value);

    ASDF f = { 1, 2, 3 };
    cbv_asdf(f);
    cba_asdf(&f);
    cbr_asdf(f);
}
