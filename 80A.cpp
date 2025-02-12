#include <iostream>
#include <vector>
using namespace std;

// Function to generate a list of prime numbers up to a given limit
vector<int> generatePrimes(int limit) {
    vector<int> primes;
    for (int num = 2; num <= limit; num++) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(num);
        }
    }
    return primes;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Generate prime numbers up to 50
    vector<int> primes = generatePrimes(50);

    // Find the next prime after n
    int nextPrime = -1;
    for (size_t i = 0; i < primes.size(); i++) {
        if (primes[i] == n) {
            if (i + 1 < primes.size()) {
                nextPrime = primes[i + 1];
            }
            break;
        }
    }

    // Check if m is the next prime after n
    if (nextPrime == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}