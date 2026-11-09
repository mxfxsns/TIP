#include <iostream>
using namespace std;

int n, m;
char a[100][100];
bool used[100][100];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int ans = 0;

void dfs(int x, int y, int count) {
    if (x < 0 || x >= n || y < 0 || y >= m)
        return;

    if (a[x][y] == '1' || used[x][y])
        return;

    if (a[x][y] == 'P')
        count++;

    if (a[x][y] == 'E') {
        if (count > ans)
            ans = count;
        return;
    }

    used[x][y] = true;

    for (int i = 0; i < 4; i++) {
        dfs(x + dx[i], y + dy[i], count);
    }

    used[x][y] = false;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    dfs(0, 0, 0);

    cout << ans;

    return 0;
}