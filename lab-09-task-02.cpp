// Task-02
#include <iostream>
using namespace std;
class Staff 
{
    public :
    string Name ;
    int staffID ;
    Staff ()
    {
        cout << "I'm Staff class constructor." << endl ;
    }
    void displayName ()
    {
        cout << "Name : " << Name << endl;
    }
    void displayId ()
    {
        cout << "Staff Id : " << staffID << endl;
    }
};
class DepartmentHead : public Staff
{
    public : 
    string deparmentName ;
    DepartmentHead()
    {
        cout << "I am DepartmentHead constructor." << endl ;
    }
    void displaydepartmentName ()
    {
        cout << "Department Name : " << deparmentName << endl;
    }
};
class Principal : public DepartmentHead
{
    public :
    string SchoolName ;
    Principal ()
    {
        cout << "I am Principal class constructor." << endl;
    }
    void displayPrincipal ()
    {
        cout << "School Name : " << SchoolName << endl;
    }
};
int main () 
{
    Principal p1;
    p1.Name = "Farooq Sahab";
    p1.staffID = 28362;
    p1.deparmentName = "Computer Science ";
    p1.SchoolName = "Peshawar Model Degree College";
    p1.displayName();
    p1.displayId ();
    p1.displaydepartmentName ();
    p1.displayPrincipal ();
return 0;
}