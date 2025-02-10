#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c; // Read the three digits

        // Check for "STAIR"
        if (a < b && b < c) {
            cout << "STAIR" << endl;
        }
        // Check for "PEAK"
        else if (a < b && b > c) {
            cout << "PEAK" << endl;
        }
        // If neither condition is satisfied
        else {
            cout << "NONE" << endl;
        }
    }
    return 0;
}