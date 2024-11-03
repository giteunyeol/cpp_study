#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#define str_len 255

int main(void)
{
    char buf1[10] = "apple";
    char buf2[10];

    strcpy(buf2, buf1); //주소부터 널문자까지 복사
    strcat(buf2, "mango"); //널문자부터 연결
    strcat(buf2, "good!");

    char str[str_len];
    char * connectstr = NULL; //연결된 문자열의 메모리를 저장하는 포인터
    int strlength, totallength;
    while (true)
    {
        cout << "문자열 입력:(exit 입력시 종료): ";
        cin.getline(str, str_len);
        strlength = strlen(str);
        //입력받은 문자열을 연결하는코드를 작성
        
        //if(str == "exit") : 주소가 같냐? 를 물어보는 것 이기때문에 불가능
        //strcmp(str1, str2):두 문자열이 일치하는 경우 0을 리턴하는 함수
        if (strcmp(str, "exit") == 0) //문자열이 같냐?
        {
            break;
        }

        if (connectstr == NULL) // 첫번째 문자열
        {
            connectstr = new char[strlength + 1];
            strcpy(connectstr, str);
            totallength = strlength;
        }
        else // 두번째 문자열
        {
            char * temp = new char[totallength + strlength + 1]; //누적 + 입력 + 1
            strcpy(temp, connectstr); // 기존 메모리의 내용을 새로운메모리로 복사
            strcat(temp, str);
            delete[] connectstr;
            connectstr = temp;
            totallength += strlength;
        }
    }
    cout << endl;
    cout << "연결된 문자열은 : " << connectstr << "입니다.";
    delete[] connectstr;
    return 0;
}