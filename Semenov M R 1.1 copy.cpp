
#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    for (; A > B; ) {
        if (A % 2 == 0 && A / 2 >= B) {
            A /= 2;
            cout << ":2\n";
        } else {
            A--;
            cout << "-1\n";
        }
    }

    return 0;
}