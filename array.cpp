
#include <iostream>
using namespace std;

int main() {
    int grades[5];
    int sum = 0;
    float average;

    // Input 5 student grades
    cout << "Enter grades of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cin >> grades[i];
        sum += grades[i];
    }

    // Calculate average
    average = sum / 5.0;

    // Display result
    cout << "Average grade = " << average << endl;

    return 0;
}
