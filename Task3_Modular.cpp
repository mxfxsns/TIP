#include <iostream>
using namespace std;

int tens(int n)
{
    return (n / 10) % 10;
}

void print(int x)
{
    cout << x;
}

int main()
{
    int n;
    cin >> n;
    int x = tens(n);

    print(x);

    return 0;
}