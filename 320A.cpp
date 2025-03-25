#include <iostream>
#include <string>

using namespace std;

bool isMagicNumber(const string& number) {
    int i = number.length() - 1; // Start from the end of the string

    while (i >= 0) {
        // Check for "144"
        if (i >= 2 && number[i] == '4' && number[i - 1] == '4' && number[i - 2] == '1') {
            i -= 3; // Move back 3 positions
        }
        // Check for "14"
        else if (i >= 1 && number[i] == '4' && number[i - 1] == '1') {
            i -= 2; // Move back 2 positions
        }
        // Check for "1"
        else if (number[i] == '1') {
            i -= 1; // Move back 1 position
        }
        // If none of the conditions are met, it's not a magic number
        else {
            return false;
        }
    }

    return true; // If we successfully processed the entire string
}

int main() {
    string n;
    cin >> n; // Read the input number as a string

    if (isMagicNumber(n)) {
        cout << "YES" << endl; // It's a magic number
    } else {
        cout << "NO" << endl; // It's not a magic number
    }

    return 0;
}