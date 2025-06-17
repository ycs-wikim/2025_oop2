// 0617.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Game.h"

using namespace std;


int main()
{
    int user = 0;
    int com = 0;
    int res = 0;
    Game game;

    while (true)
    {
        cout << "가위(0) 바위(1) 보(2) 입력: ";
        cin >> user;
        com = game.normalGame();
        res = game.GetGameResult(user, com);
        printf("%d %d\n", user, com);
        if (user == 3)
            break;
        switch (res)
        {
        case 0:
            printf("이겼다!\n");
            game.userWin();
            break;
        case 1:
            printf("졌다!\n");
            game.comWin();
            break;
        case 2:
            printf("비겼다!\n");
            game.allDraw();
            break;
        }

        game.printGame();
    }
}

#ifdef __OOP
using namespace std;
#include <stack>
#include <queue>
#include <vector>


class ASDF
{
public:
    int m_value;
    ASDF() { printf("ASDF 생성자\n"); }
    ~ASDF() { printf("ASDF 소멸자\n"); }
};

vector<int> g_int;
vector<ASDF*> g_vector;



/// 템플릿을 지금부터 시작한다.
/// 템플릿 함수 예제
template <typename T>
T add(T a, T b)
{
    T c = a + b;
    std::cout << "Tc : " << c << endl;
    return c * 10;
}


int main()
{
    printf("ADD: %d\n", add(3, 5));
    printf("ADD: %f\n", add(3.0, 5.0));
    printf("ADD: %d\n", add(-3, -5));
    printf("ADD: %ld\n", add(3u, 5u));

    ASDF* ptr = nullptr;
    for (int i = 0; i < 5; i++)
    {
        ptr = new ASDF();
        ptr->m_value = i + 10;
        g_vector.push_back(ptr);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", g_vector[i]->m_value);
    }

    g_vector.clear();
    /*
    for (int i = 0; i < 5; i++)
    {
        ptr = g_vector[i];
        delete ptr;
    }
    */
    std::cout << "Hello World!\n";
}
#endif