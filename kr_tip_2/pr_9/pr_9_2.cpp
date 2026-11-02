
#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Открываем первый файл
    std::ifstream input1("input1.txt");

    // Открываем второй файл
    std::ifstream input2("input2.txt");

    // Считываем весь текст из первого файла в строку X
    std::string X((std::istreambuf_iterator<char>(input1)),
                  std::istreambuf_iterator<char>());

    // Считываем весь текст из второго файла в строку Y
    std::string Y((std::istreambuf_iterator<char>(input2)),
                  std::istreambuf_iterator<char>());

    // Проверяем, содержится ли Y в X
    std::string result;

    if (X.find(Y) != std::string::npos) {
        result = "yes";
    }
    else {
        result = "no";
    }

    // Открываем файл для записи результата
    std::ofstream output("output.txt");

    // Записываем результат
    output << result;

    return 0;
}
