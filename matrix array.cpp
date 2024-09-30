#include <array>
#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

int main() {
    array<array<int, COLS>, ROWS> matrix = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}
    };

    // Print all elements
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

