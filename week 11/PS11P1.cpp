#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void computeSavingsAndTax(double MSRP, double salesPrice, double &savings, double &salesTax)
{
    savings = MSRP - salesPrice;
    salesTax = salesPrice * 0.07;
}

int main ()
{
    ifstream inFile("auto.txt");
    if(!inFile)
    {
        cerr <<" Error opening file!" << endl;
        return 1;
    }
    
    string make, model;
    double MSRP, salesPrice;
    double savings, salesTax;
    double totalSavings = 0.0;
    
    cout << fixed << setprecision(2);
    cout << left << setw(10) << "Make"
         << setw (10) << "Model"
         << setw (10) << "MSRP"
         << setw (12) << "SalesPrice"
         << setw (10) << "Savings"
         << setw (10) << "SalesTax" << endl;
    
    while (inFile >> make >> model >> MSRP >> salesPrice)
    {
        computeSavingsAndTax(MSRP, salesPrice, savings, salesTax);
        totalSavings += savings;
        
        cout << left << setw(10) << make
             << setw(10) << model
             << setw(10) << MSRP
             << setw(12) << salesPrice
             << setw(10) << savings
             << setw(10) << salesTax << endl;
    }
    
    cout << "\nTotal savings for all autos: $" << totalSavings << endl;
    inFile.close();
    
    return 0;
}
