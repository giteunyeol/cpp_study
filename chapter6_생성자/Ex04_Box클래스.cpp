#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Box
{
public:
    Box(int w, int h, char ch)
    {
        /*
        if(w > 0)
        {
            width = w;
        }
        if(h > 0)
        {
            height = h;
        }
        fill = ch;
        */
        //설정함수 호출
        setWidth(w);
        setHeight(w);
        setFill(ch);
    }
    void draw() const;

public: // setter
    inline void setWidth(int w)
    {
        if(w > 0)
        {
            width = w;
        }
    }
    inline void setHeight(int h)
    {
        if(h > 0)
        {
            height = h;
        }
    }
    inline void setFill(char ch)
    {
        fill = ch;
    }
public: // getter
    inline int getwidth() const
    {
        return width;
    }
    inline int getHeight() const
    {
        return height;
    }
    inline char getFill() const
    {
        return fill;
    }
private:
    int width = 0, height = 0;
    char fill = '\0';
};

void Box::draw() const
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << fill << " ";
        }
        cout << endl;
    }
}

int main(void)
{
    Box b1(7, 3, '%');
    b1.draw();

    cout << "세로의 길이를 몇으로 변경하시겠습니까? ";
    int height;
    cin >> height;

    //b1.height = height; // error이유 : Private멤버는 접근이 불가
    b1.setHeight(height);
    b1.draw();

    cout << "\n현재 설정된 문자는 " << b1.getFill()<< "입니다.\n";
    return 0;
}