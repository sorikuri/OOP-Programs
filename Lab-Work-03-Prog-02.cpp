#include <iostream>
#include <string>
using namespace std;
// PROGRAM - 02
class Student
{
    public:
    static int tstudent ;
    string name;
    string course;
    int rollNumber ;

    void input ()
    {
        cout << "Enter name : " << endl;
        getline (cin, name);
        cout << "Enter Course : " << endl;
        getline (cin, course);
        tstudent ++;
    }
    void getRollNumber ()
    {
        cout << "Enter Roll Number " << endl;
        cin >> rollNumber ;
        tstudent ++;
    }
    void display ()
    {
        cout << "NAME : " << name << endl;
        cout << "COURSE NAME : " << course << endl;
        cout << "ROLL NUMBER : " << rollNumber <<endl;
        cout << "\n" << "\n" <<endl;
    }
    static int displayTotalStudent ()
    {
        cout << "Total Students are : " << tstudent << endl;
    }
};
int Student :: tstudent = 0;
int main ()
{
    Student s1,s2,s3;
    s1.input ();
    s1.getRollNumber ();
    s2.input ();
    s2.getRollNumber ();
    s3.input ();
    s3.getRollNumber ();
    s1.display();
    s2.display();
    s3.display();
    Student :: displayTotalStudent ();
    return 0;
}