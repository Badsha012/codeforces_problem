#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 
    int count = 0;

    for (int a = 0; a <= 1000; a++) {
        for (int b = 0; b <= 1000; b++) {
            if ((a * a + b == n) && (a + b * b == m)) {
                count++;
            }
        }
    }

   
    cout << count << endl;

    return 0;
}
