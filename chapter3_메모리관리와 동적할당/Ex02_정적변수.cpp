#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void fun()
{
    //정적변수:함수내에 선언됐지만 프로그램이 실행 ~ 종료될때까지 메모리가 할당되는 변수(데이터 영역에 잡힘)
    //선언된 블럭 내에서만 사용 가능한변수(지역변수와 특징 같음)
    static int x = 1; //정적변수
    x++;
    cout << x << endl;
}

int main(void)
{
    fun();
    fun();
    fun();

    return 0;
}
