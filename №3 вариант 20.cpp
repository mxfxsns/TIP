#include <iostream>

int main() {
	double a;
	double b;

	std::cout << "a, b = ";
	std::cin >> a >> b;

    double result = 5.8 * a - 14.4 * b;
	std::cout << result << '\n';

	return 0;
}
