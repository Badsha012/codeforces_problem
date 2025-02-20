#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // Read the dimensions of the matrix

    bool isColored = false; // Flag to check if the photo is colored

    // Read the matrix and check for colored pixels
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char pixel;
            cin >> pixel; // Read each pixel

            // Check if the pixel is colored
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
                isColored = true; // Found a colored pixel
            }
        }
    }

    // Output the result based on the flag
    if (isColored) {
        cout << "#Color" << endl;
    } else {
        cout << "#Black&White" << endl;
    }

    return 0;
}