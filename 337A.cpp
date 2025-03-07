#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> puzzles(m);
    
    for (int i = 0; i < m; ++i) {
        std::cin >> puzzles[i];
    }
    
    // Sort the puzzles
    std::sort(puzzles.begin(), puzzles.end());
    
    int min_difference = INT_MAX;
    
    // Check each window of size n
    for (int i = 0; i <= m - n; ++i) {
        int current_difference = puzzles[i + n - 1] - puzzles[i];
        min_difference = std::min(min_difference, current_difference);
    }
    
    std::cout << min_difference << std::endl;
    
    return 0;
}