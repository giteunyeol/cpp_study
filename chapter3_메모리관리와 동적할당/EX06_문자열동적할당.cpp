#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(char *str1, char *str2) 
{
    char * temp = new char[strlen(str1) + 1]; //문자열의 길이 +1만큼 동적할당

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    cout << str1 << ", " << str2;

    delete[] temp;
}

void swap(double &r1, double &r2)
{
    double temp;
    temp = r1;
    r1 = r2;
    r2 = temp;
    cout << r1 << "," << r2;
}

int main(void)
{
    double d1 = 1.1, d2 = 2.2;

    swap(d1, d2);

    char str1[10] = "Hello", str2[10] = "World";

    cout << endl;

    swap(str1, str2);

    return 0;
}