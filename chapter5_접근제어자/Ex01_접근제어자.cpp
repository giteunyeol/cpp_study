#include <iostream> //iostream 내에 string.h, stdio.h등 다수가 포함돼있음.

//#include <string.h> //c언어의 문자열함수 헤더파일 //strcmp
//#include <string> //c++에서 string클래스 헤더파일

using std::cout;
using std::cin;
using std::endl;

/*
접근제어자(Access Modifier)
public : 공개 : 어디서든 접근 가능한 멤버
private : 비공개 : 클래스 내에서만 접근 가능한 멤버

접근제어자 생략 시 private가 된다. 
*/
class Missile
{
public:
    void pwcheck(const char* inputPw)
    {
        if(strcmp(pw, inputPw) == 0) // 문자열이 같으면 0을 리턴
        {
            fire(); // 미사일 발사 메서드 호출
        }
        else
        {
            error();
        }
    }
private:
    void fire()
    {
        cout << "미사일을 발사 합니다!\n";
    }
    void error()
    {
        cout << "[경고!] 비밀번호 오류!\n";
    }

    char pw[5] = "0070";
};

int main(void)
{
    Missile mi; //인스턴스 생성.
    mi.pwcheck("0070");
    return 0;
}