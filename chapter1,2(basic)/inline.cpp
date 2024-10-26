#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//inline을 사용하면 square의 코드값을 그대로 복붙.
//함수를 호출하는 과정을 거치지 않기 때문에 최적화율 올라감, 대신 코드가 길어짐.
//일반적으로는 컴파일러가 자동적으로 inline을 판별함.

inline double square(double d)
{
    return d * d;
}

int main(void)
{
    cout << square(5) << endl;

    return 0;
}
