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


int randTrack(int gate, int &mark) {
    static int evenRecord = 0;
    
    if (gate == 1){
        evenRecord = 0;
        return 0;
    }
    else if (gate == 2){
        return evenRecord;
    }
    
    int output = rand();
    mark = 0;
    
    
    if (output % 2 == 0){
        evenRecord++;
        mark = 1;
    }
    return output;
}

void showRandLine(int length) {
    int mark;
    
    
    for (int i = 0; i < length; i++) {
        int slacker = randTrack(0, mark);
        if (mark == 1) {
            cout  << setw(12) << slacker << "--"; //counter();
        }
        else {
            cout << setw(12) << slacker << "  "; //counter();
        }
        
        

    }
    cout << endl;
    
    return;
}

void randBlock(int len, int setL) {
    int mark;
    
    for (int i = 0; i < len / setL; i++) {
        showRandLine(setL);
    }
    
    
    for (int i = 0; i < len % setL; i++) {
        int slacker = randTrack(0, mark);
        if (mark == 1) {
            cout << setw(12) << slacker << "--" ; //counter();
        }
        else {
            cout << setw(12) << slacker << "  "; //counter();
        }
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
    int non;
    
    
    int len1 = (rand() % set1) + 1;

    
    cout << "First set of numbers: " << len1 << " values \n\n";
    randBlock(len1, setL1);
    cout << endl;
    int track1 = randTrack(2, non);
    randTrack(1, non);
    
    int len2 = (rand() % set2) + 1;

    cout << "First set of numbers: " << len2 << " values \n\n";
    randBlock(len2, setL2);
    cout << endl;
    int track2 = randTrack(2, non);
    randTrack(1, non);
    
    
    int len3 = (rand() % set3) + 1;
    
    cout << "First set of numbers: " << len3 << " values \n\n";
    randBlock(len3, setL3);
    cout << endl;
    int track3 = randTrack(2, non);
    randTrack(1, non);
    
    
    
    cout << "Number of even values" << endl;
    cout << "set 1" << setw(8) << track1 << endl;
    cout << "set 2" << setw(8) << track2 << endl;
    cout << "set 3" << setw(8) << track3 << endl;

    
    
    
    return 0;
}



