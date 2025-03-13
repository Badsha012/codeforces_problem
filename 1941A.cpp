#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k; // Read n, m, k
        vector<int> b(n), c(m);
        
        // Read coins in the left pocket
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        // Read coins in the right pocket
        for (int i = 0; i < m; i++) {
            cin >> c[i];
        }
        
        int count = 0; // To count valid pairs
        // Check all pairs of coins
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (b[i] + c[j] <= k) {
                    count++; // Valid pair found
                }
            }
        }
        
        cout << count << endl; // Output the result for this test case
    }
    return 0;
}