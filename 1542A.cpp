#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<int> numbers(2 * n);
        int odd_count = 0, even_count = 0;

      
        for (int i = 0; i < 2 * n; i++) {
            cin >> numbers[i];
            if (numbers[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }

       
        if (odd_count == n && even_count == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
