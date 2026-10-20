#include <iostream>
using namespace std;

double calc(double v, double t)
{
    double x = v * t;

    while (x >= 109)
        x -= 109;

    return x;
}

void print(double x)
{
    cout << x;
}

int main()
{
    double v, t;
    cin >> v >> t;
    double x = calc(v, t);

    print(x);

    return 0;
}