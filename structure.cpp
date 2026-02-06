#include <iostream>
using namespace std;

// Define structure
struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Create array of structures
    Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Name: ";
        cin >> students[i].name;

        cout << "Roll Number: ";
        cin >> students[i].rollNo;

        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Display student details
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNo << endl;
        cout << "Marks: " << students[i].marks << endl;
    }

    return 0;
}
