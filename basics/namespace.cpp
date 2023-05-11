/*
 * It is not recommended to import the entire std namespace
 * Use only the required namespaces
 */

#include <iostream>
#include <cmath>

// Not recommended
// using namespace std;

// Recommended approach
using std::cout;
using std::cin;
using std::endl;

int main() {
    int number;
    int number1, number2, number3;

    cout << "enter a number: ";

    // cin is the standard input stream (keyboard)
    // The extraction operator >> is used to extract values from the input
    cin >> number;

    // cout is the standard output stream (terminal)
    // The insertion operator << can be used to chain values to the output stream
    cout << "square of " << number << " is " << pow(number, 2) << endl;
    cout << "cube of " << number << " is " << pow(number, 3) << endl;

    cout << "enter three numbers: ";

    // The extraction operator can be chained to extract multiple input values separated by space
    cin >> number1 >> number2 >> number3;

    cout << "SUM(" << number1 << ", " << number2 << ", " << number3 << "): " << (number1 + number2 + number3) << endl;

    return 0;
}
