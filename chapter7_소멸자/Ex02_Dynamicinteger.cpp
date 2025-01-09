#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//int형 메모리를 동적으로 할당하는 클래스 

class DynamicInt
{
public:
    DynamicInt(int count = 1)
    {
        if(count < 1)
        {
            return; //리턴으로 생성자 종료
        }
        arr = new int[count]; //동적으로 할당된 메모리의 주소를 저장
        size = count;
        cout << "Constructor\n";
    }

    ~DynamicInt() //소멸자는 매개변수를 가질 수 없다. => 오직 1개만 가능
    {
        delete[] arr;
        cout << "Destructor\n";
    }
public:
    inline int getsize() const {return size; }

public:
    inline void setAt(int index, int value)
    {
        if(index >= 0 && index < size)
        arr[index] = value; 
    }
public:
    inline int getAt(int index)
    {
        if(index >= 0 && index < size)
        {
            return arr[index];
        }
        else
        {
            return 0;
        }
    }
private:
    int * arr = nullptr; //동적 메모리의 주소를 저장 
    int size = 1; //동적 메모리의 크기 
};

int main(void)
{
    DynamicInt d1(10); //인스턴스 생성

    srand(time(NULL)); //seed초기화
    for(int i = 0; i < d1.getsize(); i++) //배열의 인덱스
    {
        //d1.arr[i] = rand(); // error: private멤버는 접근 불가능해서
        d1.setAt(i, rand()); //0 ~ 327272
    }

    cout << "\n\n * 랜덤하게 저장된 값을 출력 *\n";
    for(int i = 0; i < d1.getsize(); i++) //배열의 인덱스
    {
        //cout << std::setw(5) << d1.arr[i] << " "; // error
        cout << std::setw(5) << d1.getAt(i) << " ";
    }
    cout << endl;

    return 0;
}