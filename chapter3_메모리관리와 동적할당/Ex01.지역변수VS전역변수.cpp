#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//전역변수 : 프로그램 실행 ~ 종료될때까지 메모리가 할당된 변수
//어디서든 접근가능한 변수
int glo = 100; // 전역변수(특정 함수에 속하지 않음) , data 영역에 할당

// 매개변수도 지역변수. 매개변수는 지역변수에 포함되는 개념.
// 매개변수의 유효범위는 함수.
void fun(double x) 
{
    int y = 99;
}

int main(void)
{
    //지역변수: 선언된 블록({})안에서는 사용가능한 변수
    //블록이 끝나면 메모리에서 변수도 제거
    int a = 1; // 지역변수(블럭 안에서 선언) , stack 영역에 할당
    {
        int b = 2;
        char c = 'A';
        {
            double d = 3.14;
            fun(d);
        }
        //printf("%f", d); // error
        char str[255] = "Hello World";
    }

    return 0;
}