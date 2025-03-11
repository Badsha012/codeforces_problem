#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    vector<long long> results; // To store results for each test case

    for (int i = 0; i < t; ++i) {
        long long x, y, n;
        cin >> x >> y >> n; // Read x, y, n for each test case

        // Calculate the maximum k
        long long m = (n - y) / x; // Maximum m
        long long k = m * x + y; // Calculate k

        results.push_back(k); // Store the result
    }

    // Output all results
    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}