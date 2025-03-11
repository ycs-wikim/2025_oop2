// 0311.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

/// 특정 네임 스페이스를 이 파일에서 사용하겠다.
/// 앞으로 std 네임스페이스를 별도로 입력하지 않아도 된다.
/// 자바에서 import와 동일
using namespace std;

/// 새로운 자료형을 정의한다.
/// typedef A B;    : 형식 -> 앞으로 A(자료형)는 B(새로운 이름)로 사용한다.
typedef int INT;
typedef int i;

/// 전역 변수 kkk 선언 : kkk의 값은??? = 0
int kkk, k1, k2;
/// const로 상수화할 때는!!! 반드시 초기화를 해야 한다!!!
const int ccc = NULL;

int main()
{
    ///int k3; : 쓰레기 값이 들어가기 때문에!!!
    printf(" %d %d %d\n", kkk, k1, k2);
    /// const 예약어는 바로 뒤의 자료형 또는 변수를 상수화!
    const int cx = 10;
    //x = 90;
    /// 실제 컴퓨터가 봤을때 : 10 = 90;

    /// = 연산을 기준으로 왼쪽을 l-value, 오른쪽을 r-value
    /// l-value에 위치할 수 있는 것 : 변수
    /// r-value에 위치할 수 있는 것 : 변수, 값, 함수, 수식, 문장 기타~
    
    /// int int = 99;       /// int는 예약어!
    /// 자료형을 선언하는 예약어 : 문장의 시작 위치!
    /// int for = 77;       /// for도 예약어!
    i a = 22;
    /// 첫번째 i 번역할때 위치가 자료형 위치이기 때문에 int로 번역
    /// 두번째 i 번역할때 변수명 위치 ==> 변수명으로 정확하게 번역
    i i = 90;

    int x = 10;
    INT y = 20;
    INT z = x + y + a + i;  /// i는 변수? 자료형? ==> 변수!

    printf("x + y = %d\n", z);
    /// std : standard 표준 네임 스페이스
    /// :: ==> 범위 지정
    /// cout : 사용할 수 있는 API/함수/기능
    std::cout << "Hello World!\n";
    /// using namespace std; 입력으로 앞에 std:: 생략 가능
    cout << "Hello World! - 2\n";

    /// 유니코드는 2바이트 이상이기 때문에, 값이 보관된 부분을 제외하면
    /// 나머지는 모두 NULL 값으로 채워진다.
    wchar_t str[] = L"C++";
    wcout << str << std::endl;   /// endl == \n == ENTER
    //printf("str : %s\n", str);  /// 경고 == 오류
    /// 오류(ERROR) : 번역 자체가 불가능!
    /// 경고(WARNING) : 번역은 가능해! 문제는 실행 도중에 프로그램 종료가능성 생겼다.
    
    char str1[] = "대한민국";
    int length = sizeof(str1);
    cout << str1 << " S " << length << endl;
    printf("singe: %s\n", str1);

    /// 유니코드 문자열 처리는 복잡하고 어렵다.
    /// 꾸준한 공부와 처리 방식을 지속적으로 공부해야 한다.
    /// SBCS, MBCS를 찾아서 추가적인 공부!
    wchar_t wstr[] = L"대한민국";
    int wlength = sizeof(wstr);
    wcout << wstr << " W " << wlength << endl;
    printf("wide: %ws\n", wstr);
}
