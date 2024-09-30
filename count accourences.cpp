#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello world";
    char ch = 'o';
    int count = 0;

    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }

    cout << "Number of occurrences of '" << ch << "' in the string: " << count << endl;

    return 0;
}

