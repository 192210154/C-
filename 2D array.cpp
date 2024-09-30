#include <iostream>
using namespace std;

const int M = 5;

int main() {
    int A[M][M], i, j, T;
    cout << "\nEnter Array Elements: ";
    for (i = 0; i < M; i++)
        for (j = 0; j < M; j++)
            cin >> A[i][j];
    
    T = A[0][0];
    for (i = 0; i < M; i++)
        for (j = 0; j < M; j++)
            if (T < A[i][j])
                T = A[i][j];
    
    cout << "Largest value: " << T << "\n";
    return 0;
}

