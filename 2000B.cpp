#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the number of seats and passengers
        vector<int> a(n);
        unordered_set<int> occupied; // To track occupied seats

        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Read the seat numbers occupied by passengers
        }

        bool valid = true; // Flag to check if the seating is valid

        // Mark the first passenger's seat as occupied
        occupied.insert(a[0]);

        // Check the subsequent passengers
        for (int i = 1; i < n; ++i) {
            int currentSeat = a[i];
            // Check if the current seat has at least one occupied neighbor
            if (occupied.count(currentSeat - 1) == 0 && occupied.count(currentSeat + 1) == 0) {
                valid = false; // Invalid seating
                break;
            }
            occupied.insert(currentSeat); // Mark the current seat as occupied
        }

        // Output the result for the current test case
        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}