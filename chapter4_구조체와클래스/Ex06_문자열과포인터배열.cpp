#include <iostream>
#include <string>
#include <iomanip> // 입출력 조작

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    //literal상수 : 직접 쓰는 값 자체를 말하며, 정수상수, 실수상수, 문자상수, 문자열상수로 나뉜다.
    //문자 상수는 작은따옴표('')내에 표기하며, 내부적으로는 아스키 코드값인 정수로 처리된다.
    //문자열 상수는 큰따옴표("")내에 표기하며, 내부적으로는 문자열이 저장된 주소로 처리된다.
    //문자열 상수는 항상 널문자('\0')로 끝나며, 이는 문자열의 끝을 의미한다.
    /*
    double a = 5 + 3.8; // 정수상수 , 실수상수 
    char c = 'a'; // 문자상수
    const char * p1 = "apple";
    const char * p2 = "odd";
    */
    
    //문자열 => 주소. 문자열은 포인터로 선언
    //포인터가 가리키는 영역이 literal영역이니 상수로 선언
    
    //char*는 주소가 출력되는 것이 아니라 
    //주소부터 널문자 이전까지 출력.
    
    /*
   int * p[5]; // 포인터 변수를 5개를 선언하겠다 => 포인터 배열
   int a = 3, b = 5;

   p[2] = &b;
   cout << b << ", "<<  * p[2] << endl;
   p[4] = &a;
   cout << a << ", " << * p[4] << endl;
   */

   const char * fruit[5] = {"apple", "banana", "orange", "strawberry", "pear"};

   
   cout << fruit[2] << endl;  //fruit[2]에 저장된 주소부터 널문자 이전까지 출력
   cout << * fruit[2] << endl; //fruit[2]가 가리키는 메모리 참조.
   cout << fruit[2] + 2 << endl; // ange출력
   cout << *(fruit[2] + 2) << endl; //a의주소
   cout << *(fruit[3] + 2) << endl; // strawberry의 r주소
   cout << *(fruit[0] + 3) << endl; // apple의 l
   cout << fruit[1] + 2 << endl; //rawberry
   //인덱스도 역참조기능을 하기때문에 이차원 배열처럼 사용가능.
   // ex) *(p[0] + 3) = p[0][3].
   cout << (int*)fruit[2] << endl; //char형 포인터의 주소를 보고 싶은 경우는 다른타입의 포인터로 형변환하면 된다.


   return 0;
}