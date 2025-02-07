#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of events
    int available_officers = 0; // Count of available officers
    int untreated_crimes = 0; // Count of untreated crimes

    for (int i = 0; i < n; ++i) {
        int event;
        cin >> event; // Read the event

        if (event == -1) {
            // A crime has occurred
            if (available_officers > 0) {
                // If there are available officers, assign one to the crime
                available_officers--;
            } else {
                // No available officers, increment untreated crimes
                untreated_crimes++;
            }
        } else {
            // Officers are recruited
            available_officers += event;
        }
    }

    // Output the number of untreated crimes
    cout << untreated_crimes << endl;

    return 0;
}