#include <iostream>

using std::cout;
using std::cin;
using std::endl;
/*
  생성자(Constructor)
  인스턴스 생성 시 내부적으로 호출되는 메서드
  instance variable을 초기화하기위한 목적
  생성자는 오버로딩이 가능하다.(여러개 존재할 수 있다.)
  클래스명과 동일한 이름으로 만들어진 메서드를 말한다.
  리턴타입은 가질 수 없다.
*/

class MyClass
{
    public:
    /*
    MyClass() // 생성자는 클래스와 동일한 이름으로 생성
    {
        a = 10;
        b = 24;
        cout << "1.생성자(Constructor)\n"; 
    }
    */

   /*
    MyClass(int x = 10) 
    {
        a = x;
        b = 24;
        cout << "2.생성자(Constructor)\n";
    }
    */

    //디폴트 파라미터 구현 시 초기값은 선언부에만 쓴다.
    MyClass(int x = 10, int y = 24); // default parameter로 생성하면 m1, m2도 받을 수 있음.
    private:
    int a,b;
};

MyClass::MyClass(int x, int y)
{
    a = x;
    b = y;
    cout << "3.생성자(Constructor)\n";
}


int main(void)
{
    MyClass m1, m2(1000), m3(-4, -5); //인스턴스(실체) 생성

    return 0;
}