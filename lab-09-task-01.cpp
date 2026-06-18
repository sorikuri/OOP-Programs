//Task-01
#include <iostream>
using namespace std;
class Employee 
{
    public :
    string Name ;
    int EmployeeID ;
    float Salary ;
    Employee ()
    {
        cout << "I am Employee class constructor. " << endl;
    }
    void displayName ()
    {
        cout << "Name : " << Name << endl;
    }
    void displayEmpId ()
    {
        cout << "Employee ID : " << EmployeeID << endl;
    }
    void displaySalary ()
    {
        cout << "Salary : " << Salary << endl;
    }
};
class Manager : public Employee
{
    public :
    int NumSubordinates ;
    Manager () 
    {
        cout << "I am Manager class constructor. " << endl;
    }

    void displayNumOfSubordinates ()
    {
       cout << "Numbers of Subordinates : " << NumSubordinates << endl; 
    }
};
class Person : public Manager 
{
    public : 
    float BounsPackage ;
    Person () 
    {
        cout << "I am Person class constructor. " << endl;
    }
    void displayBounusPackage ()
    {
        cout << "Bonus Package : " << BounsPackage << endl;
    }
};
int main () 
{
   Person p1;
   p1.Name = "Sara";
   p1.EmployeeID = 6384 ;
   p1.Salary = 23000;
   p1.NumSubordinates = 5 ;
   p1.BounsPackage = 67.3 ;
   p1.displayName ();
   p1.displayEmpId ();
   p1.displaySalary ();
   p1.displayNumOfSubordinates ();
   p1.displayBounusPackage ();
return 0;
}