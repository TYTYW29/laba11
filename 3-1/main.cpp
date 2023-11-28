#include <iostream>
#include <cmath>
#include <vector>

int main() {
    double epsilon = 0.0001;
    double sum = 0.0;
    double term = 0.0;
    int i = 1;
    int a;
    int g;
    system("chcp 65001");
    int k;
    std::cout << "Введіть номер задачі ";
    std::cin >> a;
    switch (a) {
        case 1: {
            std::cout << "Введіть довільне k: ";
            std::cin >> k;

            int fact_k = 1;
            for (int i = 1; i <= k; i++) {
                fact_k *= i;
            }

            std::cout << "5! = " << fact_k << std::endl;

            double res = 0;
            for (int i = 1; i <= 100; i++) {
                res += 1.0 / 12.0;
            }
        }
            break;

        case 3:
        {
            std::cout << "Введіть довільне число g: ";
            std::cin >> g;

            std::vector<int> numbers;
            while (g % 2 == 0) {
                numbers.push_back(2);
                g = g / 2;
            }

            for (int i = 3; i <= sqrt(g); i = i + 2) {
                while (g % i == 0) {
                    numbers.push_back(i);
                    g = g / i;
                }
            }

            if (g > 2) {
                numbers.push_back(g);
            }

            std::cout << "Прості дільники числа " << g << ": ";
            for (int i = 0; i < numbers.size(); i++) {
                std::cout << numbers[i] << " ";
            }
            } std::cout << std::endl;
            break;

        default:
            std::cout << "Невірний номер задачі" << std::endl;
            break;
        case 2:
        {
            do {
                term = 1.0 / (i * i);
                sum += term;
                ++i;
            } while (term > epsilon);

            std::cout << "Відповідь: " << sum << std::endl;
        }
    }
    return 0;
}