#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int n;

    cout << "학생 수 입력 : ";
    cin >> n;

    //c와 c++의 모든 변수선언은 정적할당이 돼야함.
    //정적할당이란 컴파일시 할당될 메모리의 크기가 결정돼야함.
    //int score[n]; //error: 변수인 경우 컴파일시 크기를 모르기 때문.

    //동적할당으로 이 문제를 해결
    //new로 할당된 메모리가 배열이면 delete할때도 배열로 해제해줘야함.
    int * score = new int[n]; //score: 스택에 저장(지역변수), int[n]: heap 영역에 저장(동적) . 실행중에 원하는 크기만큼 메모리 할당 
    int total = 0;

    for(int i = 0; i < n; i++) //학생수만큼 반복 
    {
        cout << i + 1 << "번째 점수 입력: ";
        cin >> score[i];

        total += score[i]; //합계를 누적
    }

    cout << endl << n << "명 학생의 점수 평균은" << (double)total / n << "입니다 \n";

    delete[] score; //score가 참조하는 메모리를 제거, 메모리를 해제하지 않을시 메모리 누스(memory leak)

    return 0;
}