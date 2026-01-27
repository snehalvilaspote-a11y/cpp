#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    int i = 1;
    while (i <= num) {
        factorial = factorial * i;
        i++;
    }

    cout << "Factorial of " << num << " is: " << factorial;

    return 0;
}
