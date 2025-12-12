#include <iostream>
#include <iomanip>
using namespace std;
int x,y;
double sum;
int sp, q;
int fc, ppu, cpu, bep;
double p,c, percentageChange;
double total;
double percent;
double tip;
double price;

int main () {
    /*
    cout << " Enter first exam score : "; // Type a number and press enter
    cin >> x; // Get your input from the keyboard
    cout << " Enter second exam score : "; // Type a number and press enter
    cin >> y; // Get your input from the keyboard
    sum = x*.60;
    sum = y*.40;
    cout << " The total score is : " << (x*.60)+(y*.40) << endl;
    
    cout << " Enter stock price : "; // Type a number and press enter
    cin >> sp; // Get your input from the keyboard
    cout << " Enter quantity of stock : "; // Type a number and press enter
    cin >> q; // Get your input from the keyboard
    sum = sp*q;
    cout << " The current value of the stock is : " << sp*q << endl;
    
    cout << " Enter total of your meal : "; // Type a number and press enter
    cin >> total; // Get your input from the keyboard
    cout << " The tip chosen for this meal is 15 % " ;
    sum = total + (total*.15);
    cout << " Your final total is now : " << fixed << setprecision(2) << sum << endl;
    
    cout << " Enter the purchase price of stock : "; // Type a number and press enter
    cin >> p; // Get your input from the keyboard
    cout << " Enter the current price of stock : "; // Type a number and press enter
    cin >> c; // Get your input from the keybaord
    percentageChange = ((p-c)/p)*100;
    cout << " The percentage change of the stock would be : " << ((p-c)/p)*100 << endl;
   */
    
    cout << " Enter fixed costs : "; // Type a number and press enter
    cin >> fc; // Get your input from the keyboard
    cout << " Enter price per unit : "; // Type a number and press enter
    cin >> ppu; // Get your input from the keyboard
    cout << " Enter cost per unit : "; // Type a number and press enter
    cin >> cpu; // Get your input from the keyboard
    bep = fc/ (ppu-cpu);
    cout << " In order to reach the break even point you must sell this many units : "  << bep << endl;
    
    return 0;
}

