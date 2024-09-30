#include <iostream>
#include <string>
#include <cctype> // For toupper and tolower functions

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Convert to uppercase
    string upperStr = str;
    for (char &c : upperStr) {
        c = toupper(c);
    }

    // Convert to lowercase
    string lowerStr = str;
    for (char &c : lowerStr) {
        c = tolower(c);
    }

    cout << "Uppercase: " << upperStr << endl;
    cout << "Lowercase: " << lowerStr << endl;

    return 0;
}
 
