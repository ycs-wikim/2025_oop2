﻿// 0401.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    /// 반복문
    /// for( 초기식(1) ; 조건식(2) ; 증감식(3) ) { (4) }
    /// (1) --> (2) --> (4) --> (3) --> (2) --> (4) --> ..
    ///     ... --> (3) --> (2) --> (4) -> ..
    ///     ... --> (3) --> (2) --> (4) -> ..
    ///     ... --> (3) --> (2) 거짓이 될때까지 반복
    /// 
    /// 반복문 동작 조건 - 반드시 있어야 하는 내용
    /// 1) 초기식 : 변수와 값의 초기 값에 따라 반복 동작/결과가 달라짐
    /// 2) 조건식 : 반복의 종료 조건을 표시
    /// 3) 증감식(제어식) : 반복 종료 조건에 영향을 미쳐야 하기 때문.
    int Sum = 0;
    for (int i = 0; i < 11; i++)
    {
        Sum += i;
        printf("i : %d\n", i);
    }
    printf("Sum : %d\n", Sum);
    /// for( )문장으로 무한반복 만들기
    //for (;;) {}

    /// 초기식
    /// while( 조건식 )    : 대부분 무한 반복용도로 사용
    /// {
    ///     반복할 내용; 제어식/증감식;
    /// }
    /// 무한 반복을 쉽게 반드는 방법
    /// while(1) { }
    /// 
    /// 초기식;
    /// do
    /// {
    ///     반복할 내용; 증감식;
    /// } while( 조건식 ) ;;;;;;;;;;;;;;
    
    /// do ~ while 조건을 이용한 처리 예시
    int event1 = 1;
    int event2 = 0;
    int event3 = 1;
    int event4 = 1;
    do
    {
        if (0 == event1)
        {
            printf("event1을 실행하지 않았음\n");
            break;
        }

        if (0 == event2)
        {
            printf("event2을 실행하지 않았음\n");
            break;
        }

        if (0 == event3)
        {
            printf("event3을 실행하지 않았음\n");
            break;
        }

        if (0 == event4)
        {
            printf("event4을 실행하지 않았음\n");
            break;
        }

        /// event 1 ~ 4를 모두 수행한 경우. 이 위치에 도달
        printf("NPC: event를 시작합시다. 이벤트 함수 호출\n");
        return 0;
    } while (1);;;;;;;;;
    printf("NPC: 넌 아직 준비가 안됐다.\n");

    /// do ~ while( )의 용도 : 다수의 조건을 한번에 확인하고자 하는 경우.
    /// for( ) 용도 : 몇번 반복해야하는지 정확하게 알고 있는 경우.
    /// while( ) 용도 : 무한반복
    /// break : 가장 가까운 반복이나 제어문의 {, }를 벗어난다.

    /// 다중 반복 : 99단
    /// i 변수 선언 초기값을 2로. i가 10보다 작을 때(9)까지, i는 1씩 증가
    for (int i = 6; i < 10; i++)
    {
        /// i == 2
        /// j 변수 선언 초기값을 1로. j가 10보다 작을 때(9)까지, j는 1씩 증가
        for (int j = 1; j < 10; j++)
        {
            /// j == 1 ==> 2 ==> 3
            printf("%d * %d = %d\n", i, j, i * j);
        }
        
        printf("\n");
    }

    /*
    * *
    * **
    * ***
    * ****
    * *****
    */
    for (int i = 0; i < 5; i++)     /// 0, 1, 2, 3, 4(, 5)
    {                               /// 1, 2, 3, 4, 5
        //for (int j = 5; i < j; j--)   /// 1, 2, 3, 4, 5번 반복
        for(int j = 0; j < 4 - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }


    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            //continue; // ==> 아무 동작도 하지 못한다.
            printf(" ");
            //continue; // ==> 아무 의미가 없다.
        }
        //continue; // ==> 공백만 출력된다.
        for (int k = 0; k < 5 - i;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    /// 반복문에서 continue : 현재 위치에서 반복문 시작 위치로 무조건 보낸다.
    ///     ==> 가장 가까운 반복문의 시작 위치로 보낸다.


    std::cout << "Hello World!\n";
}
