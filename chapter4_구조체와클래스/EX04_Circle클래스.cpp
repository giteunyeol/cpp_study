#include <iostream>

using std ::cout;
using std ::cin;
using std ::endl;

class Circle
{
    public:
    //instance variable
    double radius = 0;
    const double PI = 3.141592;

    //method
    void setRadius(double rad);
    double getArea() const;
    double getCircumference() const;
};

void Circle::setRadius(double rad)
{
    radius = rad; 
}

double Circle::getArea() const
{
    return PI * radius * radius; 
}

double Circle::getCircumference() const
{
    return 2 * PI * radius;
}

int main(void)
{
    Circle C1; //Circle 인스턴스 생성
    C1.setRadius(8.8);
    cout << "원의 넓이는 :" << C1.getArea() << "입니다.\n";

    Circle C2; //Circle 인스턴스 생성
    C2.setRadius(22.4);
    cout << "원의 둘레는 : " << C2.getCircumference() << "입니다.\n";
    return 0;
}