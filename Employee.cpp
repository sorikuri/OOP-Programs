#include <iostream>
using namespace std;
class Employee 
{
    private :
    string Name ;
    int id ;
    int Grade ;

    public :
    Employee ()
    {}
    Employee (string n, int i, int g)
    {
        Name = n;
        id = i;
        Grade = g;
    }
    void inputData ()
    {
            cout << "Enter Name :" << endl;
            cin >> Name ;
            cout << "Enter ID :" << endl;
            cin >> id ;
            cout << "Enter Grade :" << endl;
            cin >> Grade ;
    }
    void displaydata ()
    {
        cout << "Name : " << Name << endl;
        cout << "ID : " << id << endl;
        cout << "Grade : " << Grade << endl;
    }
};
int main () 
{
    Employee E[2];
    for (int i = 0; i < 2; i ++)
    {
        E[i].inputData ();
    }
    for (int i = 0; i < 2; i ++)
    {
        E[i].displaydata ();
    }
    return 0;
}