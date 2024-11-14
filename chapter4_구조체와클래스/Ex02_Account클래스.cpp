#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

#define ID_LEN 14
#define PW_LEN 5
#define NAME_LEN 20

// 계좌를 관리하는 구조체
class Account
{
    public: //공개 : struct 키워드를 class로 변경 시 public:을 반드시 추가돼야 한다.
            //멤버변수 : attribute

    char accId[ID_LEN];  // 계좌번호는 13자리
    char pw[PW_LEN];     // 비밀번호는 4자리
    char name[NAME_LEN]; // 이름
    int balance;         // 잔액

    //멤버함수 : 매서드
    void showBalance() const;
    void deposit(int increase);
    void withdraw(int decrease);

};

//::범위지정 연산자
//메서드를 외부 정의 시 메서드명 앞에 클래스명을 쓴다.
void Account::showBalance() const
{
    // 매서드가 상수화되면 이 메서드 내에서는 멤버변수의 수정이 불가.
    cout << name << "고객님의 현재 잔액은 : " << balance << "원 입니다.";
}

void Account::deposit(int increase)
{
    balance += increase;
}

void Account::withdraw(int decrease)
{
    balance -= decrease;
}

int main(void)
{
    Account ac = {"123-56789-123", "0070", "홍길동", 5000}; // 4byte

    //클래스 멤버 접근 시
    //변수.멤버

    ac.showBalance();
    ac.deposit(8000);
    ac.showBalance();
    ac.withdraw(2000);
    ac.showBalance();

    return 0;
}