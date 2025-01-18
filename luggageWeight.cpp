// Program 7: Calculate Total Luggage Weight
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int bags;
    cout << "Enter the number of bags: ";
    cin >> bags;
    double totalWeight = 0;
    for (int i = 1; i <= bags; i++) {
        double weight;
        cout << "Enter the weight of bag " << i << " (in kg): ";
        cin >> weight;
        totalWeight += weight;
    }
    cout << "The total weight of your luggage is: " << totalWeight << " kg." << endl;
    return 0;
}

