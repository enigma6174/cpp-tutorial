/*
 * This is a multi line C++ comment
 * Ideally this is used for documentation
 * Generally this type of comment is present on top of the C++ source file
 */

#include <iostream>

int main() {
     int number;

     // This is a single line C++ comment
     std::cout << "enter a number between 1 and 100: ";
     std::cin >> number;

     // Checking for even or odd number
     if (number % 2 == 0) {
         std::cout << number << " is even number!" << std::endl;
     }
     else {
         std::cout << number << " is odd number!" << std::endl;
     }

     // Return is optional for main()
     return 0;
}
