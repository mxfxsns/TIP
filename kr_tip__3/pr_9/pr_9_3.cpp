
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Переводим десятичное число в двоичное
string toBinary(string number) {
    string binary = "";

    // Пока десятичное число не равно нулю
    while (number != "0") {
        string quotient = "";
        int remainder = 0;

        // Делим десятичное число на 2
        for (char ch : number) {
            int digit = ch - '0';

            int current = remainder * 10 + digit;

            int result = current / 2;
            remainder = current % 2;

            // Не добавляем ведущие нули в частное
            if (!quotient.empty() || result != 0) {
                quotient += char(result + '0');
            }
        }

        // Остаток от деления становится цифрой двоичного числа
        binary += char(remainder + '0');

        // Заменяем число частным
        if (quotient.empty()) {
            number = "0";
        }
        else {
            number = quotient;
        }
    }

    // Двоичные цифры получились в обратном порядке
    string result = "";

    for (int i = binary.length() - 1; i >= 0; i--) {
        result += binary[i];
    }

    return result;
}

int main() {
    // Открываем файл для чтения
    ifstream input("input.txt");

    // Считываем строку
    string text;
    getline(input, text);

    // Строка для результата
    string result = "";

    // Перебираем все символы
    for (int i = 0; i < text.length(); i++) {

        // Если символ является цифрой
        if (text[i] >= '0' && text[i] <= '9') {

            // Собираем целое число
            string number = "";

            while (i < text.length() &&
                   text[i] >= '0' && text[i] <= '9') {

                number += text[i];
                i++;
            }

            // Переводим число в двоичную систему
            result += toBinary(number);

            // Возвращаемся на символ назад
            i--;
        }
        else {
            // Если символ не цифра, оставляем его
            result += text[i];
        }
    }

    // Открываем файл для записи
    ofstream output("output.txt");

    // Записываем результат
    output << result;

    return 0;
}
