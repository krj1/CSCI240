//240 Count daily int main()

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    int N;
    
    cout << "N value (must be greater than or equal to 1)? ";
    cin >> N;
    
    
    while ( N <= 0) {
        cout << "Error: the N-value must be greater than or equal to 1. Try again: ";
        cin >> N;
    }
    
    cout << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << endl;
    }

  return 0;
} // end main()
