#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int nthOdd = 2 * n - 1;
    cout << "The " << n << "th odd number is: " << nthOdd << endl;

    return 0;
}

