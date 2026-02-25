#include <iostream>

int factorial(int i) {
    int num = 1;
    for (int j = 1 ; j <= i ; j++) {
        num *= j;
    }
    return num;
}

int main() {
    std::cout << "Please enter an integer value: ";
    int a;
    std::cin >> a;
    std::cout << "The number you entered is " << a << " and its factorial is " << factorial(a) << "\n";
    return 0;
}