#include <iostream>
using namespace std;
// Task - 01
class Student {
private:
    string Name;
    int id;
    string discipline;
    float gpa;

public:
    void inputData ()
    {
        cout << "Enter Student name : " << endl;
        cin >> Name;
        cout << "Enter Student ID : " << endl;
        cin >> id;
        cout << "Enter Student GPA : " << endl;
        cin >> gpa;
        cout << "Enter Student Discipline : " << endl;
        cin >> discipline;
        
    }
    void setData (string n, int identity_number, float GPA, string d)
    {
        Name = n;
        id = identity_number;
        gpa = GPA;
        discipline = d;
    }
    void showData ()
    {
        cout << "Name : " << Name << endl;
        cout << "Identity Card : " << id << endl;
        cout << "Discipline : " << discipline << endl;
        cout << "GPA : " << gpa << endl;
    }
};
int main () 
{
Student s1,s2;
    s1.inputData ();
    s2.setData ("Alexander", 7832, 3.5, "English" );
    s1.showData ();
    s2.showData ();
    return 0;
}