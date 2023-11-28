#include <iostream>
#include <cmath>

int main() {
    system("chcp 65001");
    double x = 1.5;
    double numerator = (5 + 5) * 3.1 * cos(x) * sin(2 * x);
    double denominator = (6 - 5) * (5 + 6);
    double result = numerator / denominator;
    std::cout << "Результат: " << result << std::endl;
    return 0;
}
