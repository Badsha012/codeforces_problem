#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        long long n;
        cin >> n; // Read the integer n

        if (n == 1) {
            cout << 0 << endl; // If n is already 1, no moves needed
            continue;
        }

        int moves = 0; // To count the number of moves
        while (n % 6 == 0) {
            n /= 6; // Divide by 6
            moves++; // Count this move
        }

        // Now n is no longer divisible by 6
        while (n % 3 == 0) {
            n *= 2; // Multiply by 2 to make it divisible by 6
            moves++; // Count this move
            if (n % 6 == 0) {
                n /= 6; // If it becomes divisible by 6, divide by 6
                moves++; // Count this move
            }
        }

        // After all operations, check if we reached 1
        if (n == 1) {
            cout << moves << endl; // Print the total moves
        } else {
            cout << -1 << endl; // Impossible to reach 1
        }
    }
    return 0;
}