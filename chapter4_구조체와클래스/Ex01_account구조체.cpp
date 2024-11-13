#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

#define ID_LEN 14
#define PW_LEN 5
#define NAME_LEN 20

//계좌를 관리하는 구조체
struct Account
{
    char accId[ID_LEN]; //계좌번호는 13자리
    char pw[PW_LEN]; //비밀번호는 4자리
    char name[NAME_LEN]; //이름
    int balance; //잔액
};

//래퍼런스를 상수화 시키면 ref로 구조체 멤버의 수정이 불가능하다.
void showBalance(const Account &ref)
{
    cout << ref.name << "고객님의 현재 잔액은 : "  << ref.balance << "원 입니다.";
}

void deposit(Account & ref, int increase)
{
    ref.balance += increase;
}

void withdraw(Account & ref, int decrease)
{
    ref.balance -= decrease;
}

int main(void)
{
    Account ac = {"123-56789-123", "0070", "홍길동", 5000}; //4byte 
    
    showBalance(ac);
    deposit(ac, 8000);
    showBalance(ac);
    withdraw(ac, 2000);
    showBalance(ac);

    return 0;
}