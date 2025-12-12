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
    
    



double computeMPG(double gallons, double miles)
{
    return miles/gallons;
}

int main()
{
    ifstream inFile("trips.txt");
    if (!inFile)
    {
        cerr << "Error opening trips.txt\n";
        return 1;
    }
    double gallons, miles;
    double mpg;
    
    double totalGallons = 0.0;
    double totalMiles = 0.0;
    
    cout << fixed << setprecision(2);
    cout << left << setw(10) << "Gallons"
         << setw(10) << "Miles"
         << setw(10) << "MPG" << endl;
    
    while (inFile >> gallons >> miles)
    {
        mpg= computeMPG(gallons, miles);
        
        totalGallons += gallons;
        totalMiles += miles;
        
        cout << left << setw(10) << gallons
             << setw(10) << miles
             << setw(10) << mpg << endl;
    }
        
    cout << "\nTotal gallons used: " << totalGallons << endl;
    cout << "Total miles travelled: " << totalMiles << endl;
    */


double computeBiWeekly(double annualSalary)
{
    return annualSalary / 26.0;
}

int main()
{
    ifstream inFile("empl.txt");
    if (!inFile)
    {
        cerr << "Error opening empl.txt\n";
        return 1;
    }
    
    string lname;
    double annualSalary;
    
    double totalAnnual = 0.0;
    int count = 0;
    
    cout << fixed << setprecision(2);
    cout << left << setw(12) << "Last name"
    << setw(15) << "Annual Salary"
    << setw(15) << "Bi-Weekly Pay" << endl;
    
    while (inFile >> lname >> annualSalary)
    {
        double biWeekly = computeBiWeekly(annualSalary);
        
        cout << left << setw(12) << lname
        << setw(15) << annualSalary
        << setw(15) << biWeekly << endl;
        
        totalAnnual += annualSalary;
        count++;
    }
    double average = (count > 0) ? totalAnnual / count : 0;
    
    cout << "\nTotal annual salary: $" << totalAnnual << endl;
    cout << "Number of Employees: " << count << endl;
    cout << "Average annual salary: $" << average << endl;
    
    
    inFile.close();
    return 0;
}




