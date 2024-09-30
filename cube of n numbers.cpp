#include <iostream>
using namespace std;
class Cube {
private:
    int num;
public:
    Cube(int n) {
        num = n;
    }
   ~Cube() {
        for (int i = 1; i <= num; i++) {
            cout << "Cube of " << i << " = " << i * i * i <<endl;
        }
    }
};
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Cube c(n);
    return 0;
}

