#include <iostream>
using namespace std;
class Student 
{
    public :
    string name ;
    double cgpa ;

    Student (string n, double cg)
    {
        name = n;
        cgpa = cg;
    }
    Student (Student &obj)
    {
        name = obj.name;
        cgpa = obj.cgpa;
    }
    void inputINFO ()
    {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << cgpa << endl;
    }
};
int main ()
{
    Student s1 ("Sobia", 5.9);
    Student s2 (s1);
    
    s1.inputINFO ();
    s2.inputINFO ();
    return 0;
}