#include <iostream>
using namespace std;
double calculateSimpleInterest(double principal, double rateOfInterest, int years) {
    double interest = (principal * rateOfInterest * years) / 100;
    return interest;
}
int main() {
    double principalAmount, rateOfInterest;
    int years;
    char seniorCitizen;
    cout << "Enter the principal amount: ";
    cin >> principalAmount;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Is the customer a senior citizen? (y/n): ";
    cin >> seniorCitizen;
    if (seniorCitizen == 'y' || seniorCitizen == 'Y') {
        rateOfInterest = 12;
    } else {
        rateOfInterest = 10;
    }
    double interest = calculateSimpleInterest(principalAmount, rateOfInterest, years);
    cout << "Interest: " << interest << endl;
    return 0;
}

