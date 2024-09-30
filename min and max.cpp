#include <iostream>
#include <algorithm> // For sort function
using namespace std;

int main() {
    int n, m, size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the value of m (for m-th maximum): ";
    cin >> m;
    cout << "Enter the value of n (for n-th minimum): ";
    cin >> n;

    // Sort the array
    sort(arr, arr + size);

    // m-th maximum is the (size - m)-th element in the sorted array
    int mthMax = arr[size - m];
    // n-th minimum is the (n - 1)-th element in the sorted array
    int nthMin = arr[n - 1];

    cout << "The " << m << "-th maximum number is: " << mthMax << endl;
    cout << "The " << n << "-th minimum number is: " << nthMin << endl;

    return 0;
}

