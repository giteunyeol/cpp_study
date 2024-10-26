#include <iostream>
#include <iomanip> //input output manipulator //setw , left, right

using namespace std; //그대로 사용하면 열어놓은 멤버가 많아 이름충돌이 생길 확률이 높다.
// using std::cout;
// using std::cin;
// using std::endl;

int main(void)
{
    cout << left; // 확보된 공간에서 왼쪽정렬
    for(int i = 1; i <= 100; i++)
    {
        cout << setw(5) << i; //공간확보 -> 오른쪽부터 기록된다.

        if(i % 10 == 0) // 10, 20, 30...
        {
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}
