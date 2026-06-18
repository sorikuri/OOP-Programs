#include <iostream>
using namespace std;
class Student 
{
    public :
    string name ;
    int age ;
    int rollno;
    Student () {}
    // Student (string name, int age, int rollno)
    // {
    //     this -> name = name ;
    //     this -> age = age ;
    //     this -> rollno = rollno;
    // }
    void inputDetails ()
    {
        cout << "Enter name :" << endl;
        cin >> name ;
        cout << "Enter age : " << endl;
        cin >> age ;
        cout << "Enter rollno : " << endl;
        cin >> rollno ;
    }
    void displayDetails ()
    {
        cout << name << endl;
        cout << age << endl; 
        cout << rollno << endl;
    }
};
int main () 
{
    Student s1;
    Student *ptr = &s1 ;
    ptr->inputDetails ();
    ptr->displayDetails();
return 0;
}