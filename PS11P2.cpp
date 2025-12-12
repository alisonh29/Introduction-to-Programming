#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
/*
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
    */


double computeExtended(int quantity, double price)
{
    return quantity * price;
}

int main()
{
    ifstream inFile("grocery.txt");
    if (!inFile)
    {
        cerr << "Error opening grocery.txt\n";
        return 1;
    }
    
    string item;
    int quantity;
    double price;
    double extendedPrice;
    double sumExtended = 0.0;
    
    cout << fixed << setprecision(2);
    cout << left << setw(12) << "Item"
         << setw(10) << "Qty"
         << setw(12) << "Price"
         << setw(15) << "Ext Price" << endl;
    
    while (inFile >> item >> quantity >> price)
    {
        extendedPrice= computeExtended(quantity, price);
        sumExtended += extendedPrice;
        
        cout << left << setw(12) << item
             << setw(10) << quantity
             << setw (12) << price
            << setw (15) << extendedPrice << endl;
    }
    
    double tax = sumExtended * 0.07;
    double total = sumExtended + tax;
    
    cout <<"\nSum of extended prices: $" << sumExtended << endl;
    cout << "Tax (7%): $" << tax << endl;
    cout << "Total receipts: $" << total << endl;
    
    inFile.close();
    return 0;
}

