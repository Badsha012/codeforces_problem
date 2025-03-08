#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

const int MAX_PRIME = 1e6; // We will find primes up to 10^6

// Function to generate all primes up to MAX_PRIME using Sieve of Eratosthenes
vector<int> sieve(int max) {
    vector<bool> is_prime(max + 1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers

    for (int i = 2; i <= max; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = (long long)i * i; j <= max; j += i) {
                is_prime[j] = false; // Mark multiples of i as non-prime
            }
        }
    }
    return primes;
}

int main() {
    int n;
    cin >> n; // Read the number of integers
    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i]; // Read each integer
    }

    // Generate all primes up to MAX_PRIME
    vector<int> primes = sieve(MAX_PRIME);
    set<long long> t_primes; // Set to store T-primes

    // Calculate T-primes (squares of primes)
    for (int prime : primes) {
        long long t_prime = (long long)prime * prime;
        t_primes.insert(t_prime);
    }

    // Check each number and output whether it is a T-prime
    for (long long number : x) {
        if (t_primes.find(number) != t_primes.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}