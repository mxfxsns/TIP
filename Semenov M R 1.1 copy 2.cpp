#include <iostream>

using namespace std;


int countMushrooms(char field[35][35], int n, int m, int row, int col);

int main() {

    // // 1
    // int n;
    // cin >> n;
    // // Вложенные циклы для строк (i) и столбцов (j)
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
            
    //         // Проверяем положение относительно побочной диагонали:
    //         // Сумма индексов (i + j) определяет положение элемента:
    //         if (i + j < n - 1) {
    //             // Выше побочной диагонали
    //             cout << 0;
    //         } 
    //         else if (i + j == n - 1) {
    //             // На побочной диагонали
    //             cout << 1;
    //         } 
    //         else {
    //             // Ниже побочной диагонали
    //             cout << 2;
    //         }

    //         // Выводим пробел между числами в строке
    //         if (j < n - 1) {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl; // Переход на новую строку
    // }
    
    // // 2.1
    // int n, m, w;
    // cin >> n >> m >> w;

    // // Создаем матрицу символов
    // char field[35][35];

    // // Заполняем поле нулями
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         field[i][j] = '0';
    //     }
    // }

    // // Считываем грибы
    // for (int k = 0; k < w; k++) {
    //     int r, c;
    //     cin >> r >> c;
    //     // Минус 1, так как в массивах нумерация с 0
    //     field[r - 1][c - 1] = '*';
    // }

    // // Считаем соседей для каждой клетки
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         // Если в клетке гриб, её не трогаем
    //         if (field[i][j] == '*') {
    //             continue;
    //         }

    //         int count = 0;

    //         // Проверяем 8 соседей вокруг
    //         for (int di = -1; di <= 1; di++) {
    //             for (int dj = -1; dj <= 1; dj++) {
    //                 if (di == 0 && dj == 0) continue; // Саму клетку пропускаем

    //                 int ni = i + di;
    //                 int nj = j + dj;

    //                 // Проверка, что не вышли за границы поля
    //                 if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
    //                     if (field[ni][nj] == '*') {
    //                         count++;
    //                     }
    //                 }
    //             }
    //         }

    //         field[i][j] = '0' + count; // Переводим число в символ
    //     }
    // }

    // // Выводим результат без пробелов
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << field[i][j];
    //     }
    //     cout << endl;
    // }






    // // 2.2
    // int n, m, w;
    // cin >> n >> m >> w;

    // char field[35][35];

    // // Инициализация
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         field[i][j] = '0';
    //     }
    // }

    // // Считываем грибы
    // for (int i = 0; i < w; i++) {
    //     int r, c;
    //     cin >> r >> c;
    //     field[r - 1][c - 1] = '*';
    // }

    // // Вычисляем значения и выводим
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         if (field[i][j] == '*') {
    //             cout << '*';
    //         } else {
    //             int ans = countMushrooms(field, n, m, i, j);
    //             cout << ans;
    //         }
    //     }
    //     cout << endl;
    // }
 

    // 3
    int x, n;
    cin >> x >> n;

    string s = to_string(x);

    for (int k = 1; k < n; k++) {
        string res = "";

        for (int i = 0; i < s.length();) {
            int cnt = 1;

            while (i + 1 < s.length() && s[i] == s[i + 1]) {
                cnt++;
                i++;
            }

            res += to_string(cnt);
            res += s[i];
            i++;
        }

        s = res;
    }

    cout << s << endl;



    return 0;
}

// Функция для подсчета количества грибов вокруг клетки (i, j)  для второго споспоба
int countMushrooms(char field[35][35], int n, int m, int row, int col) {
    int cnt = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            // Пропускаем саму клетку
            if (i == row && j == col) continue;

            // Проверяем границы и наличие гриба
            if (i >= 0 && i < n && j >= 0 && j < m) {
                if (field[i][j] == '*') {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}