// 0520.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


#define OOP     /// C코드 확인을 하려면 OOP --> C로 변경


#ifdef OOP

/// 클래스 선언 : 설계도를 만든다.
/// 예약어 클래스이름 {  멤버 변수; ... ; 멤버 함수; ... }
/// 권한 : 3가지가 제공
/// 1. public : 공용 - 누구나 사용이 가능하다.
/// 2. protected : 보호된 - 특정인만 사용이 가능하다.
/// 3. private : 개인 - 나만 사용 가능하다.
class ASDF      /// == struct ASDF
{
    int m_value;
    /// m_value는 권한 없이 선언된 멤버 변수
    /// C++ 에서는 권한이 private 지정 ==> 이 클래스 내부에서만 사용한다.
    ///     혹시나 변수/함수 선언 시에 실수할까봐
    /// JAVA에서는 권한이 public 지정 : JAVA에서 권한과 멤버 변수 선언
    /// private int m_value;
    /// public int value;
    /// public int a; public int b;
    /// C++에서 권한 지정 방법
public:         /// 권한이 public으로 설정
    int value;
    int a;
    int b;
    int c;
    int d;
    int e;
    void work(int w)
    {
        printf("W: %d\n", w);
    }

    void work(char w)
    {
        printf("W: %c\n", w);
    }
    /// 다른 권한을 설정하기 전까지는 모두 public 권한
private:
    int kkk;
    void works(char w)
    {
        printf("W: %c\n", w);
    }
public:         /// 동일한 권한을 클래스 내에서 여러번 사용 가능
    int pub;
};


int main()
{
    ASDF a;     /// 클래스 변수 선언 ==> 인스턴스/객체
    a.value;    /// 인스턴스/객체.멤버가 나타나면 권한이 public
    //a.kkk;      /// private 멤버에 접근 불가. 정보 은닉. 캡슐화
    a.pub;
    a.work(3);
}

#endif


#ifdef C        // if define 되어 있다면 C

/// 함수 선언의 개념 : 함수의 원형 또는 프로토타입
///     필요 이유 : 구조적/절차적 프로그래밍의 번역을 위해 필요.
//int asdf(int x, int y);       /// 변수명까지 표기
int asdf(int, int);             /// 자료형만 표기
///void ABC(int);               /// 구현체가 없어서 오류 발생


/// 함수 인수에서의 const가 갖는 의미
/// 내가 너의 값을 변경하지 않을테니, 안심하고 나를 호출해서 쓰도록 해.
void ABCC(const int* p)
{
    /// const 변수 선언은 수정할 수 없도록 구성
/*
    const int kkk = 10;
    int* ppp = (int*)kkk;
    *ppp = 1000;
    printf("kkk : %d\n", kkk);
*/
    /// 위의 코드는 정상 동작하지 않고 실행 도중 오류를 발생!!!
    
    int* pp = (int*)p;
    *pp = 999;
    //(*p)++;
}

/// default 인자의 함수 원형 : default 인자 값을 표시
void functionB(int, int, int c = 1);

/// default 인자의 구현체 : default 인자를 일반 인자 처럼 표시
void functionB(int a, int b, int c)
{
    // const : 바로 뒤의 변수/자료형을 상수화
    /// const int const i = 3; 일반 변수는 허용 X
    const int j = 3;
    const int* const ptr = &j;  /// 포인터에서만 둘다 사용 가능
    int const k = 3;
    a = 1;
    b = 1;
    c = 3;
}

/// default 인자 : 정상적인 함수 구현
void function(int a, int b, int c = 3)
{ }
/// default 인자 : 정상적인 함수 구현 - 모든 인수를 default로 구현 가능
void functionA(int a = 3, int b = 6, int c = 9)
{ }


/// 비정상적인 함수 구현 - 1 : 첫번째에 default 인자가 오면 의미 없음
void fff(int a = 1, int b, int c)
{ }

/// 비정상적 함수 구현 - 2 : 중간에 default 인자가 와도 의미 없음
void ffff(int a, int b = 3, int c)
{ }

int main()
{
    int k = 90;
    ABCC(&k);

    function(1, 2);         /// a = 1, b = 2, c = 3
    function(10, 20, 30);   /// a = 10, b = 20, c = 30

    //fff(2, 3);
    fff(2, 3, 5);
    //ffff(1, 35);

    /// 모두 default 인자로 구성되면 아래와 같이 호출 가능
    functionA();
    functionA(1);
    functionA(1, 2);
    functionA(1, 2, 3);

    ///ABC(3);
    printf("%d - k[ %d ]\n", asdf(3, 5), k);
    std::cout << "Hello World!\n";
}

/// 함수 반환 값의 기본 : 없거나 하나만 반환 가능하다.
int asdf(int x, int y)
{
    /// return 에 다수개의 반환 값을 전달할 수 있는 언어 : Go
    return 1, 2, 3;
    /// return 이후에는 코드가 동작하지 않는다!
    /// 처리할 때의 순서 :    <<<<----------------------- 방향
    /// 읽을 때의 순서 :      ---------------------->>>>> 방향
}
#endif