#include <iostream>

using namespace std;

int main(void)
{
    //입력받은 문자가 대문자인 경우는? 소문자로 변환
    //소문자인 경우? 대문자로 변환
    //영문자가 아닌 경우? "영문자가 아닙니다 메세지 출력"
    char question;
    cout << "변환할 문자를 삽입해주세요 :";
    cin >> question;

    if(65<= question && question <= 90) //대문자
    {
        cout << "변환된 문자는 " << char(question + 32)<< "입니다.";
    }
    else if(97 <= question && question <= 122) //소문자
    {
        char temp = question - 32;
        cout << "변환된 문자는" << char(question - 32) << "입니다.";
    }
    else
    {
        cout << "영문자가 아닙니다.";
    }

    return 0;
}
