#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Triangle
{
    public:
    //멤버변수 : attribute , instance variable
    double base = 0,height = 0;

    //멤버함수 : (instance) method
    void setTriangle(double _base, double _height);
    double getArea() const;
};

void Triangle::setTriangle(double _base, double _height)
{
    base = _base; 
    height = _height;
}

double Triangle::getArea() const
{
    //상수화된 메서드에서는 멤버변수의 수정이 불가능하다.
    return base * height / 2;
}

int main(void)
{
    Triangle t1; //클래스 변수 선언 -> 객체 생성 -> Triangle의 인스턴스
    t1.setTriangle(4.5, 9.2);
    cout << "삼각형의 넓이는: " << t1.getArea() << "입니다.\n";

    Triangle t2; //Triangle 인스턴스 생성
    t2.setTriangle(1.1, 2.2);
    cout << "삼각형의 넓이는: " << t2.getArea() << "입니다.\n";

    cout << "\n삼각형의 밑변, 높이를 공백으로 구분해서 입력하세요: ";
    double b, h;
    cin >> b >> h;

    Triangle t3; //Triangle 인스턴스 생성
    t3.setTriangle(b, h);
    cout << "입력받은 삼각형의 넓이는 " << t3.getArea() << "입니다.\n";
    
    return 0;
}