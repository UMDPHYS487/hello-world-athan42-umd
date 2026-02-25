#include <iostream>

int main() {
    std::cout << "Please enter an integer value: ";
    int a;
    std::cin >> a;
    switch (a%2 == 0) {
        case true:
            if (a<10) std::cout << a*a << "\n";
            else std::cout << "hahaha" << "\n";
            break;
        case false:
            std::cout << a/2 << "\n";
            break;
    }
}