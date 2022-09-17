/***************************************************************
CSCI 240         Program 3     Fall 2022

Programmer: Kurt Jackson Z1875101

Section: 02

Date Due: 9/16/2022

Purpose: To take user input of perabola coefficents, calculate vertex coordanates, and desplay the result to the user
***************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;




int main() {
    
    // ---- declaring variables ----
    int coefA = 0;
    int coefB;
    int coefC;
    float X;
    float Y;
    float discriminant;
    float root1, root2;
    //-----------------------------
    
    // ---- getting user input ----
    cout << "Enter the \"a\" coefficient: ";
    cin >> coefA;


    
    while (coefA == 0 ) {
        cout << "Error: the a-coefficient MUST be non-zero. Try again: "; // this reprompts the user if 0 is geven for coefA
        cin >> coefA;
        if(cin.fail()) {cout << "ERROR: invalid input plese restart\n\n"; return 0;}// error for when non int is inputed
    }
    
    cout << "Enter the \"b\" coefficient: ";
    cin >> coefB;
    
    cout << "Enter the \"c\" coefficient: ";
    cin >> coefC;
    
    
    // ----------------------------
    
    // ---- math ------------------
    
    X = (-1 * (float)coefB / ( 2 * (float)coefA));
    Y = ((float)coefA * pow(X, 2)) + ((float)coefB * X) + (float)coefC;
    cout << X << endl;
    discriminant = pow((float)coefB, 2) - (4 * (float)coefA * (float)coefC); // calculating math for output
    root1 = (-1 * (float)coefB + sqrt( discriminant )) / (2 * (float)coefA);
    root2 = (-1 * (float)coefB - sqrt( discriminant )) / (2 * (float)coefA);
    
    // -----------------------------
    
    
    
    
    // ---- returning calulated data ----
    
    cout << "\n\nParabola:  " << coefA << "x^2 + " << coefB << "x + " << coefC << endl;
    cout << "-------------------------------\nVertex\n";
    cout << "X Coordinate             " << fixed << setprecision(4) << X << endl; // showing user input
    cout << "Y Coordinate             " << fixed << setprecision(4) << Y << endl;
    cout << "-------------------------------\n";
    
    
    
    if (coefA > 0) {cout << "The parabola opens UPWARD\n";} // checking coefA to know perabola direction
    else {cout << "The parabola opens DOWNWARD\n";}
    cout << "-------------------------------\n";

    
    
    if (discriminant > 0) { // checking discriminant to know number of perabola roots
        cout << "The parabola has TWO roots\n" << "root 1 - X Coordinate " << root1 << endl <<
        "root 2 - X Coordinate " << root2 << endl << endl; // displaying 2 roots
        
    }
    else if (abs(discriminant) < .05) {
        cout << "The parabola has ONE root\n" << "root 1 - X Coordinate " << root1 << endl << endl; //displaying 1 root

    }
    else {cout << "The parabola has NO root\n\n";} // displaying no roots
    
    // ---------------------------------
    
    
    
    return 0; // exiting program
}
