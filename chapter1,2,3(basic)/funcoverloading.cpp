#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//java에서의 overloading과 매우 유사 
//같은 이름의 함수를 호출할때.
//같은 자료형을 찾아감. 만약 같은 자료형이 존재하지 않는다면 더 큰타입. ex) int형(없을경우) >> double형  (프로모션)
//매개변수의 자료형이 다른경우  : 오버로딩
//매개변수의 갯수가 다른경우 : 오버로딩

//오버로딩 함수 찾는순서
/*
1. 매개변수의 타입의 일치
2. promotion (더 큰 타입의 자료형으로 변환하는것)
3. standard conversion(자료가 더 낮은 타입으로 바뀌면서 절삭되는것) ex) double(3.5) -> int(3)
4. user define conversion(operator 변환 함수)
5. variable argument function
*/

/*
gettotal함수 overloadding
1.gettotal()    : 1 ~ 100 합계를 구해 리턴
2.gettotal(x)   : x ~ 100 합계를 구해 리턴
3.gettotal(x,y) : x ~ y 합계를 구해 리턴
*/

//function overloading : 다형성 (polymorphism) 구현!

int gettotal()
{
    int total = 0;
    for(int i = 0; i <= 100; i++)
    {
        total += i;
    }
    return total;
}
int gettotal(int x)
{
    int total = 0;
    for(int i = x; i <= 100; i++)
    {
        total += i;
    }
    return total;
}
int gettotal(int x, int y)
{
    int total = 0;
    for(int i = x; i <= y; i++)
    {
        total += i;
    }
    return total;
}


//매개변수로 포인터 선언시 int ptr[]처럼 선언 가능.
//배열이 아니라 포인터임.
int gettotal(int * arr, int count)
{
    int total = 0;
    for(int i = 0; i < count; i++)
    {
        total += arr[i];
    }
    return total;
}
int main(void)
{
    int ans = gettotal();

    cout << ans;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "배열의 합계는 " << gettotal(arr, 5) << "입니다.\n";
    return 0;
}
