#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of rounds

    int mishkaWins = 0; // Counter for Mishka's wins
    int chrisWins = 0;  // Counter for Chris's wins

    for (int i = 0; i < n; ++i) {
        int m, c;
        cin >> m >> c; // Read the dice values for Mishka and Chris

        if (m > c) {
            mishkaWins++; // Mishka wins this round
        } else if (m < c) {
            chrisWins++; // Chris wins this round
        }
        // If m == c, no one wins, so we do nothing
    }

    // Determine the overall winner
    if (mishkaWins > chrisWins) {
        cout << "Mishka" << endl; // Mishka is the winner
    } else if (chrisWins > mishkaWins) {
        cout << "Chris" << endl; // Chris is the winner
    } else {
        cout << "Friendship is magic!^^" << endl; // It's a draw
    }

    return 0;
}