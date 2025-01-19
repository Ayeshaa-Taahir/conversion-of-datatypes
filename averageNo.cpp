#include <iostream>
using namespace std;

int main() {
    int numbers[5]; // declareation of array
    int sum = 0;
    
    cout << "Enter 5 numbers" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i]; // input element in array
        sum += numbers[i]; // add no to sum
    }

    double average = sum / 5.0; //calculating the average
    cout << "The average of the numbers is " << average << endl;

    return 0;
}
