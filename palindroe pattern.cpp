#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print the first half of the row
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        // Print the second half of the row
        for (int j = i - 1; j >= 1; --j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

