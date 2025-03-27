#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    cin.ignore(); // Ignore the newline character after the integer input

    for (int i = 0; i < t; ++i) {
        string s;
        getline(cin, s); // Read the time in hh:mm format

        // Extract hours and minutes
        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        string period; // AM or PM
        if (hour < 12) {
            period = "AM";
        } else {
            period = "PM";
        }

        // Convert hour to 12-hour format
        if (hour == 0) {
            hour = 12; // Midnight case
        } else if (hour > 12) {
            hour -= 12; // Convert to PM
        }

        // Output the result in the required format
        cout << setw(2) << setfill('0') << hour << ":" 
             << setw(2) << setfill('0') << minute << " " 
             << period << endl;
    }

    return 0;
}