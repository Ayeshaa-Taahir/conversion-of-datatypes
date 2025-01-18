// Program 4: Travel Budget Calculat
#include <iostream>
#include <cmath>
using namespace std;
 int main()  {
    double budget, food, accommodation, transportation;
    cout << "Enter your total budget: ";
    cin >> budget;
    cout << "Enter your estimated food expenses: ";
    cin >> food;
    cout << "Enter your estimated accommodation expenses: ";
    cin >> accommodation;
    cout << "Enter your estimated transportation expenses: ";
    cin >> transportation;

    double totalExpenses = food + accommodation + transportation;
    if (totalExpenses > budget) {
        cout << "You are over budget by: " << totalExpenses - budget << " units." << endl;
    } else {
        cout << "You are within budget. You have " << budget - totalExpenses << " units remaining." << endl;
    }
}

