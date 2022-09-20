/***************************************************************
CSCI 240         Program 4     Fall 2022

Programmer: Kurt Jackson Z1875101

Section: 02

Date Due: 9/23/2022

Purpose: to generate three randomly sized sets of pseudo random numbers and display the number of even values generated in each block
***************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>


using namespace std;


int randTrack(int gate, int &mark) { // used to track if rand() output is even
    static int evenRecord = 0; // keeps traxk of number of even numbers
    
    if (gate == 1){ // reset even nuber count between number sets
        evenRecord = 0;
        return 0;
    }
    else if (gate == 2){ // return even nuber count
        return evenRecord;
    }
    
    int output = rand(); //generating random number
    mark = 0;
    
    
    if (output % 2 == 0){ // cheak if random number is even
        evenRecord++;
        mark = 1; // marking number for dashed lines to be drawn
    }
    return output;
}

void showRandLine(int length) { // generates single line of random output "length" numbers long
    int mark;
    
    
    for (int i = 0; i < length; i++) { // generates "length" number of random output
        int slacker = randTrack(0, mark);
        if (mark == 1) {
            cout  << setw(12) << slacker << "--"; // when output number is even
        }
        else {
            cout << setw(12) << slacker << "  "; // when output number is odd
        }
        
        

    }
    cout << endl;
    
    return;
}

void randBlock(int len, int setL) { // generates block of random numbers with "len" total length and "setL" columns
    int mark;
    
    for (int i = 0; i < len / setL; i++) { // calls showRandLine "len" times to make block or random numbers
        showRandLine(setL);
    }
    
    
    for (int i = 0; i < len % setL; i++) { // outputs the remainder in order for last line to be truncated
        int slacker = randTrack(0, mark);
        if (mark == 1) {
            cout << setw(12) << slacker << "--" ; // when output number is even
        }
        else {
            cout << setw(12) << slacker << "  "; // when output number is odd
        }
    }
    cout << endl;
    
    return;
}


int main() {
    srand(23); //seed for rand() function
    
    
    // ---- symbolic variables ----
    const int set1 = 25;
    const int set2 = 50;
    const int set3 = 250;
    
    const int setL1 = 5;
    const int setL2 = 6;
    const int setL3 = 7;
    // ----------------------------
    
    int non; // used to catch unused return (pointer) values
    
    
    int len1 = (rand() % set1) + 1; // length of first block of output

    
    cout << "First set of numbers: " << len1 << " values \n\n";
    randBlock(len1, setL1); // calling randBlacok to cout black of random output "len1" numbers long and with "letL1" columns
    cout << endl;
    int track1 = randTrack(2, non); // saving number of even random number from randBlack
    randTrack(1, non); // resetting even random number count
    
    
    int len2 = (rand() % set2) + 1; // length of second block of output

    cout << "First set of numbers: " << len2 << " values \n\n";
    randBlock(len2, setL2); // calling randBlacok to cout black of random output "len2" numbers long and with "letL1" columns
    cout << endl;
    int track2 = randTrack(2, non); // saving number of even random number from randBlack
    randTrack(1, non); // resetting even random number count
    
    
    int len3 = (rand() % set3) + 1; // length of third block of output
    
    cout << "First set of numbers: " << len3 << " values \n\n";
    randBlock(len3, setL3); // calling randBlacok to cout black of random output "len3" numbers long and with "letL1" columns
    cout << endl;
    int track3 = randTrack(2, non); // saving number of even random number from randBlack
    randTrack(1, non); // resetting even random number count
    
    
    
    cout << "Number of even values" << endl;
    cout << "set 1" << setw(8) << track1 << endl; // outputs even number count
    cout << "set 2" << setw(8) << track2 << endl;
    cout << "set 3" << setw(8) << track3 << endl;

    
    
    
    return 0;
}



