#include <iostream>
#include <string>
#include <vector>
using namespace std;

void displayCars(string makes[], string models[], int size)
{
    cout << "\nCar List:\n";
    for (int i=0; i<size; i++) {
        cout << "Car" << i + 1 << ":" << makes[i]
        << " " << models[i] << endl;
    }
}

int main()
{
    int size;
    
    cout << "How many cars do you want to enter? ";
    cin >> size;
    
    string* makes = new string [size];
    string* models = new string [size];
    
    for (int i=0; i<size; i++)
    {
        cout << "\nEnter make for car " << i+1 << ": ";
        cin >> makes[i];
        
        cout << "Enter model for car " << i+1 << ": ";
        cin >> models[i];
    }
    
    displayCars(makes,models,size);
    
    delete[] makes;
    delete[] models;
    
    /*
    struct Employee
    {
        string fname;
        string lname;
        double hours;
        double rate;
        double grossPay;
    };
    
    double computeGross(double hours, double rate)
    {
        {
            if (hours > 40)
            {
                double overtimeHours = hours - 40;
                return (40 * rate) + (overtimeHours * rate * 1.5);
            } else {
                return hours * rate;
            }
        }
        
        
        int main()
        {
            int n;
            cout << "Enter number of employees: ";
            cin >> n;
            
            vector< Employee> employees(n);
            
            for (int i=0; i<n; i++)
            {
                cout << "\nEmployee " << i+1 << ":\n";
                
                cout << "First name: ";
                cin >> employees[i].fname;
                
                cout << "Last name: ";
                cin >> employees[i].lname;
                
                cout << "Hours worked: ";
                cin >> employees[i].hours;
                
                cout << "Hourly rate: ";
                cin >> employees[i].rate;
                
                employees[i].grossPay = computeGross(employees[i].hours,employees[i].rate);
                
            }
            
            
            cout << "\n-Employee Payroll-\n";
            for (int i=0; i<n; i++)
            {
                cout << "\nEmployee " << i+1 << ":\n";
                cout << "Name: " << employees[i].fname << " " << employees [i].lname << endl;
                cout << "Hours: " << employees[i].hours << endl;
                cout << "Rate: $" << employees[i].rate << endl;
                cout << "Gross Pay: $" << employees[i].grossPay << endl;
            }
            
            
            struct Students
            {
                string fname;
                string lname;
                char districtCode;
                int creditHours;
                double tution;
            };
            
            double computeTution(char districtCode, int creditHours)
            {
                double rate = (districtCode == 'I')? 250.0 : 500.0;
                return creditHours*rate;
            }
            
            void displayStudents(const vector<Student>& students)
            {
                cout << "\n-Student List-\n";
                for (const auto& s : students)
                {
                    cout << "Name: " << s.fname<< " "<< s.lname<< endl;
                    cout << "District: " << s.districtCode<< endl;
                    cout << "Credits: " << s.creditHours<< endl;
                    cout << "Tution: $" << s.tuition<< endl<< endl;
                }
                cout << "Total students: " << students.size() << endl;
            }
            
            int main()
            {
                vector<Student>students;
                Student temp;
                
                cout << "Enter student information (Ctrl+Z to stop):\n";
                
                while (true)
                {
                    cout << "\nFirst name: ";
                    if (!(cin>> tep.lname)) break;
                    
                    cout << "Last name: ";
                    if (!(cin >> temp.lname)) break;
                    
                    cout << "District code (I/0): ";
                    if (!(cin >> temp.districtCode)) break;
                    
                    cout << "Credit hours: ";
                    if (!(cin >> temp.creditHours)) break;
                    
                    temp.tuition = computeTuition(temp.districtCode, temp.creditHours);
                    
                    students.push_back(temp);
                }
            }
            displayStudents(students);
            */
            return 0;
        }
    
