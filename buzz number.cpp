#include <iostream>
using namespace std;

bool isBuzzNumber(int num) {
    return (num % 10 == 7 || num % 7 == 0);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isBuzzNumber(number)) {
        cout << number << " is a Buzz Number." << endl;
    } else {
        cout << number << " is not a Buzz Number." << endl;
    }

    return 0;
}

