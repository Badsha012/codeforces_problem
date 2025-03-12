#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of cubes
    int height = 0; // Initialize height of the pyramid
    int cubesUsed = 0; // Initialize the number of cubes used

    // Loop to calculate the maximum height
    while (true) {
        height++; // Move to the next level
        cubesUsed += (height * (height + 1)) / 2; // Calculate cubes needed for this level

        // Check if we have enough cubes
        if (cubesUsed > n) {
            height--; // If not enough cubes, reduce height
            break;
        }
    }

    cout << height << endl; // Output the maximum height
    return 0;
}