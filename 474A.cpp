#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    // Read the direction of the shift
    char direction;
    std::cin >> direction;
    
    // Read the typed message
    std::string typedMessage;
    std::cin >> typedMessage;

    // Define the keyboard layout
    std::string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    // Create a mapping from character to its index
    std::unordered_map<char, int> charToIndex;
    for (int i = 0; i < keyboard.size(); ++i) {
        charToIndex[keyboard[i]] = i;
    }

    // Prepare to construct the original message
    std::string originalMessage;
    
    // Process each character in the typed message
    for (char c : typedMessage) {
        int index = charToIndex[c];
        if (direction == 'L') {
            // Shift right
            originalMessage += keyboard[index + 1];
        } else { // direction == 'R'
            // Shift left
            originalMessage += keyboard[index - 1];
        }
    }

    // Output the original message
    std::cout << originalMessage << std::endl;

    return 0;
}