#include <iostream>
using namespace std;

int main()
{
    double v, t;
    cin >> v >> t;
    double x = v * t;

    while (x >= 109)
        x -= 109;
    cout << x;
    
    return 0;
}