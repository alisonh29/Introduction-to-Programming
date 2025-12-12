#include<iostream>
#include<string>
using namespace std;

class Employee
{
public:
    Employee();
    virtual~Employee();
    
    void fname(string fn);
    string fname();
    
    void lname(string ln);
    string lname();
    
    void salary(float s);
    float salary();
    
    virtual float bonus();
    
protected:
    string m_fn, m_ln;
    float m_salary;
    float m_bonus;
};

Employee::Employee()
{
    m_salary = 0.0f;
}

Employee::~Employee()
{
    cout <<"Goodbye (Employee Destructor)" << endl;
}

void Employee::fname(string fn)
{
    m_fn=fn;
}

string Employee::fname()
{
    return m_fn;
}

void Employee::lname(string ln)
{
    m_ln=ln;
}

string Employee::lname()
{
    return m_ln;
}

void Employee::salary(float s)
{
    m_salary=s;
}

float Employee::salary()
{
    return m_salary;
}

float Employee::bonus()
{
    if (m_salary > 100000.0f)
        m_bonus = m_salary* 0.20f;
    else
        m_bonus = m_salary *0.10f;
    
    return m_bonus;
}

class Manager : public Employee
{
public:
    Manager();
    ~Manager();
    
    float Long_Term_Bonus();
    
    float bonus() override;
};

Manager::Manager()
{
}

Manager::~Manager()
{
    cout<<"Goodbye(Manager Destructor)" <<endl;
}

float Manager::Long_Term_Bonus()
{
    return m_salary* .50f;
}

float Manager::bonus()
{
    return m_salary* 0.50f;
}

int main()
{
    Manager mgr;
    
    mgr.fname("Alison");
    mgr.lname("Hernandez");
    mgr.salary(130000.0f);
    
    cout<<"Manager Object Test"<< endl;
    cout<<"First Name: "<< mgr.fname()<< endl;
    cout<<"Last Name: "<< mgr.lname()<< endl;
    cout<<"Salary: "<< mgr.salary()<< endl;
    
    cout<<"Bonus (Overridden): "<< mgr.bonus()<< endl;
    cout<<"Long-Term Bonus: "<< mgr.Long_Term_Bonus()<< endl;
    
    return 0;
}
