#include <iostream>
using namespace std;
class Student 
{
    private :
    int ID;
    string NAME;
    int AGE;
    int MARKS;

    public:
    static int totalStudents ;
    Student ()
    {
        ID =0;
        NAME = "UNKNOWN";
        AGE =0;
        MARKS = 0;
        totalStudents ++ ;
    }
    Student (int id, string name, int age, int marks)
    {
        ID = id ;
        NAME = name ;
        AGE = age ;
        MARKS = marks;
        totalStudents ++ ;
    }
    Student (const Student & otherStudent)
    {
        ID = otherStudent.ID ;
        NAME = otherStudent.NAME ;
        AGE = otherStudent.AGE ;
        MARKS = otherStudent.MARKS ;
        totalStudents ++ ;
    }
    ~ Student ()
    {
        cout << "GIRL I'M HERE ! YOUR ONE AND ONLY DESTRUCTOR " << endl;
    }
    void setID (int Id)
    {
        ID = Id ;
    }
    int getID ()
    {
        return ID ;
    }
    void setName (string Name)
    {
        NAME = Name ;
    }
    string getName ()
    {
        return NAME ;
    }
    void setAge (int Age)
    {
        AGE = Age ;
    }
    int getAge ()
    {
        return AGE ;
    }
    void setMarks (int Marks)
    {
        MARKS = Marks;
    }
    int getMarks ()
    {
        return MARKS ;
    }
    static void displayTotalStudent ()
    {
        cout << "Total Students : " << totalStudents << endl;
    }
    char calculateGrade ()
    {
        if (MARKS >= 80)
        {
            return 'A';
        }
        else if (MARKS >=70 && MARKS < 80)
        {
            return 'B';
        }
        else if (MARKS >=60 && MARKS < 70)
        {
            return 'C';
        }
        else 
        {
            return 'F';
        }
    }
    char calculateGrade (int m)
    {
        MARKS = m ;
        if (MARKS >= 80)
        {
            return 'A';
        }
        else if (MARKS >=70 && MARKS < 80)
        {
            return 'B';
        }
        else if (MARKS >=60 && MARKS < 70)
        {
            return 'C';
        }
        else 
        {
            return 'F';
        }
    }
    void display ()
    {
        cout << "---------------------------------------------" <<endl;
        cout << "ID : " << ID <<endl;
        cout << "NAME : " << NAME <<endl;
        cout << "AGE : " << AGE <<endl;
        cout << "MARKS : " << MARKS <<endl;
    }
};
int Student :: totalStudents = 0 ;
int main () 
{
    Student s1;
    s1.setID (6384);
    s1.setName ("Sobia");
    s1.setAge (20);
    s1.setMarks (87);
    cout << s1.getID () <<endl;
    cout << s1.getName () <<endl;
    cout << s1.getAge () <<endl;
    cout << s1.getMarks () <<endl;
    cout << "Grade : " << s1.calculateGrade () <<endl;
    Student student [5] = {
        Student (101, "Bilal", 19, 67), 
        Student (102, "Gul", 20, 90), 
        Student (103, "Qazi", 21, 56), 
        Student (104, "Hilal", 19, 88),
        Student (105, "umar", 20, 86)};
    
    for (int i = 0 ; i < 5 ; i ++)
    {
        student [i].display () ;
        cout << "Grade : " << student [i]. calculateGrade();
        cout << "\n" << "\n" << endl;
    }
    s1.displayTotalStudent ();
return 0;
}