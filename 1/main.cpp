#include <iostream>
#include <string>
int main() {
    int a;
    system("chcp 65001");
    int b;
    int c;
    std::cout<< "Введіть рішення задачі (1= через switch),(2= через if)";
    std::cin >> a;
    switch (a){


        case 1:
            std::cout<< "Введіть номер студента до 5:";
            std::cin >> b;
            switch (b) {
                case 1:
                    std::cout << "Антон Бабенко , середній бал: 61 ";
                    break;
                case 2:
                    std::cout << "Паша Земляний , середній бал: 30";
                    break;
                case 3:
                    std::cout << "Лев Кучинський , середній бал: 51";
                    break;
                case 4:
                    std::cout << "Ярослав Дідківський , середній бал: 62";
                    break;
                case 5:
                    std::cout << "Нікіта Гаращук , середній бал: 60";
                    break;


            }
            break;
        case 2:
            std::cout<< "Введіть номер студента до 5:";
            std::cin >> c;
            if (c == 1) {
                std::cout << "Антон Бабенко, середній бал: 61";
            } else if (c == 2) {
                std::cout << "Паша Земляний, середній бал: 30";
            } else if (c == 3) {
                std::cout << "Лев Кучинський, середній бал: 51";
            } else if (c == 4) {
                std::cout << "Ярослав Дідківський, середній бал: 62";
            } else if (c == 5) {
                std::cout << "Нікіта Гаращук, середній бал: 60";
            } else {
                std::cout << "Неправильний вибір студента";
            }
            break;
    }
        
    
}
