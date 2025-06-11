// 0611.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

/// 상속 관계가 있는 인스턴스를 생성할때, 부모부터 메모리에 적재된다.
/// A class --상속--> B class --상속--> C class
/// 메모리 생성 : A -> B -> C 순으로 생성
/// 메모리 해제 : C -> B -> A 순으로 해제


/// 부모 클래스 선언
class CParent
{
/// protected 권한 : 관계(상속) 있는 클래스에서 접근 가능한 권한
protected:
    int m_pro = 10;
    void protec()
    {
        printf("CParent의 Protected 메서드 호출\n");
    }
public:
    CParent()
    {
        printf("CParent 클래스의 생성자\n");
    }
    ~CParent()
    {
        printf("CParent 클래스의 소멸자\n");
    }

    void Func1()
    {
        m_Value1 = 1;
    }

    int m_Value1;
};


/// 자식 클래스 : 부모 클래스를 상속
///     상속을 받으면 부모 클래스의 정보/기능을 사용할 수 있다.
///     상속 : class 자식클래스이름 : 권한 상속할부모클래스이름
///     다중 상속 : 상속할부모클래스이름, 권한 부모클래스, 권한 부모클래스
class CTest : public CParent
{
public:
    CTest()
    {
        /// 부모 클래스의 protected 권한인 멤버 함수 호출 가능!!!!
        /// ??????? ==> 관계가 있으니까!
        m_pro = 10;
        protec();
        printf("CTest 클래스의 생성자\n");
    }
    
    ~CTest()
    {
        printf("CTest 클래스의 소멸자\n");
    }

    /// 재정의된 멤버 함수
    void Func1()
    {
        m_Value1 = 2;
    }

    void Func2()
    {
        m_Value2 = 3;
    }

    int m_Value1;
    int m_Value2;
};



int main()
{
    CParent cp;
    printf("CP: %p %p\n", &cp, &cp.m_Value1);
    /// 자식 클래스의 인스턴스 선언
    CTest t;
    printf("CT: %p %p %p\n", &t, &t.m_Value1, &t.m_Value2);
    printf("CP: %p\n", &t.CParent::m_Value1);
    /// 자식 클래스에서 부모 클래스의 멤버 함수 호출 방법
    t.CParent::Func1();
    /// Func1() 부모/자식에 모두 존재하지만, CTest에 있는 Func1() 더 가깝다.
    t.Func1();
    t.Func2();

    /// 자식 클래스에서 부모 클래스의 멤버 변수 접근 방법
    /// ==> 자식 클래스가 인스턴스화가 되면, 자동으로 부모도 인스턴스화 된다.
    cout << t.CParent::m_Value1 << endl;
    cout << t.m_Value1 << endl;
    cout << t.m_Value2 << endl;

    std::cout << "Hello World!\n";


    int* ptr = nullptr;
    ptr = (int*)malloc(40);
    int* ppp = ptr;
    ppp[0] = 3;
    ppp[1] = 31;
    ppp[2] = 333;
    printf("%d %d %d\n", *ppp, *(ppp + 1), *(ppp + 2));
    free(ptr);
}
