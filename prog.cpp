#include <iostream>
using namespace std;
class Vector 
{
    public :
    int value ;

    Vector (int v)
    {
        value = v;
    }
    Vector operator + (Vector& n)
    {
        return (value + n.value + 30);
    } 
    void display ()
    {
        cout << "Value " << value << endl;
    }
};

int main () {
    Vector v1 (10);
    Vector v2 (20);
    Vector v3 = v1 + v2 ;
    v3.display ();
    v2.display ();
return 0;
}