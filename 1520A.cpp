#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the number of days
        string tasks;
        cin >> tasks; // Read the string of tasks

        unordered_set<char> completedTasks; // Set to track completed tasks
        char lastTask = '\0'; // Variable to track the last task solved
        bool suspicious = false; // Flag to check if teacher is suspicious

        for (char task : tasks) {
            if (task != lastTask) { // If the task has changed
                if (completedTasks.count(task)) { // Check if this task was completed before
                    suspicious = true; // Teacher is suspicious
                    break;
                }
                completedTasks.insert(lastTask); // Mark the last task as completed
                lastTask = task; // Update the last task
            }
        }

        // Output the result
        if (suspicious) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}