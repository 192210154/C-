#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "Hello world, welcome to C++ programming!";
    int wordCount = 0;
    string word;
    stringstream ss(str);

    while (ss >> word) {
        wordCount++;
    }

    cout << "Number of words in the string: " << wordCount << endl;

    return 0;
}

