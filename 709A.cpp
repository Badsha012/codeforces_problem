#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;

    vector<int> oranges(n);
    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
    }

    int totalWaste = 0;
    int emptyCount = 0;

    for (int i = 0; i < n; i++) {
        if (oranges[i] <= b) {
            totalWaste += oranges[i];
            if (totalWaste > d) {
                emptyCount++;
                totalWaste = 0; // Reset the waste after emptying
            }
        }
    }

    cout << emptyCount << endl;

    return 0;
}