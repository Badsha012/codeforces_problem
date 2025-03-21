#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k; // Read n and k
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Read the gold amounts
        }

        int robinGold = 0; // Robin starts with 0 gold
        int count = 0; // Count of people who receive gold

        for (int i = 0; i < n; ++i) {
            if (a[i] >= k) {
                robinGold += a[i]; // Robin takes all gold
            } else if (a[i] == 0 && robinGold > 0) {
                robinGold--; // Give 1 gold to this person
                count++; // Increment the count of people who received gold
            }
        }

        cout << count << endl; // Output the result for this test case
    }

    return 0;
}