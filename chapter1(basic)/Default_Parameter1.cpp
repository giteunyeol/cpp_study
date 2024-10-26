#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Default parameter
// 기본값을 가지고 있다가 값이 전달되지 않으면 기본값을 사용하고, 값이 전달되면 전달된 값 사용.
// 다형성 구현
// 매개변수가 기본값을 가지고 있기때문에 매개변수를 전달할수도, 안할수도 있다. 
// default 값은 매개변수가 전달해도, 안해도 되기때문에 오버로딩을 할때 조심해야한다
// default 값은 함수의 뒷부분부터 채워야한다. 

/*
int gettotal()
{
    int total = 0;
    for (int i = 0; i <= 100; i++)
    {
        total += i;
    }
    return total;
}
int gettotal(int x)
{
    int total = 0;
    for (int i = x; i <= 100; i++)
    {
        total += i;
    }
    return total;
}
*/

int gettotal(int x = 1, int y = 100) //디폴트값은 선언부에만 사용
{
    int total = 0;
    for (int i = x; i <= y; i++)
    {
        total += i;
    }
    return total;
}

int gettotal(int *arr, int count)
{
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += arr[i];
    }
    return total;
}

int main(void)
{

    return 0;
}
