#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        string s;
        cin >> s; // Read the binary string
        int count0 = 0, count1 = 0;

        // Count the number of '0's and '1's
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }

        // Determine the minimum of count0 and count1
        int moves = min(count0, count1);

        // If moves is odd, Alice wins; if even, Bob wins
        if (moves % 2 == 1) {
            cout << "DA" << endl; // Alice wins
        } else {
            cout << "NET" << endl; // Bob wins
        }
    }
    return 0;
}