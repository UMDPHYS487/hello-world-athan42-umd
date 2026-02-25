#include <iostream>

void factorial(int i) {
    int num = 1;
    for (int j = 1 ; j <= i ; j++) {
        num *= j;
    }
    std::cout << "factorial of " << i << " is " << num << "\n";
}

int main() {
    for (int i=0 ; i < 11 ; i++) {
        factorial(i);
    }
}
