#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Upper part of the diamond
    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; --j) {
            cout << j << " ";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = rows - 1; i >= 1; --i) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; --j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

