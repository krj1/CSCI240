

#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
    int num = 47;
    
    
    if (num % 2 == 0) {
        cout << "even" << endl;
    }
    else {
        num++;
        cout << "it was odd, but now it's not" << endl;
    }
    return 0;
}
