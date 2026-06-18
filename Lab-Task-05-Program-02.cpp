#include <iostream>
using namespace std;
class Employee 
{
    public : 
    int ID;
    string NAME;
    int GRADE;
    int SALARY;
    Employee () 
    {
        ID = 0;
        NAME = "Unknown";
        GRADE = 0;
        SALARY = 0;
    }
    Employee (int identity, string n, int gradeOfemp, int sal) 
    {
        ID = identity;
        NAME = n;
        GRADE = gradeOfemp;
        SALARY = sal;
    }
        void setEmployeeId (int id)
        {
          ID = id;  
        }
        int getID ()
        {
            return ID;
        }
        void setEmployeeName (string name)
        {
          NAME = name;  
        }
        string getNAME ()
        {
            return NAME ;
        }
        void setEmployeeGrade (int grade)
        {
          GRADE = grade;  
        }
        int getGRADE ()
        {
            return GRADE;
        }
    
        int CalculateSalary (int salary)
        {
            if (grade >= 18 )
            {
                salary =  salary - (salary*25)/100; 
                return salary;
            }
        }
        int CalculateSalary (int salary)
        {
            if (grade < 18 || grade >= 16 )
            {
                salary =  salary - (salary*15)/100; 
                return salary;
            }
        }
        int CalculateSalary (int salary)
        {
            if (grade < 16 )
            {
                salary = salary - (salary*5)/100; 
                return salary;
            }
        }
        void displayID ()
        {
            cout << "IDENTITY : " << ID << endl;
        }
        void displayNAME ()
        {
            cout << "NAME : " << NAME << endl;
        }
        void displayGRADE ()
        {
            cout << "GRADE : " << GRADE << endl;
        }
        void displaySALARY ()
        {
            cout << "SALARY : " << SALARY << endl;
        }   
};
int main () 
{
    Employee E1 (890, "Hina", 18, 20000);
    E1.getNAME();
    E1.getID ();
    E1.getGRADE (); 
return 0;
}