#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    dp[0][0] = a[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) continue;

            int up = INT_MIN, left = INT_MIN;

            if (i > 0) up = dp[i-1][j];
            if (j > 0) left = dp[i][j-1];

            dp[i][j] = max(up, left) + a[i][j];
        }
    }

    int i = n-1, j = m-1;

    while (i != 0 || j != 0) {
        cout << i << " " << j << endl;

        if (i > 0 && (j == 0 || dp[i-1][j] > dp[i][j-1]))
            i--;
        else
            j--;
    }

    cout << "0 0";

    return 0;
}