#include <iostream>
using namespace std;
class a 
{
    public :
    void display ()
    {
        cout << "Hello from class A" << endl;
    }
};
class b : public a 
{
    public :
    void display ()
    {
        cout << "Hello from class B" << endl;
    }
};
int main () 
{
    a a1;
    a1.display ();
    b b1;
    b1.display ();
return 0;
}