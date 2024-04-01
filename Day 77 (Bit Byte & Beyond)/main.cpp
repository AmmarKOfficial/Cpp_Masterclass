#include <iostream>
#include <bitset>

int main() {
    uint32_t a = 01110101010101110101010101010111;
    uint32_t b = 00000000000000000000000000000000;
    uint32_t c = 01010101010110101010101011010101;
    
    for (int i = 0; i < 32; ++i) {
        uint32_t mask = 1 << i; // create a mask with '1' at the i-th position
        std::cout << std::bitset<32>(mask) << " & " << std::bitset<32>(a);

        if (a & mask) {
            std::cout << " Mask Matched" << std::endl;
            b |= mask;
            c ^= mask; // Toggle the corresponding bit in c
        } else {
            std::cout << " Mask Mismatched" << std::endl;
        }
        std::cout << std::endl;
    }
    
    std::cout << "B : " << std::bitset<32>(b) << std::endl;
    std::cout << "A : " << std::bitset<32>(a) << std::endl;
    std::cout << "C : " << std::bitset<32>(c) << std::endl;
    
    std::cout<<"\n\n";

    return 0;
}
