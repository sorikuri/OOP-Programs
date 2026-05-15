#include <iostream>
using namespace std;
class Age 
{
    public :
    int X ;

    void display ()
    {
        cout << "Age : " << X << endl;
    }
};
int main () 
{
    Age a1;
    a1.X = 56 ;
    a1.display ();
return 0;
}