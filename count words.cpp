#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int wordCount = 0;
    bool inWord = false;

    for (char c : sentence) {
        if (isspace(c)) {
            inWord = false;
        } else {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
    }

    cout << "Number of words in the sentence: " << wordCount << endl;

    return 0;
}

