#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // сортировка пузырьком
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    int l = 0, r = a[n-1] - a[0];

    while (l < r) {
        int mid = (l + r) / 2;
        int days = 1, first = 0;

        for (int i = 1; i < n; i++) {
            if (a[i] - a[first] > mid) {
                days++;
                first = i;
            }
        }

        if (days <= d)
            r = mid;
        else
            l = mid + 1;
    }

    cout << l;

    return 0;
}