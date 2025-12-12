#include <iostream>
using namespace std;
string fname, lname;
int x,y;
int sum;
int holdscore;
int a,b,c;

int main() {
   
 /*   cout << "Enter first name";
    cin >> fname;
    cout << "Enter last name";
    cin >> lname;
    cout << "Hello " << fname << " " << lname << endl;
*/
    cout << "Type a number:" ; // Type a number and press enter
    cin >> x; // Get your user input from the keyboard
    cout << "Type another number:" ; // Type a number and press enter
    cin >> y; // Get your user input from the keyboard
    sum = x+y;
    cout << "The sum of "  << x << " and " << y << " is:" << x+y << endl;
    /*
    cout << "Enter last name:";
    cin >> lname;
    cout << "Enter score";
    cin >> holdscore;
    cout << lname << " has a score of " << holdscore << endl;
    cout << "The sum of " << x << "and" << y << "is:" << x+y << endl;
    cout << "The product of "  << x << " and " << y << " is:" << x*y << endl;
    cout << "The difference of "  << x << " and " << y << " is:" << x - y << endl;

    cout << "Type a number:" ; // Type a number and press enter
    cin >> a; // Get your user input from the keyboard
    cout << "Type another number:" ; // Type a number and press enter
    cin >> b; // Get your user input from the keyboard
    cout << "Type an additional number:" ; // Type a number and press enter
    cin >> c; // Get your user input from the keyboard
    cout << " The sum of "  << a << " and " << b << "multiplied by " << c << " is: " << (a+b)*c << endl;*/
    return 0;
}
