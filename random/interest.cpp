#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double invest;
    double rate;
    double y1, y2, y3, y4;
    
    
    
    cout << "How much is the initial investment amount? ";
    cin >> invest;
    cout << "What is the annual interest rate? ";
    cin >> rate;
    cout << "\n\nInvestment Results\n\nInitial Investment" << setw(15) << fixed << setprecision(2) << invest << endl;
    cout << "Annual Interest Rate" << setw(13) << setprecision(1) << rate << endl;
    
    y1 = invest + ( invest * (rate /100));
    y2 = y1 + ( y1 * (rate /100));
    y3 = y2 + ( y2 * (rate /100));
    y4 = y3 + ( y3 * (rate /100));

    cout << "\nYear 1 account value $" << setprecision(2) << y1 << "  --  increase of $" <<
    ( invest * (rate /100)) << endl;
    
    cout << "Year 2 account value $" << y2 << "  --  increase of $" << setprecision(2) <<
    ( y1 * (rate /100)) << endl;
    
    cout << "Year 3 account value $" << y3 << "  --  increase of $" << setprecision(2) <<
    ( y2 * (rate /100)) << endl;
    
    cout << "Year 4 account value $" << y4 << "  --  increase of $" << setprecision(2) <<
    ( y3 * (rate /100)) << endl;
    
    
    return 0;
}
