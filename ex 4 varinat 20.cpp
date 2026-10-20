#include <iostream>
#include <cmath>

using namespace std;

bool canBuildTriangle(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) return false;
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void solvePolynomial(double a, double b, double c) {
    if (a < 0.000001 && a > -0.000001) {
        a = 0;
    }

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "x - любое" << endl;
            } else {
                cout << "Нет корней" << endl;
            }
        } else {
            cout << "x = " << -c / b << endl;
        }
        return;
    }

    double d = b * b - 4 * a * c;

    if (d < 0) {
        cout << "Нет корней" << endl;
    } else if (d == 0) {
        cout << "x = " << -b / (2 * a) << endl;
    } else {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b, c;
    cin >> a >> b >> c;

    int symbol;
    cin >> symbol;

    switch (symbol) {
        case 1:
            cout << "Семенов Максим" << endl;
            break;

        case 2:
            solvePolynomial(a, b, c);
            break;

        case 3: {
            double s1, s2, s3;
            cin >> s1 >> s2 >> s3;

            if (canBuildTriangle(s1, s2, s3)) {
                cout << "Можно" << endl;
            } else {
                cout << "Нельзя" << endl;
            }
            break;
        }

        default:
            cout << "Ошибка ввода" << endl;
            break;
    }

    return 0;
}