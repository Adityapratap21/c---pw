// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int x;
// //     x=7;
// //     cout<<x<<endl;
// //     x=10;
// //     cout<<x<<endl;
// //     x =x +10;
// //     cout<<x;
// // }
// #include <iostream>

// void decimalToBinary(int decimal) {
//     if (decimal == 0) {
//         std::cout << "Binary: 0" << std::endl;
//         return;
//     }

//     int binary[32]; // Assuming a 32-bit binary representation
//     int index = 0;

//     while (decimal > 0) {
//         binary[index++] = decimal % 2;
//         decimal /= 2;
//     }

//     std::cout << "Binary: ";
//     for (int i = index - 1; i >= 0; i--) {
//         std::cout << binary[i];
//     }

//     std::cout << std::endl;
// }

// int main() {
//     int decimalNumber;

//     std::cout << "Enter a decimal number: ";
//     std::cin >> decimalNumber;

//     decimalToBinary(decimalNumber);

//     return 0;
// }

#include <iostream>
#include <bitset>

void decimalFloatToBinary(float decimalFloat) {
    // Interpret the bits of the floating-point number as an integer
    unsigned int binaryRepresentation = *reinterpret_cast<unsigned int*>(&decimalFloat);

    // Use std::bitset to convert the integer representation to binary
    std::bitset<sizeof(float) * 8> binaryBits(binaryRepresentation);

    std::cout << "Binary: " << binaryBits << std::endl;
}

int main() {
    float decimalFloatNumber;

    std::cout << "Enter a decimal float number: ";
    std::cin >> decimalFloatNumber;

    decimalFloatToBinary(decimalFloatNumber);

    return 0;
}

