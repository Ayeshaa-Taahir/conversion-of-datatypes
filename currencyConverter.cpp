// Program 5: Currency Conversion for Travel
#include <iostream>
#include <cmath>
using namespace std;

 int main() {
    double amount, conversionRate;
    cout << "Enter the amount in your currency: ";
    cin >> amount;
    cout << "Enter the conversion rate to the target currency: "<<endln;
    cin >> conversionRate;

    double convertedAmount = amount * conversionRate;
    cout << "The converted amount in the target currency is: " << convertedAmount << " units." << endl;
    return 0;
}
