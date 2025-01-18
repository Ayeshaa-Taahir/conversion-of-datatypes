// Program 6: Estimate Travel Time Between Multiple Cities
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cities;
    double totalDistance = 0, speed;
    cout << "Enter the number of cities to travel through: ";
    cin >> cities;
    if (cities < 2) {
        cout << "At least 2 cities are needed for travel." << endl;
        return 0;
    }

    for (int i = 1; i < cities; i++) {
        double distance;
        cout << "Enter the distance between city " << i << " and city " << i + 1 << ": ";
        cin >> distance;
        totalDistance += distance;
    }

    cout << "Enter the average speed of travel (in km/h): ";
    cin >> speed;
    if (speed <= 0) {
        cout << "Speed must be greater than 0!" << endl;
        return 0;
    }

    double totalTime = totalDistance / speed;
    cout << "The total travel time for " << cities << " cities is: " << totalTime << " hours." << endl;
    return 0;
}

