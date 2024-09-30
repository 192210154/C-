 #include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Constructor
    Car(string comp, string mdl, int yr) : company(comp), model(mdl), year(yr) {
        cout << "Car created: " << company << " " << model << " " << year << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car " << company << " " << model << " " << year << " is being deleted." << endl;
    }

    void display() {
        cout << "Company: " << company << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 2020);
    car.display();
    return 0;
}

