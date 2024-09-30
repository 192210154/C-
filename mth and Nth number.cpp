#include <algorithm> 
#include <iostream>  
#include <vector>    

using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40, 50}; 
    int m, n; 

    
    cout << "Enter the index for m-th maximum element: ";
    cin >> m;
    cout << "Enter the index for n-th minimum element: ";
    cin >> n;

   
    sort(arr.begin(), arr.end());

    
    int size = arr.size();
    if (m < size && n < size) {
        cout << "The " << m+1 << "-th maximum element is: " << arr[size - m - 1] << endl;
        cout << "The " << n+1 << "-th minimum element is: " << arr[n] << endl;
    } else {
        cout << "Index out of bounds" << endl;
    }

    return 0;
}
	
