/*
 * Primitive types are data types provided by C++ itself
 * In C++ the size of the primitive types depend on the platform and the compiler
 * Do not define constants using #define pre-processor directive in modern C++
 */

#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main() {

    cout << "sizeof information" << endl;
    cout << "==============================" << endl;

    cout << "char is " << sizeof(char) << " bytes" << endl;
    cout << "int is " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int is " << sizeof(unsigned int) << " bytes" << endl;
    cout << "float is " << sizeof(float) << " bytes" << endl;
    cout << "double is " << sizeof(double) << " bytes" << endl;
    cout << "short is " << sizeof(short) << " bytes" << endl;
    cout << "long is " << sizeof(long) << " bytes" << endl;

    cout << "\nclimits information (min max)" << endl;
    cout << "==============================" << endl;

    cout << "char " << CHAR_MIN << " " << CHAR_MAX << endl;
    cout << "int " << INT_MIN << " " << INT_MAX << endl;
    cout << "short " << SHRT_MIN << " " << SHRT_MAX << endl;
    cout << "long " << LONG_MIN << " " << LONG_MAX << endl;
    cout << "long long " << LLONG_MIN << " " <<LLONG_MAX << endl;

    // Character data type
    char character {'A'};
    cout << "\nsizeof(char) " << sizeof character << endl;
    cout << "value(char) " << character << endl;

    // Unsigned integer type
    unsigned int unsigned_int {10};
    cout << "\nsizeof(unsigned int) " << sizeof unsigned_int << endl;
    cout << "value(unsigned int) " << unsigned_int << endl;

    // Signed integer type
    int signed_integer {-10};
    cout << "\nsizeof(int) " << sizeof signed_integer << endl;
    cout << "value(int) " << signed_integer << endl;

    // Long integer type
    long long_integer {1234567890};
    cout << "\nsizeof(long) " << sizeof long_integer << endl;
    cout << "value(long) " << long_integer << endl;

    // C++14 allows us to use ticks to represent large numbers
    long large_number {255'654'323'305};
    cout << "\nnumber: " << large_number << endl;

    // Long long integer type
    long long long_long {2'123'450'200'675'225};
    cout << "\nsizeof(long long) " << sizeof long_long << endl;
    cout << "value(long long) " << long_long << endl;

    // Floating point type
    float fraction {20.123};
    cout << "\nsizeof(float) " << sizeof fraction << endl;
    cout << "value(float) " << fraction << endl;

    // Double type
    double large_fraction {23.1234};
    cout << "\nsizeof(double) " << sizeof large_fraction << endl;
    cout << "value(double) " << large_fraction << endl;

    // Long double type
    long double very_large_fraction {231.12345678900};
    cout << "\nsizeof(long double) " << sizeof very_large_fraction << endl;
    cout << "value(long double) " << very_large_fraction << endl;

    // Long double type
    long double exponent {23e24};
    cout << "\nsizeof(long double) " << sizeof exponent << endl;
    cout << "value(long double) " << exponent << endl;

    // Boolean type
    bool flag {false};
    cout << "\nsizeof(bool) " << sizeof flag << endl;
    cout << "value(bool) " << flag << endl;

    // An example of overflow
    short num_1 {30000};
    short num_2 {250};

    // C-style assignment is required to bypass compiler error
    short num_3 = num_1 * num_2;
    cout << num_1 << "x" << num_2 << " = " << num_3 << endl;

    // Constants will not change values
    const float pi {3.14159};
    const int days_in_year {365};
    const char first_letter_of_alphabet {'a'};

    cout << "\nconstant value examples" << endl;
    cout << "==============================" << endl;
    cout << "pi " << pi << endl;
    cout << "days in a year " << days_in_year << endl;
    cout << "first letter of alphabet " << first_letter_of_alphabet << endl;

    return 0;
}
