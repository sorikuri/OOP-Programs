#include <iostream>
using namespace std;
//Task-04
class Student {
    public:
    string name;
    int rollNumber;
    char grade;

    Student()
    {
        name = "Unknown";
        rollNumber = 0;
        grade = 'A';
    }
    Student (string n, int rNo, char g)
    {
        name = n;
        rollNumber = rNo;
        grade = g;
    }
    Student (string Name, int RNo)
    {
        name = Name;
        rollNumber = RNo;
        grade = 'A';
    }
    void display ()
    {
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Grade : " << grade << endl;
        cout << "\n" << "\n" << endl;
    }
};
int main () {
    Student s1;
    Student s2 ("Sobia", 6384 , 'A');
    Student s3 ("Anmol", 6385);
    s1.display ();
    s2.display ();
    s3.display ();
return 0;
}