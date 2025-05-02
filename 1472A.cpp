#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        long long w, h, n;
        cin >> w >> h >> n; // Read w, h, n
        
        long long pieces = 1; // Start with one piece (the original sheet)
        
        // Count how many times we can divide w by 2
        while (w % 2 == 0) {
            pieces *= 2; // Each division doubles the number of pieces
            w /= 2; // Halve the width
        }
        
        // Count how many times we can divide h by 2
        while (h % 2 == 0) {
            pieces *= 2; // Each division doubles the number of pieces
            h /= 2; // Halve the height
        }
        
        // Check if we can create at least n pieces
        if (pieces >= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}