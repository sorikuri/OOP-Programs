#include <iostream>
using namespace std;
// PROGRAM - 01
class Employee 
{
    string name ;
    int salary ;

    public :
    Employee ()
    {
        name = "Unknown";
        salary = 0;
    }
    Employee (string n, int s)
    {
        name = n;
        salary = s;
    }
    void display ()
    {
        cout << "NAME : " << name << endl;
        cout << "SALARY : " << salary << endl;
    }
    // Copy Constructor 
    Employee (Employee & emp) // IN EMP THE VALUS OF E1 WILL BE TEMPRORAY STORE
    {
        name = emp.name;
        salary = emp.salary;
    }

};
int main () 
{
    Employee E1 ("Hina ", 2000);
    E1.display ();
    Employee E2 (E1);
    E2.display () ;
return 0;
}