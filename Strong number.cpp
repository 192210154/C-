#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, temp, sum = 0, digit;
    
    cout << "Enter a number: ";
    cin >> number;
    
    temp = number;
    
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    
    if (sum == number) {
        cout << number << " is a Strong Number." << endl;
    } else {
        cout << number << " is not a Strong Number." << endl;
    }
    
    return 0;
}

