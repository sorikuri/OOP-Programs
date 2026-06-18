#include <iostream>
using namespace std;
class A 
{
    public :
    int age ;
    string name ;
    // A () {
    //     cout << "I AM class A " << endl;
    // }
    A (int a, string n)
    {
        age = a ;
        name = n ;
    }
    ~A ()
    {
        cout << "I AM class A destructor  " << endl;
    }
};
class B : public A
{
    public :
    string city ;
    // B(){
    //     cout << "I AM class B " << endl;
    // }
    B (int a , string n, string c) : A(a, n)
    {
        city = c ;
    }
    ~B ()
    {
        cout << "I AM class B destructor  " << endl;
    }
    void displayAge ()
    {
        cout << age << endl;
    }
    void displayName ()
    {
        cout << name << endl;
    }
    void displayCity ()
    {
        cout << city << endl;
    }
};
int main () 
{
    B b1 (21, "Sara", "Peshawar");
    
    b1.displayName ();
    b1.displayAge ();
    b1.displayCity ();
return 0;
}