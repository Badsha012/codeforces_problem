#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        string s;
        cin >> s; // Read the string for the current test case
        int n = s.length();
        
        // Check if the length is even
        if (n % 2 == 0) {
            // Get the two halves
            string first_half = s.substr(0, n / 2);
            string second_half = s.substr(n / 2, n / 2);
            
            // Check if both halves are equal
            if (first_half == second_half) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl; // If length is odd, it can't be square
        }
    }
    return 0;
}