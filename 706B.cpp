#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n; // Number of shops
    vector<int> prices(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> prices[i]; // Prices of the bottles
    }
    
    sort(prices.begin(), prices.end()); // Sort the prices
    
    int q;
    cin >> q; // Number of days
    vector<int> results(q);
    
    for (int i = 0; i < q; ++i) {
        long long m;
        cin >> m; // Budget for the i-th day
        
        // Use upper_bound to find the number of shops with price <= m
        results[i] = upper_bound(prices.begin(), prices.end(), m) - prices.begin();
    }
    
    // Output the results
    for (int i = 0; i < q; ++i) {
        cout << results[i] << endl;
    }
    
    return 0;
}