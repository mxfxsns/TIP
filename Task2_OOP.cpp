#include <iostream>
using namespace std;

class Biker
{
public:
    double v, t;

    void input()
    {
        cin >> v >> t;
    }

    void calc()
    {
        double x = v * t;

        while (x >= 109)
            x -= 109;

        cout << x;
    }
};

int main()
{
    Biker b;

    b.input();
    b.calc();

    return 0;
}