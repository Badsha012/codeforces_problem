#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        long long n;
        cin >> n; // Read the number n
        bool possible = false;

        
        for (long long k = 0; k <= n / 2020; ++k) {
            if (n - 2020 * k >= 0 && (n - 2020 * k) % 2021 == 0) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}