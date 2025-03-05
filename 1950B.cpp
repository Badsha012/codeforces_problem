#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the value of n
        int size = 2 * n; // Calculate the size of the grid
        vector<string> grid(size); // Create a grid of size 2n x 2n
        
        // Fill the grid
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                // Determine the character based on the position
                if ((i / 2) % 2 == (j / 2) % 2) {
                    grid[i] += '#'; // Fill with '#'
                } else {
                    grid[i] += '.'; // Fill with '.'
                }
            }
        }
        
        // Output the grid
        for (const string& row : grid) {
            cout << row << endl;
        }
    }
    
    return 0;
}