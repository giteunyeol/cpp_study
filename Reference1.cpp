#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// a * b : 곱하기      변수 or 상수
// int * p : 포인터    자료형 * 변수
// * a   : 역참조      * 포인터
// &a    : 주소       &변수
// int & a: 래퍼런스   자료형 & 변수 

void input(int * x, double  *y) //pointer
{
    cout << "정수 입력 : ";
    cin >> *x;
    cout << "실수 입력 : ";
    cin >> *y;
    cout << "call by address\n";
}

void input(int & r1, double & r2) //reference(별명)
{
    cout << "정수 입력: ";
    cin >> r1;
    cout << "실수 입력: ";
    cin >> r2;
    cout << "call by reference\n";
}

int main(void)
{
    int a;
    double d;
    
    input (a, d);

    cout << a << " , " << d << endl;
    return 0;
}