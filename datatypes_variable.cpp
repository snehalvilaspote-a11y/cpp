#include <iostream>
using namespace std;

int main() {
    // 1️⃣ Declare variables of different data types
    int a = 10;
    float b = 5.5;
    double c = 12.345;
    char d = 'X';
    bool e = true;

    // 2️⃣ Display their values
    cout << "Integer a = " << a << endl;
    cout << "Float b = " << b << endl;
    cout << "Double c = " << c << endl;
    cout << "Character d = " << d << endl;
    cout << "Boolean e = " << e << endl;  // 1 means true, 0 means false

    cout << "\n--- Simple Arithmetic Operations ---\n";

    // Integer arithmetic
    int sumInt = a + 20;
    int diffInt = a - 3;
    int mulInt = a * 2;
    int divInt = a / 3;
    cout << "Integer Sum: " << sumInt << endl;
    cout << "Integer Difference: " << diffInt << endl;
    cout << "Integer Multiplication: " << mulInt << endl;
    cout << "Integer Division: " << divInt << endl;

    // Float / Double arithmetic
    float sumFloat = b + 2.5;
    double divDouble = c / 3.0;
    cout << "Float Sum: " << sumFloat << endl;
    cout << "Double Division: " << divDouble << endl;

    // Char arithmetic (ASCII value)
    char nextChar = d + 1; // 'X' + 1 = 'Y'
    cout << "Next character after " << d << " is " << nextChar << endl;

    // Boolean arithmetic
    bool notE = !e; // logical NOT
    cout << "Logical NOT of e: " << notE << endl;

    return 0;
}
