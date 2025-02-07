#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n; // Read the state of Ilya's bank account

    // If n is positive, the maximum state is n itself
    if (n >= 0) {
        cout << n << endl;
    } else {
        // Calculate the two possible new balances
        long long option1 = n / 10; // Remove the last digit
        // Remove the second to last digit
        string str_n = to_string(n);
        // Remove the second to last character
        string option2_str = str_n.substr(0, str_n.length() - 2) + str_n.substr(str_n.length() - 1);
        long long option2 = stoll(option2_str); // Convert back to long long

        // Output the maximum of the three options
        cout << max(n, max(option1, option2)) << endl;
    }

    return 0;
}
