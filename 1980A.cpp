#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m; // Read n and m
        string a;
        cin >> a; // Read the string of problems
        
        // Count the number of problems for each difficulty level
        unordered_map<char, int> count;
        for (char c : a) {
            count[c]++;
        }
        
        // Calculate the number of additional problems needed
        int additional_problems = 0;
        for (char difficulty = 'A'; difficulty <= 'G'; difficulty++) {
            int needed = m; // We need m problems of each difficulty
            int available = count[difficulty]; // Count of available problems of this difficulty
            if (available < needed) {
                additional_problems += (needed - available); // Calculate deficit
            }
        }
        
        cout << additional_problems << endl; // Output the result for this test case
    }
    return 0;
}