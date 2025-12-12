#include <iostream>
#include <iomanip>
using namespace std;
int x,y;
int sum;
string lname;
int a;
double b;
int ln,wid;
int cr;
double price;
double discount;
double percent;
double total;


int main() {
   /*
    cout << " Enter the quantity:" ; // Type a number and press enter
    cin >> x; // Get your user input from the keyboard
    cout << " Now enter the unitprice: ";// Type a number and press enter
    cin >> y; // Get your user input from the keyboard
    sum = x*y;
    cout << " The extended price is: " << x*y << endl;
    */
    cout << " Enter your last name: "; // Type a name and press enter
    cin >> lname; // Get your user input from the keyboard
    cout << " Enter amount of hours: "; // Type a number and press enter
    cin >> a; // Get your user input from the keyboard
    cout << " Enter the pay rate: "; // Type a number and press enter
    cin >> b; // Get your user input from the keyboard
    sum = a*b;
    cout << lname << " ,you have a gross pay of :" << fixed << setprecision(2) <<a*b<< endl;
    /*
   
    cout << " Enter the length of the rectangle: "; // Type a number and press enter
    cin >> ln; // Get your user input from the keyboard
    cout << " Enter the width of the rectangle: "; // Type a number and press enter
    cin >> wid; // Get your user input from the keyboard
    sum = ln*wid;
    cout << " The area of the rectangle is: " << ln*wid << endl;
    sum = 2*ln + 2*wid;
    cout << " The circumference of the rectangle is: " << 2*ln + 2*wid << endl;
    
    
    cout << " Enter your last name: "; // Type a name and press enter
    cin >> lname; // Get your user input from the keyboard
    cout << " Enter the amount of credits taken: "; // Type a number and press enter
    cin >> cr; // Get your user input from the keyboard
    sum = cr* 250+100;
    cout << lname << " , your tutition is: " << cr*250+100 << endl;
    
    
    cout << "Enter the price of the item: "; // Type a number and press enter
    cin >> price; // Get your user input from the keyboard
    cout << "Enter the discount percentage: "; // Type a number and press enter
    cin >> percent; // Get your user input from the keyboard
    discount = .01 * percent;
    total =  price - (discount * price);
    cout << " This item has " << percent << "off, therefore the price is :" << fixed << setprecision(2) << total << endl;
    
    */
    return 0;
}
