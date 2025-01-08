#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class myClass
{
public:
    myClass(int n)
    {
        p = new int[n];
        cout << "생성자(constructor): 전달된 크기만큼 int형 메모리를 할당\n";
    }

    ~myClass() //물결무늬가 붙음:소멸자, 동적메모리 해제를 위해서 사용 
    {
        cout << p << "메모리 헤제 => 소멸자destructor\n";
        delete[] p; //동적 메모리 해제
    }
private:
    int * p; //주소를 저장하는 포인터 변수
};

int main(void)
{
    myClass m1(5);
    { 
        myClass m2(2);
    }
    myClass m3(3);

    return 0;
}