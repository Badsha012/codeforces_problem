#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Calculate the minimum number of moves
    int min_moves = (n + 1) / 2; // This is equivalent to ceil(n / 2)

    // Find the smallest multiple of m that is >= min_moves
    int result = -1;
    for (int moves = min_moves; moves <= n; ++moves) {
        if (moves % m == 0) {
            result = moves;
            break;
        }
    }

    cout << result << endl;
    return 0;
}