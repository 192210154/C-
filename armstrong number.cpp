#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, originalNumber, remainder, sum = 0;
    
    cout << "Enter a number: ";
    cin >> number;
    
    originalNumber = number;

    // Calculate the sum of cubes of the digits
    while (number != 0) {
        remainder = number % 10;
        sum += remainder * remainder * remainder; // For 3-digit numbers
        number /= 10;
    }

    // Check if the sum equals the original number
    if (sum == originalNumber) {
        cout << " is an Armstrong number." << endl;
    } else {
        cout<< " is not an Armstrong number." << endl;
    }

    return 0;
}

