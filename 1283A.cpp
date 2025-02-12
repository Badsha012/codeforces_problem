#include <iostream>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int h, m; // hours and minutes
        cin >> h >> m;

        // Calculate the total minutes from the start of the day
        int current_minutes = h * 60 + m;

        // Total minutes in a day is 1440
        int remaining_minutes = 1440 - current_minutes;

        // Output the result
        cout << remaining_minutes << endl;
    }

    return 0;
}