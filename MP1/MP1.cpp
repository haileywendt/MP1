// 
// ECCS 1611 - Programming 1 - Fall Semester 2021
// Machine Problem (MP1) - Gotta Sell Them Donuts...
// 
// MP1.cpp 
// 
// Last Updated: September 30, 2021
// Hailey M. Wendt
// 
// This program has been created to calculate the cost of a customer's purchase at a donut shop. 
// The program will ask the user to enter a series of values to accurately calculate what the 
// customer owes, what the change amount is, and what change is given back to the customer.

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    // declare variables & read out number of each donut type wanted by the customer
    int regularDonuts = 0;
    int fancyDonuts = 0;
    int appleFritters = 0;
    cout << "Number of regular donuts ordered: ";
    cin >> regularDonuts;
    cout << "Number of fancy donuts ordered: ";
    cin >> fancyDonuts;
    cout << "Number of apple fritters ordered: ";
    cin >> appleFritters;

    // declare variables & read out what the customer owes
    // calculate cost of each donut type that the customer owes
    double appleFritterPrice = (appleFritters * 1.50);
    double regDonutPrice = (regularDonuts % 12) * 0.75;
    double regDozenPrice = (regularDonuts / 12) * 7.99;
    double fancyDonutPrice = (fancyDonuts % 12) * 0.85;
    double fancyDozenPrice = (fancyDonuts / 12) * 8.49;
    double donutPrice = (appleFritterPrice + regDonutPrice + regDozenPrice + fancyDonutPrice + fancyDozenPrice);
    double salesTax = 0.075 * donutPrice;
    double customerOwes = (salesTax + donutPrice);
    cout << fixed << setprecision(2) << "Customer owes $" << customerOwes << endl;

    // declare variable & read out the amount paid by the customer
    double customerPays = 0.00;
    cout << "Customer pays $";
    cin >> customerPays;

    // declare variable & determine whether change is owed or not owed to the customer
    double change = (customerPays - customerOwes);
    double customerChange2 = (change) + .005;
    if (change > 0.01) {
        cout << fixed << setprecision(2) << "Change owed is $" << change << " - ";
    }
    else {
        cout << "Exact payment received - no change owed.";
    }

    // declare variables & determine how much of each change type is given back to the customer
    int changeDue = (100 * customerChange2);
    int dollars = (changeDue / 100);
    changeDue = (changeDue % 100);
    int quarters = (changeDue / 25);
    changeDue = (changeDue % 25);
    int dimes = (changeDue / 10);
    changeDue = (changeDue % 10);
    int nickels = (changeDue / 5);
    changeDue = (changeDue % 5);
    int pennies = (changeDue / 1);
    changeDue = (changeDue % 1);

    // determines if type of change is equal to 1 or greater than or equal to 2
    // determines if word displayed is plural or singular
    if (dollars >= 2) {
        cout << dollars << " dollars" << ", ";
    }
    if (dollars == 1) {
        cout << dollars << " dollar" << ", ";
    }
    if (quarters >= 2) {
        cout << quarters << " quarters" << ", ";
    }
    if (quarters == 1) {
        cout << quarters << " quarter" << ", ";
    }
    if (dimes >= 2) {
        cout << dimes << " dimes" << ", ";
    }
    if (dimes == 1) {
        cout << dimes << " dime" << ", ";
    }
    if (nickels >= 2) {
        cout << nickels << " nickels" << ", ";
    }
    if (nickels == 1) {
        cout << nickels << " nickel" << ", ";
    }
    if (pennies >= 2) {
        cout << pennies << " pennies" << ". ";
    }
    if (pennies == 1) {
        cout << pennies << " penny" << ". ";
    }
    return 0;

}
