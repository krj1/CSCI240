
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price;
    int num;
    
    cout << "What is the price for a single item? ";
    cin >> price;
    cout << "How many items were purchased? ";
    cin >> num;
    cout << endl << setw(5) << num << " items at $" << fixed << setprecision(2) << price << " each will cost $" << num * price << endl;
    
    
    
    return 0;
}
