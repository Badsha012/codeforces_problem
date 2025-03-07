#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int t;
    std::cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        std::cin >> n; // Read the length of the string
        std::string s;
        std::cin >> s; // Read the string

        // Check if the length is exactly 5
        if (n != 5) {
            std::cout << "NO" << std::endl;
            continue;
        }

        // Count the occurrences of each character
        std::unordered_map<char, int> char_count;
        for (char c : s) {
            char_count[c]++;
        }

        // Check for the required characters
        if (char_count['T'] == 1 && 
            char_count['i'] == 1 && 
            char_count['m'] == 1 && 
            char_count['u'] == 1 && 
            char_count['r'] == 1) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}