#include <iostream>
using namespace std;

int main() {
    int N, K, L;
    cin >> N >> K >> L;

    int a[100];

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // Сортировка по убыванию
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (a[j] < a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    int sum = 0;
    int count = 0;
    int same = 0;
    int last = 1000000000;

    for (int i = 0; i < N && count < K; i++) {
        if (a[i] == last) {
            same++;
        } else {
            last = a[i];
            same = 1;
        }

        if (same <= L) {
            sum += a[i];
            count++;
        }
    }

    cout << sum;

    return 0;
}