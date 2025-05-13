// report.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "add.h"        /// 덧셈 기능 헤더 파일 추가
#include "mul.h"


int main()
{
    int x = 16;
    int y = 26;
    printf("%d\n", add(x, y));
    printf("%d\n", mul(x, y));
    /// 추가로 3개의 기능을 모두 구현하고 결과 출력
    std::cout << "Hello World!\n";
}
