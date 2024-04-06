#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven) {
    return (milesDriven / milesPerGallon) * dollarsPerGallon;
}

int main() {
    double milesPerGallon, dollarsPerGallon;
    cin >> milesPerGallon >> dollarsPerGallon;
    cout << fixed << setprecision(2);


    cout << DrivingCost(milesPerGallon, dollarsPerGallon, 10.0) << " ";
    cout << DrivingCost(milesPerGallon, dollarsPerGallon, 50.0) << " ";
    cout << DrivingCost(milesPerGallon, dollarsPerGallon, 400.0) << endl;


    return 0;
}
