#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n, k;
        cin >> n >> k; // Size of array and the element to check
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Read the array elements
        }

        // Count occurrences of k
        int count_k = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                count_k++;
            }
        }

        // If k does not appear at all, answer is NO
        if (count_k == 0) {
            cout << "NO" << endl;
            continue;
        }

        // Check for the most common element condition
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                // Start counting from this position
                unordered_map<int, int> count_map;
                int max_count = 0;
                count_map[k] = 0;

                for (int j = i; j < n; j++) {
                    count_map[a[j]]++;
                    max_count = max(max_count, count_map[a[j]]);

                    // Check if k is the most common
                    if (count_map[k] > max_count - count_map[k]) {
                        found = true;
                        break;
                    }
                }
            }
            if (found) break;
        }

        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}