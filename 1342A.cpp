#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        
        // Ensure x is the maximum and y is the minimum
        if (x < y) swap(x, y);
        
        // Calculate the cost
        long long cost_using_double = b * y + a * (x - y);
        long long cost_using_single = a * (x + y);
        
        // The minimum cost
        long long min_cost = min(cost_using_double, cost_using_single);
        
        cout << min_cost << endl;
    }
    
    return 0;
}