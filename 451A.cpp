#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Determine the minimum of n and m
    int turns = min(n, m);

    // If the number of turns is odd, Akshat wins; if even, Malvika wins
    if (turns % 2 == 1) {
        cout << "Akshat" << endl;
    } else {
        cout << "Malvika" << endl;
    }

    return 0;
}