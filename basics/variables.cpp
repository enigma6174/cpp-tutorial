/*
 * Variables are named memory locations in C++
 * A variable refers to the physical location in memory (RAM) where the data is stored
 * In C++ variables have a type assigned to them - what kind of data can be stored in the variable
 * Variables must be declared before they can be used
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Variables declared outside main() or any other function are global variables
// They can be accessed by main() or anywhere in the program
int global_x {0};

int main() {

    // All variables declared under main() are local variables

    int x1; // un-initialized variable
    int x2 = 21; // C-style initialization
    int x3 (50); // constructor initialization
    int x4 {421}; // C++11 list initialization syntax

    cout << "x1 " << x1 << endl;
    cout << "x2 " << x2 << endl;
    cout << "x3 " << x3 << endl;
    cout << "x4 " << x4 << endl;
    cout << "global_x " << global_x << endl;

    int x {0};
    int y {0};

    cout << "enter two numbers: ";
    cin >> x >> y;

    cout << "sum of " << x << " and " << y << " is " << (x+y) << endl;

    global_x += 100;
    cout << "global_x " << global_x << endl;

    return 0;
}
