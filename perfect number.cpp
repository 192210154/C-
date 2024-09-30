#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
	 int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if(sum==num){
    	cout<<"perferct";
	}
	else{
		cout<<"not perfect";
	}
    return 0;
}

