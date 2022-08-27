/***************************************************************
CSCI 240         Program 1     Fall 2022

Programmer: Kurt Jackson Z1875101

Section: 02

Date Due: 9/2/2022

Purpose: This program calculates a restaurant bill with a 15% tip
         and 8.25% tax rate.
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std; // using the standard namespace to gain functions from iostream

int main()
{
    cout << "What is the total for the food and drink? "; // asking for user input
    float totalCost;
    cin >> totalCost; // recording user input
    
    float tipAmount = totalCost * 0.15; // calculating tip
    float taxAmount = totalCost * 0.0825; // calculating tax
    float totalDue = totalCost + tipAmount + taxAmount; // finding amout due
    
    
    cout << "*****************************************\n"; // displaying tip, tax and total
    cout << "Bill Calculator\n\n";
    cout << "Tip amount   $" << tipAmount;
    cout << "\nTax amount   $" << taxAmount;
    cout << "\nTotal due    $" << totalDue;
    cout << "\n*****************************************\n\n";

    
    
    return 42; // because it's the answer to everything
}
