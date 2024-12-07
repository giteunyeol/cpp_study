#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//RGB색상 클래스
class RGB
{
public:
    RGB() : RGB(255, 255, 255)//타겟 생성자 호출 , 이 생성자는 위임생성자가 된다.
    {
        /*
        red = 255;
        green = 255;
        blue = 255;
        */
        cout << "constructor call!\n";
    }
    RGB(int r, int g, int b) //이 생성자는 타겟 생성자가 된다.
    {
        /*
        if(validatecolorvalue(r))
            red = r;
        if (validatecolorvalue(g))
            green = g;
        if (validatecolorvalue(b))
            blue = b;
         */
        setRed(r); //red값을 설정하는 메서드 호출
        setGreen(g); //green값을 설정하는 메서드 호출
        setBlue(b); //blue값을 설정하는 메서드 호출 --- 중복을 피함

        cout << "constructor call!\n";
    }
    
    inline void showColor() const
    {
        cout << "(" << red << ", " << green << ", " << blue << " )\n";
    }
    inline string getColor() const
    {
        //to_string: 문자열 타입으로 변환하는 메서드 함수.
        //출력하려는 문자열을 만들어서 리턴
        string s1 = "abc";
        string s2 = "def";
        string str = s1 + s2;
        return "(" + std::to_string(red) + ", " + std::to_string(green) + ", " + std::to_string(blue) + " )";
    }
public: // setter메서드 : instance variable의 값을 변경해주는 메서드
    inline void setRed(int r)
    {
        if(validatecolorvalue(r))
        {
            red = r;
        }
    }
    inline void setGreen(int g)
    {
        if (validatecolorvalue(g))
        {
            green = g;
        }
    }
    inline void setBlue(int b)
    {
        if (validatecolorvalue(b))
        {
            blue = b;
        }
    }

public : //getter: instrance variable의 값을 리턴하는 메서드
    inline int getRed() { return red;}
    inline int getGreen() { return green;}
    inline int getBlue() { return blue;}
private:
    inline bool validatecolorvalue(int value)
    {
        /*
        if(value >= 0 && value <= 255)
        {
            return true;
        }
        else
        {
            return false;
        }
        */
       return (value >=0 && value <= 255); //연산결과를 리턴
    }

private:
    int red = 255, green = 255, blue = 255;
};

int main(void)
{
    RGB r1(23, 45, 65); // 인스턴스생성
    RGB r2(123, 48, 165); // 인스턴스생성
    RGB r3(-3, 45, 65); // 인스턴스생성

    //r1.red = 100; // error: private멤버는 클래스 외부에서 접근 불가능
    r1.setRed(100);
    //cout << "r1의 변경된 red값은 " << r1.red << "입니다.\n"; //error
    cout << "r1의 변경된 red값은 " << r1.getRed() << "입니다.\n";

    /*
    cout << "r1";
    r1.showColor();
    cout << "r2";
    r2.showColor();
    cout << "r3";
    r3.showColor();
    */

   cout << "r1" << r1.getColor() << endl;
   cout << "r2" << r2.getColor() << endl;
   cout << "r3" << r3.getColor() << endl;

   return 0;
}