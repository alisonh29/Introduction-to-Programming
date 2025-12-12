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
    */
    

void computeCosts(char studentCode, double credits, double&tuition, double &fees)
{
    double costPerCredit;
    
    if (studentCode == 'I')
        costPerCredit = 250.0;
    else
        costPerCredit = 500.0;
    
    tuition = credits * costPerCredit;
    
    fees = tuition * 0.10;
}

int main()
{
    ifstream inFile("student.txt");
    if (!inFile)
    {
        cerr << "Error: Could not open student.txt\n";
        return 1;
    }
    string lname;
    char studentCode;
    double credits;
    
    double tuition, fees;
    double totalTuition = 0.0;
    int count = 0;
    
    cout << fixed << setprecision(2);
    cout << left
         << setw(12) << "Last Name"
         << setw(8) << "Code"
         << setw(12) << "Credits"
         << setw(15) << "Tuition"
         << setw(15) << "Fees" << endl;
    
    while (inFile >> lname >> studentCode >> credits)
    {
        computeCosts(studentCode, credits, tuition, fees);
        
        cout << left
             << setw(12) << lname
             << setw(8) << studentCode
             << setw(12) << credits
             << setw(15) << tuition
             << setw(15) << fees << endl;
        
        totalTuition += tuition;
        count++;
    }
    double averageTuition = (count > 0) ? totalTuition / count : 0;
    
    cout << "\nTotal tuition owed: $" << totalTuition << endl;
    cout << "Number of students: " << count << endl;
    cout << "Average tuition per student: $" << averageTuition << endl;
    

    inFile.close();
    return 0;
}





