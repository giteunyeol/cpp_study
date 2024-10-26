#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int a = 3;
    int b(3);
    int c = {3};
    int d{3};
    int e{0};
    int f{}; //0으로 초기화

    cout << a << "," << b << "," << c << "," << d << "," << e << "," << f << endl;  

    //c++11표준안부터 auto타입
    //우측의 타입으로 자동결정
    auto au = a;
    double ff = 7.6;
    auto aut = ff;
    //auto abc; //error: 선언만 불가능 => 우측의 타입으로 자료형이 결정.
    cout << "auto타입의 자료형: " << typeid(au).name() << endl;
    cout << "auto타입의 자료형: " << typeid(ff).name() << endl;
    /////////////////////////////

    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //c++11 표준안부터 범위기반 for문(range - based for문)
    //at를 래퍼런스로 선언하면 요소의 값을 공유하면서 반복
    //for(저장할 변수 : 반복 가능한 타입)
    //장점1 : 배열의 크기가 변경돼도 코드의 수정이 필요없다.
    //장점2 : 인덱스 연산자 접근없이 요소값을 사용할 수 있다. 
    for(const auto& at: arr) // 래퍼런스로 받는 이유 : 메모리를 공유해서 오버헤드를 낮추기 위해 , 반복을 하며 요소의 값을 변경할필요 없으니 const로 돌림.
    {
        cout << at << " ";
    }
    cout << endl;

    /////////////////////////
    //boolean타입 : 1byte
    bool boo;
    boo = true;
    cout << boo << endl;
    boo = false;
    cout << boo << endl;

    return 0;
}
