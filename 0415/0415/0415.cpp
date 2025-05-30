﻿// 0415.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    /// 포인터의 모든것!
    int a = 3;
    int* p = &a;
    /// a : 값 3, *a : 오류, &a : a의 주소
    /// p : 값 a의 주소, *p == a, &p : p의 주소

    /// 선언 시에 *의 개수가 이동 횟수와 동일하다.
    /// int *p 선언 : 값에 접근하려면 1번 이동하면 된다.
    
    /// 다중 포인터
    int x = 9;          /// x는 값
    int* p1 = &x;       /// p1은 포인터
    int** p2 = &p1;     /// p2는 2중 포인터
    int*** p3 = &p2;    /// p3는 3중 포인터
    int**** p4 = &p3;   /// p4는 4중 포인터

    printf("x\t: %d %p\n", x, &x);
    printf("p1\t: %p %d %p\n", p1, *p1, &p1);
    printf("p2\t: %p %p %d %p\n", p2, *p2, **p2, &p2);
    ***p3 = 999;
    printf("p3\t: %p %p %p %d %p\n", p3, *p3, **p3, ***p3, &p3);
    printf("p4\t: %p %p %p %p %d %p\n", p4, *p4, **p4, ***p4, ****p4, &p4);

    /// x <-- p1 <-- p2 <-- p3 <-- p4
    /// p4 : p3의 주소
    /// *p4 == p3 : p2의 주소
    /// **p4 == p2 : p1의 주소
    /// ***p4 == p1 : x의 주소
    /// ****p4 == x : x 변수와 동일한 변수

    /// 포인터의 연산자 : C언어 기준
    /// 1. * : 선언, 값 접근
    /// 2. & : (선언X), 주소 반환

    /// 참조 타입 : 선언할 때 &연산자로 선언_C++에서 지원
    int& r = x;     /// x 변수를 참조 타입으로 받음
    r = 15;         /// 일반 변수 사용법과 동일
    printf("x : %d_r: %d\n", x, r);
    r = 22;
    printf("x : %d_r: %d\n", x, r);

    /// 참조 변수는 반드시 초기화해야 한다.
    /// int& r1 = nullptr, NULL, 0;     모두 허용 X
    int& r1 = a;    /// 반드시 일반 변수로 초기화해야 한다.
    /// int& r2 = p1, p2;               모두 허용 X

    /// * 배열 : 동일한 자료형의 변수를 한꺼번에 선언하고
    ///         사용할 수 있는 자료형
    /// 선언 : 자료형 배열명[ 인덱스/원소의개수 ]
    /// Ex) int ar[5];  /// ar[0], ar[1], ar[2], ar[3], ar[4]
    /// 5개의 변수를 사용할 수 있음, 인덱스는 원소의 개수-1개
    /// 배열 == 포인터
    /// 배열의 초기화
    int ar[5] = { 333, 444, 555, 666, 777 };             /// 0, 0, 0, 0, 0
    int ar1[5] = { 1, 2, };         /// 1, 2, 0, 0, 0
    int* ptr = ar;  /// ptr은 주소를 받는 포인터.

    // int ar2[3] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++)
    {
        printf("ar : %d\t", ar[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("ar1: %d\t", ar1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("ptr: %d %d %d\t", *(ar+i), ptr[i], *(ptr + i));
    }
    printf("\n");
    /// ptr[0] == *(ptr + 0)
    for (int i = 0; i < 5; i++)
    {
        printf("address: %p %p\n", ar + i, ptr + i);
    }
    printf("\n");

    /// 배열과 포인터의 차이점
    /// 1. 배열은 선언하는 순간 상수
    /// 2. 배열은 nullptr 처럼 초기화 불가능
    ptr = &x;           /// 포인터는 const로 선언한 것이 아니면
    ptr = ar1;          /// 얼마든지 주소 값을 변경 가능!
    ptr = &a;
    //ar = ptr;       /// 배열이름은 상수이기 때문에 수정X
    ///int a3[3] = nullptr; // 배열은 값이 항상 있어야 함!
                            // 메모리에 항상 적재가 되어 있어야 함!

    /// 동적 메모리 할당 : 필요시 그때 마다 메모리를 할당
    ///     ==> 스택 프레임에 존재할 수 없다!
    ///     ==> heap 이라는 공간에 할당된다.
    /// 정적 메모리 할당 : int x, int ar[3];
    ///     ==> 스택 프레임 내부에 변수가 위치한다.

    /// int형 변수 5개를 넣을 수 있는 메모리 공간 할당 요청
    int *ap = (int*)malloc(sizeof(int) * 5);
    /// == int ap[5];

    for (int i = 0; i < 5; i++)
    {
        *(ap + i) = 9 + i;
        printf("AP: %d %p\n", ap[i], &ap[i]);
    }
    /// 동적 메모리 사용을 중지하므로, 해제를 요청
    free(ap);

    int arr[2][3] = { { 1, 2, 3}, {4, 5, 6} };
    //int** parr = (int**)arr;
    int *parr[3]
    printf("parr : %d\n", parr[1][0]);
    //printf("parr : %d\n", **(parr + 4));

    std::cout << "Hello World!\n";
}
