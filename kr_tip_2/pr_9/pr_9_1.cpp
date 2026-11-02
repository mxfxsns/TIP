#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream input("input.txt");

    std::string text((std::istreambuf_iterator<char>(input)),
                     std::istreambuf_iterator<char>());

    std::string forbidden = "user agreement";
    std::string result;

    for (char ch : text) {
        char lower_ch = ch;

        if (ch >= 'A' && ch <= 'Z') {
            lower_ch = ch + 32;
        }

        if (forbidden.find(lower_ch) == std::string::npos) {
            result += ch;
        }
    }

    std::ofstream output("output.txt");
    output << result;

    return 0;
}