/***************************************************************
CSCI 240         Program 2     Fall 2022

Programmer: Kurt Jackson Z1875101

Section: 02

Date Due: 9/9/2022

Purpose: To take user input of baseball game data, calculate batter statistics, and desplay the result to the user
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std; // using the standard namespace to gain functions from iostream


int main() {
    
    
    // ---- declaring all the varables needed ----
    int numAtBat;
    int numOfHits;
    int numDoubles;
    int numTriples;
    int numOfRuns;
    int numOfSingles;
    int numOfBases;
    float battingAve;
    float sluggingPercent;
    // -------------------------------------------
    
    
    // ---- gathering user input -----------------
    cout << "Enter the number of at bats: ";
    cin >> numAtBat;
    
    cout << "Enter the number of hits: ";
    cin >> numOfHits;
    
    cout << "Enter the number of doubles: ";
    cin >> numDoubles;
    
    cout << "Enter the number of triples: ";
    cin >> numTriples;
    
    cout << "Enter the number of home runs: ";
    cin >> numOfRuns;
    // -------------------------------------------
    
    
    // ---- calculating statistics on user input -
    numOfSingles = numOfHits - numDoubles - numTriples - numOfRuns;
    numOfBases = numOfSingles + (numDoubles * 2) + (numTriples * 3) + (numOfRuns * 4);
    battingAve = static_cast< float >(numOfHits) / static_cast< float >(numAtBat);
    sluggingPercent = static_cast< float >(numOfBases) / static_cast< float >(numAtBat);
    //--------------------------------------------

    
    // ---- displaying breakdown bases claimed ---
    cout << endl << endl << "singles:" << setw(5) << numOfSingles << "   doubles:" << setw(5) <<
    numDoubles <<  "   Triples:" << setw(5) <<  numTriples << "   Home Runs:" <<
    setw(5) << numOfRuns << endl;
    // -------------------------------------------
    
    
    // ---- displaying batter stats --------------
    cout << "\nTotal Bases:        "  << setw(9) << numOfBases << endl;
    cout << "\nBatting Average:    "  << setw(9) << fixed << setprecision(3) << battingAve << endl;
    cout << "\nSlugging Percentage:"  << setw(9) << fixed << setprecision(3) << sluggingPercent <<
    endl << endl;
    // -------------------------------------------
    
    return 42; // because it's the answer to everything
}
