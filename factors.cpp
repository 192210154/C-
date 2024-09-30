#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
	int sum=0;
	int count=0;
    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << " ";
            sum+=i;
            count++;
        }
    }
    cout << endl;
	cout<<sum<<endl<<count;
    return 0;
}

