// 과제 1. 람다 표현식과 지역변수 캡쳐

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //vector<int> x { 1,2,3,4,5,6,7,8,9,10 };
    int x[10]{1,2,3,4,5,6,7,8,9,10 }

    int y[10];

    int v1 = 10;

    // x의 모든 요소에 v1를 더해서 y 에 넣어주세요
    // 조건 1. x 와 y 가 배열이 아닌 vector인 경우도 코드 변경없이 실행되게 해주세요.
    // 조건 2. 람다 표현식을 사용해 주세요.
    
    audo f = [v1](int a) {return a + v1; };

    for (i=0; i<10; i++)
        y[i] = f(x[i])
    
    transform ( x[i]+v1 );

    for (auto n : y)
        cout << n << endl; // 11,12,13,14,15,16,17,18,19,20 나와야 합니다.
}