#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    cout << "Prime numbers between 1 and 100 are:\n";

    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
