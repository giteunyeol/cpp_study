#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
printchar함수를 오버로딩
1.printchar(): '*' 문자를 10개 출력한다.
2.printchar(문자, 갯수) : 문자를 갯수만큼 출력한다.
*/

void printchar()
{
    for(int i = 0; i < 10; i++)
    {
        cout <<  "*";
    }
    cout << endl;
}

void printchar(char character, int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << character;
    }
    cout << endl;
}
int main(void)
{
    printchar();

    printchar('a', 20);

    return 0;
}