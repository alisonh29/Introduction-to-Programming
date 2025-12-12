#include<iostream>
#include<iomanip>
using namespace std;
string lname;
int sc;
char gr;
double lbs,ppp,tot;
char jc;
double hw,pr,tp;
double sal,tr,ta;
double we,ra;


int main() {
    /*
    cout << " Enter your last name: "; // Enter name and press enter
    cin >> lname; // Get input from keyboard
    cout << " Enter your score: "; // Enter number and press enter
    cin >> sc; // Get input from keyboard
    if (sc >= 90)
    {
        gr = 'A';
    }
    else
    {
        if (sc >= 80)
        {
            gr = 'B';
        }
        else
        {
            if (sc >= 70)
            {
                gr = 'C';
            }
            else
            {
                if (sc >= 60)
                {
                    gr = 'D';
                }
                else
                {
                    gr = 'F';
                }
            }
        }
    }
    cout << lname << " has a grade of : " << gr << endl;
    
    /*
    cout << " Enter quantity of apple in pounds: "; // Enter a number and press enter
    cin >> lbs; //
    if (lbs > 100)
    {
        ppp = 0.10;
    }
    else
    {
        if (lbs >= 50)
        {
            ppp = 0.25;
        }
        else
        {
            ppp = 0.50;
        }
    }
        
    tot = lbs * ppp;
    cout << " The price of the apples per pound is : " << fixed << setprecision(2)<< ppp << endl;
    cout << " The total cost is : " << fixed << setprecision(2)<< tot << endl;
    
     
    cout << " Enter your last name : "; // Enter a name and press enter
    cin >> lname; // Get input from keyboard
    cout << " Enter amount of hours worked : "; // Enter a number and press enter
    cin >> hw; // Get input from keyboard
    cout << " Enter job code ( E, J , A ) : "; // Enter a letter and press enter
    cin >> jc; // Get input from keyboard
    if (jc == 'E')
    {
        pr = 25.00;
    }
    else
    {
        if (jc == 'J')
        {
            pr = 20.00;
        }
        else
        {
            if (jc == 'A')
            {
                pr = 15.00;
            }
        }
    }
    tp = hw * pr;
    cout << " Employee : " << lname << endl;
    cout << " Hours worked : " << fixed << setprecision(2) << hw << endl;
    cout << " Pay rate : " << fixed << setprecision(2) << pr << endl;
    cout << " Total pay : " << fixed << setprecision(2) << tp << endl;
    */
    
    cout << " Enter your annual salary: "; // Enter a number and press enter
    cin >> sal; // Get input from keyboard
    if (sal > 100000)
    {
        tr = 0.40;
    }
    else
    {
        if (sal >= 50000)
        {
            tr = 0.35;
        }
        else
        {
            tr = 0.25;
        }
    }
    ta = sal * tr;
    cout << " The salary is : " << fixed << setprecision(2)<< sal<< endl;
    cout << " The tax rate is : " << fixed << setprecision(2)<< tr<< endl;
    cout << " The tax amount owed : " << fixed << setprecision(2)<< ta<< endl;
    
    /*
    cout << " Enter your weight in pounds : "; // Enter a number and press enter
    cin >> we;// Get input from keyboard
    if (we > 100)
    {
        ra = 0.50;
    }
    else
    {
        if (we >= 30 && we <= 100)
        {
            ra = 0.25;
        }
        else
        {
            if (we >= 20 && we < 30)
            {
                ra = 0.20;
            }
            else
            {
                if (we < 20)
                {
                    ra = 0.10;
                }
            }
        }
    }
    tot = we * ra;
    cout << " Weight is : " << fixed << setprecision(2)<< we << endl;
    cout << " Rate per pound is : " << fixed << setprecision(2)<< ra << endl;
    cout << " Total amount paid is : " << fixed << setprecision(2)<< tot << endl;
*/
    
    
return 0;
}

