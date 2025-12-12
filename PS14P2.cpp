#include <iostream>
#include <string>
using namespace std;
/*
class Membership
{
    private :
    string firstName;
    string lastName;
    int age;
    string type;
    
public:
    Membership()
    {
        firstName = "Not Entered";
        lastName = "Not Entered";
        age = 18;
        type = "Bronze";
    }
    
    void setfirstName(const string& f)
    {
        firstName = f;
    }
    
    string getfirstName() const
    {
        return firstName;
    }
    
    void setlastName(const string& l)
    {
        lastName = l;
    }
    
    string getlastName() const
    {
        return lastName;
    }
    
    void setAge(int a)
    {
        age = a;
    }
    
    int getAge() const
    {
        return age;
    }
    
    void setType(const string& t)
    {
        if (t == "Gold" || t == "Silver" || t == "Bronze")
            type = t;
        else
            type = "Bronze"; // default
    }
    
    string getType() const
    {
        return type;
    }
    
    double getCost() const
    {
        double cost;
        
        if (type == "Gold") cost = 1200;
        else if (type == "Silver") cost = 1000;
        else cost = 500;
        
        if (age > 50)
            cost *= 0.90; // 10% discount
        
        return cost;
    }
};

int main()
{
    Membership member;
    
    cout << "Enter membership information. Press Ctrl+Z to quit.\n\n";
    
    while (true)
    {
        string first, last, type;
        int age;
        
        cout << "Enter first name: ";
        if (!(cin >> first)) break;
        
        cout << "Enter last name: ";
        if (!(cin>> last)) break;
        
        cout << "Enter age: ";
        if (!(cin >> type)) break;
        
        //Load into object
        member.setfirstName(first);
        member.setlastName(last);
        member.setAge(age);
        member.setType(type);
        
        //Display values
        cout << "\n--- Membership Details ---\n";
        cout << "First Name: " << member.getfirstName() << endl;
        cout << "Last Name: " << member.getlastName() << endl;
        cout << "Age: " << member.getAge() << endl;
        cout << "Membership Type: " << member.getType() << endl;
        cout << "Membership Cost: $" << member.getCost() << endl;
        cout << "\n";
    }
    
    cout << "\nProgram ended.\n";
    */
    class Computer
    {
    private:
        string make;
        string model;
        string cpu;
        string ram;
        string drive;
        string type;
        
    public:
        //Default constructor
        Computer()
        {
            make = "Lenovo";
            model = "LE100A";
            cpu = "Intel";
            ram = "32GB";
            drive = "HD";
            type = "Laptop";
        }
        
        void setMake(const string & m)
        {
            if (m == "Lenovo" || m == "HP" || m == "Apple")
                make = m;
            else
                make = "Lenovo";
        }
        
        void setModel(const string& mod) {model = mod;}
        
        void setCPU(const string& c)
        {
            if (c == "Intel" || c == "AMD")
                cpu = c;
            else
                cpu = "Intel";
        }
        
        void setRAM(const string& r)
        {
            if (r == "8GB" || r == "16GB" || r == "32GB")
                ram = r;
            else
                ram = "32GB";
        }
        
        void setDrive(const string& d)
        {
            if (d == "SSD" || d == "HD")
                drive = d;
            else
                type = "Laptop";
        }
        
        void setType(const string& t)
        {
            if (t == "Laptop" || t == "Notebook" || t == "Tablet" || t == "Desktop")
                type = t;
            else
                type = "Laptop";
        }
        
        string getMake() const {return make;}
        string getModel() const {return model;}
        string getCPU() const {return cpu;}
        string getRAM() const {return ram;}
        string getDrive() const {return drive;}
        string getType() const {return type;}
        
        //cost calculation
        double getCost() const
        {
            double cost = 0;
            
            //base from make
            if (make == "Lenovo") cost += 1200;
            else if (make == "HP") cost += 1000;
            else if (make == "Apple") cost += 2000;
            
            //cpu
            if (cpu == "Intel") cost += 200;
            
            //ram
            if (ram == "16GB") cost += 300;
            else if (ram == "32GB") cost += 500;
            
            //hard drive
            if (drive == "SSD") cost += 500;
            
            //type adjustments
            if (type == "Laptop") cost += 300;
            else if (type == "Tablet") cost -= 200;
            
            return cost;
        }
    };
    
int main ()
{
    Computer pc;
    
    cout << "Computer Asset Entry (Ctrl+Z to end)\n\n";
    
    while (true)
    {
        string make, model, cpu, ram, drive, type;
        
        cout << "Enter Make (Lenovo/HP/Apple): ";
        if (!(cin >> make)) break;
        
        cout << "Enter Model (no spaces): ";
        if (!(cin >> model)) break;
        
        cout << "Enter CPU (Intel/AMD): ";
        if (!(cin >> cpu)) break;
        
        cout << "Enter RAM (8GB/16GB/32GB):";
        if (!(cin >> ram)) break;
        
        cout << "Enter Hard Drive (SSD/HD):";
        if (!(cin >> drive)) break;
        
        cout << "Enter Type (Laptop/Notebook/Tablet/Desktop):";
        if (!(cin >> type)) break;
        
        //load vaules into object
        pc.setMake(make);
        pc.setModel(model);
        pc.setCPU(cpu);
        pc.setRAM(ram);
        pc.setDrive(drive);
        pc.setType(type);
        
        //display results
        cout << "\n--- Computer Asset Details ---\n";
        cout << "Make: " << pc.getMake() << endl;
        cout << "Model: " << pc.getModel() << endl;
        cout << "CPU: " << pc.getCPU() << endl;
        cout << "RAM: " << pc.getRAM() << endl;
        cout << "Hard Drive: " << pc.getDrive() << endl;
        cout << "Type: " << pc.getType() << endl;
        cout << "Cost: " << pc.getCost() << endl;
        cout << "\n";
    }
    cout << "\nProgram Ended.\n";
    return 0;
}
