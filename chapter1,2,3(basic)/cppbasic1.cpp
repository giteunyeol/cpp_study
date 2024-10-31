#include <iostream>
#include <string> // string객체를 이용하기위해

using namespace std;


int main(void)
{
    cout << "두 수 입력: ";
    int n1, n2;
    cin >> n1 >> n2;

    cout << "입력받은 두 수는"  << n1 << "," << n2 << "입니다.\n";

    cout << endl; //endline
    char ch;
    cout << "문자 입력: ";
    cin >> ch;
    cout << "입력받은 문자는 " << ch << "입니다.\n";

    cout << endl << endl;
    double f;
    cout << "실수 입력: ";
    cin >> f;
    cout << "입력 받은 실수는 " << f << "입니다.";

    cout << endl << endl;

    char str[255];
    cout << "문자열 입력: ";
    //getchar();  // 버퍼 \n 제거
    cin.ignore();
    cin.getline(str, 255); // 버퍼에 남아있는 엔터값을 무시하지 못함
    cout << "입력 받은 문자열은 "<< str << "입니다.\n";

    cout << endl << endl;
    string buf; //문자열 타입
    cout << "문자열 입력";
    getline(cin, buf);
    cout << "입력 받은 문자열은: "<< buf << "입니다.\n";

    return 0;
}
