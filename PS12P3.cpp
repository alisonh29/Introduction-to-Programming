#include <iostream>
#include <string>
using namespace std;

/*
void readStudents(string fnames[], string lnames[], double gpas[], int size)
{
    cout << "Enter student firstname, last name, and GPA:\n";
    for (int i=0; i<size; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> fnames[i] >> lnames[i] >> gpas[i];
    }
}

void displayStudents(const string fnames[], const string lnames[], const double gpas[], int size)
{
    cout << "\n-Students List-\n";
    for (int i=0; i <size; i++)
    {
        cout << fnames[i] << " " << lnames[i] << " GPA: " << gpas[i] << endl;
    }
}

void displayStudentsReverse(const string fnames[], const string lnames[], const double gpas[], int size)
{
    cout << "\n-Students List in Reverse order-\n";
    for (int i=size - 1; i>=0; i--)
    {
        cout << fnames[i] << " " << lnames[i] << " GPA: " << gpas[i] << endl;
    }
}

int main ()
{
    const int SIZE =10;
    string fnames[SIZE];
    string lnames[SIZE];
    double gpas[SIZE];
    
    readStudents(fnames,lnames,gpas,SIZE);
    
    displayStudents(fnames,lnames,gpas,SIZE);
    
    displayStudentsReverse(fnames,lnames,gpas,SIZE);
    

const int SIZE = 8;

void readCities(string cities[], int populations[], int size)
{
    cities[0] = "Chicago"; populations[0] = 4000000;
    cities[1] = "Denver"; populations[1] = 2500000;
    cities[2] = "Milwaukee"; populations[2] = 3000000;
    cities[3] = "Detroit"; populations[3] = 2200000;
    cities[4] = "Oklahoma"; populations[4] = 1250000;
    cities[5] = "Dallas"; populations[5] = 2100000;
    cities[6] = "Houston"; populations[6] = 1750000;
    cities[7] = "Indianapolis"; populations[7] = 1400000;
}

void displayCities(const string cities[], const int populations[], int size)
{
    cout <<"\n-City List-\n";
    for (int i=0; i<size; i++)
    {
        cout << cities[i] << ": " << populations[i]<< endl;
    }
}

int findCity(const string cities[], int size, const string& city)
{
    for (int i=0; i < size; i++)
    {
        if (cities[i]== city)
            return i;
    }
    return -1;
}

int main ()
{
    string cities[SIZE];
    int populations[SIZE];
    
    readCities(cities,populations,SIZE);
    displayCities(cities,populations,SIZE);
    
    cout << "\nEnter city name, Ctrl+Z to stop :\n";
    string input;
    
    while (true)
    {
        cout << "City: ";
        if (!(cin>> input)) break;
        
        int index = findCity(cities,SIZE,input);
        if (index != -1)
        {
            cout << cities[index] << "has a population of " << populations[index] << endl;
        }else{
            cout << input << " not found" << endl;
        }
    }
    
    cout << "Goodbye. Have a nice day.\n";
  */

const int SIZE = 10;

void readEmployees(string fnames[], string lnames[], double salaries[], int size)
{
    fnames[0] = "John"; lnames[0] = "Jones"; salaries[0] = 55000.00;
    fnames[1] = "Frank"; lnames[1] = "Smith"; salaries[1] = 75000.00;
    fnames[2] = "Mark"; lnames[2] = "Smith"; salaries [2] = 45000.00;
    fnames[3] = "Dave"; lnames[3] = "Roberts"; salaries [3] = 80000.00;
    fnames[4] = "Sally"; lnames[4] = "Davis"; salaries [4] = 90000.00;
    fnames[5] = "Tom"; lnames[5] = "Hanks"; salaries [5] = 100000.00;
    fnames[6] = "Betty"; lnames[6] = "Crocker"; salaries [6] = 98000.00;
    fnames[7] = "Sue"; lnames[7] = "Klean"; salaries [7] = 78000.00;
    fnames[8] = "Joe"; lnames[8] = "Maddon"; salaries [8] = 65000.00;
    fnames[9] = "Kris"; lnames[9] = "Bryant"; salaries [9] = 70000.00;
}

void displayEmployees(const string fnames[], const string lnames[], const double salaries[], int size)
{
    cout <<"\n-Employee List-\n";
    for (int i=0; i < size; i++)
    {
        cout << fnames[i] << " " << lnames[i] << " Salary: $" << salaries[i] << endl;
    }
}

int findEmployee(const string lnames[], int size, const string& searchlname)
{
    for (int i=0; i<size; i++)
    {
        if (lnames[i] == searchlname)
            return i;
    }
    return -1;
}

int main ()
{
    string fnames[SIZE];
    string lnames[SIZE];
    double salaries[SIZE];
    
    readEmployees(fnames,lnames,salaries,SIZE);
    
    displayEmployees(fnames,lnames,salaries,SIZE);
    
    string input;
    cout << "\nEnter a last name to search Ctrl+Z to stop):\n";
    while (true)
    {
        cout << "Last name: ";
        if (!(cin >> input)) break;
        
        int index = findEmployee(lnames,SIZE,input);
        if (index !=-1)
        {
            cout <<fnames[index] << " " <<lnames[index]
            << " Salary: $" << salaries[index] << endl;
        }else{
            cout << input << " not found" << endl;
        }
    }

    cout << "Goodbye. Have a nice day.\n";
    
    return 0;
}



