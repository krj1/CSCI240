/***************************************************************
CSCI 240         Program 4     Fall 2022

Programmer: Kurt Jackson Z1875101

Section: 02

Date Due: 9/23/2022

Purpose: to generate three randomly sized sets of pseudo random numbers
***************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>


using namespace std;

void showRandLine(int length) {
    
    for (int i = 0; i <= length; i++) {
        cout << setw(12) << rand();
    }
    cout << endl;
    
    return;
}

void randBlock(int len, int setL) {
    
    for (int i = 0; i < len / setL; i++) {
        showRandLine(setL);
    }
    
    for (int i = 0; i < len % setL; i++) {
        cout << setw(12) << rand();
    }
    cout << endl;
    
    return;
}


int main() {
    srand(23);
    const int set1 = 25;
    const int set2 = 50;
    const int set3 = 250;
    
    const int setL1 = 5;
    const int setL2 = 6;
    const int setL3 = 7;
    
    
    
    int len1 = (rand() % set1) + 1;
    int len2 = (rand() % set2) + 1;
    int len3 = (rand() % set3) + 1;
    
    
    cout << "First set of numbers: " << len1 << " values\n\n";
    randBlock(len1, setL1);
    cout << endl;
    
    
    
    cout << "First set of numbers: " << len2 << " values\n\n";
    randBlock(len2, setL2);
    cout << endl;
    
    
    
    cout << "First set of numbers: " << len3 << " values\n\n";
    randBlock(len3, setL3);
    cout << endl;
    
    

    
    
    
    return 0;
}



