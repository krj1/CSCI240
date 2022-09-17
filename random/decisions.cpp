#include <iostream>
using namespace std;

using namespace std;

int main() {
    int x,y;
    char letter;
    string word;
    
    cout << "Enter a number (NO decimal point): ";
    cin >> x;
    cout << "Enter another number (NO decimal point): ";
    cin >> y;
    cout << "Enter a single character: ";
    cin >> letter;
    cout << "Enter a word: ";
    cin >> word;
    cout << endl << endl;
    
    
    
    
    
    
    if (x > y) {
        cout << x << " is greater than " << y;
        cout << endl;
        
    }
    if (x < y) {
        cout << x << " is less than " << y;
        cout << endl;
    }
    
    
    
    
    if (x >= y) {
        cout << x << " is greater than or equal to " << y;
        cout << endl;
        
    }
    if (x <= y) {
        cout << x << " is less than or equal to " << y;
        cout << endl;
    }
    
    
    if (x == y) {
        cout << x << " is equal to " << y;
        cout << endl;
    }
    
    if (x != y) {
        cout << x << " is not equal to " << y;
        cout << endl;
    }
    
    if (letter == 'P') {
        cout << "PINEAPPLE";
        cout << endl;
    }
    
    if (word == "C++") {
        cout << "C PLUS PLUS";
        cout << endl;
    }
    
    return 0;
}

