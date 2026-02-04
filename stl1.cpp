#include <iostream>
#include <map>
using namespace std;

int main() {
    // Declare a map to store student ID and grade
    map<int, char> studentGrades;

    // Insert values into the map
    studentGrades[101] = 'A';
    studentGrades[102] = 'B';
    studentGrades[103] = 'A';
    studentGrades[104] = 'C';

    // Display student IDs and their grades
    cout << "Student ID and Grades:" << endl;

    for (auto it = studentGrades.begin(); it != studentGrades.end(); it++) {
        cout << "Student ID: " << it->first 
             << " | Grade: " << it->second << endl;
    }

    return 0;
}
