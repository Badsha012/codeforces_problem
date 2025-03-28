#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the value of n for each test case
        
        vector<int> permutation(n);
        // Create the permutation by shifting elements
        for (int i = 0; i < n; ++i) {
            permutation[i] = (i + 1) % n + 1; // Shift right and wrap around
        }
        
        // Output the permutation
        for (int i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << endl; // New line after each test case
    }
    return 0;
}