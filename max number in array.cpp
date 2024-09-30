#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Initialize the maximum element
    int max = arr[0];
	int min = arr[0];
    // Traverse the array to find the maximum element
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if(arr[i]<min){
        	min=arr[i];
		}
    }

    // Display the result
    cout << "The maximum and minimum number in the array is: " << max<<"and"<<min << endl;

    return 0;
}

