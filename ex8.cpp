#include <iostream>
#include <bitset>
int main() {
    std::bitset<8> b{0b01110010};
    std::cout << b << " (initial value)\n";
    std::bitset<8> a{0b11111111};
    b ^= a;
    std::cout << b << " (final value)\n";
}