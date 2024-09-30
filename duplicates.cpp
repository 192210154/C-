#include <iostream>
#include <unordered_map>
using namespace std;

void findAndCountDuplicates(int arr[], int size) {
    unordered_map<int, int> frequency;

    // Count the frequency of each element
    for (int i = 0; i < size; ++i) {
        frequency[arr[i]]++;
    }

    // Print elements with frequency greater than 1
    cout << "Duplicate elements and their counts:" << endl;
    for (auto it : frequency) {
        if (it.second > 1) {
            cout << it.first << " occurs " << it.second << " times" << endl;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    findAndCountDuplicates(arr, size);

    return 0;
}

