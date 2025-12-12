#include <iostream>
#include <iomanip>
using namespace std;
int quan;
int nob;
double cpb,ship;
double unip,extp,tax,tot;
char it;
string name;
double coa,cow;
string lname;
int dep;
double gi,agi,tr,itax;

int main() {
    
    /*
     cout << "Enter quantity of item : " ; // Type a number and press enter
     cin >> quan ; // Get input from keyboard
     if (quan >= 1000) {
     unip = 3.00;}
     else
     {unip = 5.00;}
     extp = quan*unip ;
     tax = extp * 0.07;
     tot = extp + tax ;
     cout << " The quantity of the item is : " << fixed << setprecision(2) << quan << endl;
     cout << " The unite price of the item is : " << fixed << setprecision(2) << unip << endl;
     cout << " The extended price of the item is : " << fixed << setprecision(2) << extp << endl;
     cout << " The tax on this item is : " << fixed << setprecision(2) << tax << endl;
     cout << " The total of this item is : " << fixed << setprecision(2) << tot << endl;
     
    
     cout << " Enter an item between A or B : " ; // Type a letter and press enter
     cin >> it ; // Get input from keyboard
     cout << " Enter quanity of item : " ; // Type a number and press enter
     cin >> quan ; // Get input from keyboard
     if (it == 'A') {
        unip = 10.00;}
     else
        {it = 'B';
        unip = 20.00;}
     extp = quan*unip;
     cout << " The item you picked is : " << it << endl;
     cout << " The unit price of the item is : " << fixed << setprecision(2) << unip << endl;
     cout << " The extended price of the item is : " << fixed << setprecision(2) << extp << endl;

    
     cout << " Enter the number of books : " ; // Type a number and press enter
     cin >> nob; // Get input from keyboard
     cout << " Enter the cost per book : " ; // Type a number and press enter
     cin >> cpb; //
     tot = nob*cpb;
     if (tot>50.00){
        ship = 0.00;}
     else
       {ship = 25.00;}
     cout << " The order total is : " << fixed << setprecision(2) << tot << endl;
     cout << " The shipping charge is : " << fixed << setprecision(2) << ship << endl;
    
    
     cout << " Enter name of appliance : " ; // Type a name and press enter
     cin >> name; // Get input from keyboard
     cout << " Enter the cost of the appliance : " ; // Type a number and press enter
     cin >> coa; // Get input from keyboard
     if (coa > 1000.0) {
        cow = coa*0.10;}
     else
       {cow = coa*0.05;}
     tot = coa + cow;
     cout << " The name of appliance is : " << fixed << setprecision(2) << name << endl;
     cout << " The cost of the appliance is : " << fixed << setprecision(2) << coa << endl;
     cout << " The cost of the warrantee is : " << fixed << setprecision(2) << cow << endl;
     cout << " The total is : " << fixed << setprecision(2) << tot << endl;
 */
    
     cout << " Enter your last name : " ; // Enter a name and press enter
     cin >> lname; // Get input from keyboard
     cout << " Enter number of dependents : " ; // Enter a number and press enter
     cin >> dep; // Get input from keyboard
     cout << " Enter gross income : " ; // Enter a nuumber and press enter
     cin >> gi; // Get input from keyboard
     agi = gi-(dep*12000);
     if (agi > 50000) {
        tr = 0.20;}
     else
       {tr = 0.10;}
     itax = agi*tr;
     if (itax<0)
       {itax = 100.00;}
     cout << " Last name is : " << lname << endl;
     cout << " The gross income is : " << fixed << setprecision(2) << gi << endl;
     cout << " The number of dependents is : " << dep << endl;
     cout << " The adjusted gross income is : " << fixed << setprecision(2) << agi << endl;
     cout << " The income tax is : " << fixed << setprecision(2) << itax << endl;
    
 return 0;}

