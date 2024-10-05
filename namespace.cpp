#include <iostream>

// using namespace std;
using std::cin;
using std::cout;
using std::endl;

namespace No1
{
    void fun()
    {
        cout << "fun1";
    }
}
namespace No2
{
    void fun()
    {
        cout << "fun2";
    }
}
namespace No3
{
    void fun()
    {
        cout << "fun3";
    }
}

using namespace No3;

int main(void)
{
    fun();

    return 0;
}