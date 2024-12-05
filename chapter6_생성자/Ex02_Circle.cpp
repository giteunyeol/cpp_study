#include <iostream>
#include <string> //string클래스: 문자열 클래스

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Circle
{
public:
    Circle(string _name, string _flavor, double _radius)
    {
        name = _name;
        flavor = _flavor;
        radius = _radius;
        cout << "constructor call!\n";
    }

    double getArea() const
    {
        return 3.141592 * radius * radius;
    }

    void show() const
    {
        cout << "이름 : " << name << ", 맛 : " << flavor << ", 크기: " << getArea() << endl;
    }
private:
    string name;
    string flavor;
    double radius;
};

int main(void)
{

    Circle c1("도넛", "슈크림", 5), c2("와플", "생크림", 10), c3("와플", "생크림", 5);
    
    c1.show();
    c2.show();
    c3.show();
    
    return 0;
}