/***************************************************************
CSCI 240         Program 2     Fall 2022

Programmer: Kurt Jackson Z1875101

Section: 02

Date Due: 9/16/2022

Purpose: To take user input of perabola coefficents, calculate vertex coordanates, and desplay the result to the user
***************************************************************/

#include <iostream>
#include <iomanip>
#include <math.h>

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
    
    
    // ---- getting user input ----
    cout << "Enter the \"a\" coefficient: ";
    cin >> coefA;


    
    while (coefA == 0 ) {
        cout << "Error: the a-coefficient MUST be non-zero. Try again: ";
        cin >> coefA; // why does this line not get run when coefA !=== int?
        if(cin.fail()) {cout << "ERROR: invalid input plese restart\n\n"; return 0;}
    }
    
    cout << "Enter the \"b\" coefficient: ";
    cin >> coefB;
    
    cout << "Enter the \"c\" coefficient: ";
    cin >> coefC;
    
    
    // ----------------------------
    
    // ---- math ----
    
    X = -1 * coefB / ( 2 * coefA);
    Y = (coefA * X ^ 2) + (coefB * X) + coefC;
    
    discriminant = (coefB ^ 2) - (4 * coefA * coefC);
    root1 = (-1 * coefB + sqrt( discriminant ));
    root2 = (-1 * coefB - sqrt( discriminant ));
    
    // ----------------------------
    
    // ---- returning calulated data ----
    
    cout << "\n\nParabola:  " << coefA << "x^2 + " << coefB << "x + " << coefC << endl;
    cout << "-------------------------------\nVertex\n";
    cout << "X Coordinate             " << setprecision(4) << X << endl;
    cout << "Y Coordinate             " << setprecision(4) << Y << endl;
    cout << "-------------------------------\n";
    if (coefA > 0) {cout << "The parabola opens UPWARD\n";}
    else {cout << "The parabola opens DOWNWARD\n";}
    cout << "-------------------------------\n";
    
    
    
    // ----------------------------
    
    return 0;
}
