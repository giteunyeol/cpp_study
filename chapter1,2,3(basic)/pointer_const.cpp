#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int a = 5; 
    const int * p = &a; //포인터가 가리키는 메모리의값을 수정할 수 없다.
    // *p = 99;  << 에러
    a = 66; // 가능
    
    cout << a << endl;
    ///////////////////////////////////////////////
    int b = 10;
    int * const ptr = &b; //포인터의 주소값을 변경할 수 없다.
    //ptr = &a; // error 포인터는 변수기때문에 다른주소 저장가능
    //////////////////////
    
    int c = 10;

    //앞 const : p2가 가키리는 대상을 바꿀 수 없다.
    //뒤 const : p2의 주솟값을 바꿀 수 없다.
    const int * const p2 = &c; 

    int d =  10;
    const int & ref = d;
    
    //래퍼런스를 상수화 시키면 래퍼런스로 공유하는 메모리의 값을 변경할 수 없다.
    //ref = 67; // error

    d = 55;
    cout << d << endl;

    return 0;
}
