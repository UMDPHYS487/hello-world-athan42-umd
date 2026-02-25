#include <iostream>

int main() {
    int num = 1;
    for (int i = 1 ; i < 11 ; i++) {
        num *= i;
        std::cout << "factorial of " << i << " is " << num << "\n";
    }
}