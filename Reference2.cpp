#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void swap(char * str1, char * str2) //배열의 내용을 변경하지 않을때는 const 사용
{
    char temp[255];
    //error => 주소를 바꿔라
    /*
    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    */
   //strcpy(도착지, 출발지): 도착지의 주소부터 널문자까지를 출발지로 복사해라
   strcpy(temp, str1);
   strcpy(str1, str2);
   strcpy(str2, temp);
   cout << str1 << ", " << str2;
}

void swap(double &r1, double &r2)
{
    double temp;
    temp = r1;  
    r1 = r2;
    r2 = temp;
    cout << r1 << ","<< r2;
}


int main(void)
{
    double d1 = 1.1, d2 = 2.2;

    swap(d1, d2);

    char str1[10] = "Hello", str2[10] = "World";

    cout << endl;

    swap(str1, str2);
    // p = str + 2; 가능
    // str = p + 2; 불가능. 변수는 상수이기 때문에.
    // 배열이름: 포인터 상수 
    // 포인터 : 포인터 변수


    return 0;
}