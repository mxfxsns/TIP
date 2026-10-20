#include <iostream>
using namespace std;

class Number
{
public:
    int n;

    void input()
    {
        cin >> n;
    }

    void calc()
    {
        cout << (n / 10) % 10;
    }
};

int main()
{
    Number a;
    a.input();
    a.calc();

    return 0;
}