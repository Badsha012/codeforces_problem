#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the input integer n

    vector<int> primes; // Vector to store the prime numbers

    if (n % 2 == 0) {
        // If n is even, we can use n/2 twos
        for (int i = 0; i < n / 2; i++) {
            primes.push_back(2);
        }
    } else {
        // If n is odd, we can use (n-3)/2 twos and one three
        for (int i = 0; i < (n - 3) / 2; i++) {
            primes.push_back(2);
        }
        primes.push_back(3); // Add one three
    }

    // Output the number of primes
    cout << primes.size() << endl;

    // Output the primes
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}