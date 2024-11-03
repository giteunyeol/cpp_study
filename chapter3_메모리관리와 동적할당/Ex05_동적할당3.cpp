#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(void)
{
    int size;
    cout << "대문자 몇개를 할당하시겠습니까? : ";
    cin >> size;

    //size만큼 char형의 메모리를 동적할당
    //동적으로 할당된 메모리를 제거 

    char * upper = new char[size];
    char c;
    
    char searchCh;
    cout << "검색 문자 입력: ";
    cin.ignore(); //버퍼에 남아 있는 문자 제거
    cin >> searchCh;

    int count = 0;
    cout << "검색한 문자의 갯수는" << count << "개 입니다.\n";

    delete[] upper;

    return 0;
}