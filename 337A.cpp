#include <iostream>
#include <set>
#include <vector>
using namespace std;

// Function to calculate the sum of first n natural numbers
int sumOfFirstN(int n) {
    return (n * (n + 1)) / 2;
}

void solve() {
    int N, C;
    cin >> N >> C;
    string S;
    cin >> S;
    
    set<char> unique_languages(S.begin(), S.end());
    int num_languages = unique_languages.size();
    
    // Option 1: Use translators only
    int translator_cost = sumOfFirstN(num_languages);
    
    // Option 2: Learn one language and use translators for the rest
    int min_cost = translator_cost;
    for (char lang : unique_languages) {
        int remaining_languages = num_languages - 1;
        int cost = C + sumOfFirstN(remaining_languages);
        min_cost = min(min_cost, cost);
    }
    
    cout << min_cost << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}