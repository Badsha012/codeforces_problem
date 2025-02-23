#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the number of buckets
        long long total_squares = 0; // Use long long to avoid overflow

        // Read the number of squares in each bucket and calculate the total
        for (int i = 0; i < n; ++i) {
            long long ai;
            cin >> ai;
            total_squares += ai;
        }

        // Check if total_squares is a perfect square
        long long sqrt_total = sqrt(total_squares);
        if (sqrt_total * sqrt_total == total_squares) {
            cout << "YES" << endl; // Can form a perfect square
        } else {
            cout << "NO" << endl; // Cannot form a perfect square
        }
    }

    return 0;
}