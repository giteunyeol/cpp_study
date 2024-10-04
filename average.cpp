/*
정수 2개와 실수 2개를 입력받아 
정수와 실수의 평균을 구해 출력하는코드
출력 ex)
정수 2개 입력: _ _
실수 2개 입력: _ _
정수의 평균은_이고, 실수의 평균은 _ 입니다.
*/

#include <iostream>

using namespace std;

int main(void)
{
    int integer1, integer2;
    double float1, float2;
    cout << "정수 2개 입력 : "; 
    cin >> integer1 >> integer2;

    cout << "실수 2개 입력: ";
    cin >> float1 >> float2;
    
    int intans = (integer1 + integer2) / 2;
    double doubleans = (float1 + float2) / 2.0;

    cout << "정수의 평균은 " << intans <<  "이고 , " << "실수의 평균은" << doubleans << "입니다";


    return 0;
}