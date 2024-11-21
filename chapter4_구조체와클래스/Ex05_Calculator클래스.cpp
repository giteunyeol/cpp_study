#include <iostream>
#include <string>
#include <iomanip> // 입출력 조작

using std::cout;
using std::cin;
using std::endl;
//using std::fixed; //고정 소수점 방식
//using std::setprecision; // 정밀도

#define OP_COUNT 6

class Calculator
{
public:
    //instance variable
    int count[OP_COUNT] = { 0 };

    //method
    inline double sum(double n1, double n2) { ++count[0];return n1 + n2; }
    inline double sub(double n1, double n2) { ++count[1];return n1 - n2; }
    inline double mul(double n1, double n2) { ++count[2];return n1 * n2; }
    inline double div(double n1, double n2) { ++count[3];return n1 / n2; }
    double power(int x, int y);
    double factorial(int n);
    void showOpCount() const;
};

double Calculator::power(int x, int y)
{
    ++count[4];
    double re = 1;

    for (int i = 1; i <= y; i++)
    {
        re *= x;
    }
    return re;
}

double Calculator::factorial(int n)
{
    ++count[5];
    double re = 1;
    for(int i = n; i > 1; i--)
    {
        re *= i;
    }
    return re;
}

void Calculator::showOpCount() const
{
    //포인터 배열: 포인터가 여러개
    const char* op[OP_COUNT] = {"덧셈", "뺄셈", "곱셈", "나눗셈", "거듭제곱", "순차곱"};
    cout << "\n * 연산 횟수 출력 * \n";
    for(int i = 0; i < OP_COUNT; i++)
    {
        cout << op[i] << ": " << count[i] << endl;
    }
}

int main(void)
{
    Calculator cal; //객체생성 -> Calculator인스턴스 생성

    cout << std::fixed << std::setprecision(2);
    cout << cal.sub(4, 77) << endl;
    cout << cal.power(4, 77) << endl;
    cout << cal.factorial(10) << endl;
    cout << cal.mul(4, 77) << endl;
    cout << cal.sub(10, 77) << endl;

    cal.showOpCount();

;    return 0;
}