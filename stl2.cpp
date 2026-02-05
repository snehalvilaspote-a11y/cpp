#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    unordered_map<char, int> freq;

    cout << "Enter a string: ";
    getline(cin, str);

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    // Display character frequencies
    cout << "\nCharacter frequencies:\n";
    for (auto it : freq) {
        if (it.first == ' ')
            cout << "' ' : " << it.second << endl;  // for space
        else
            cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
