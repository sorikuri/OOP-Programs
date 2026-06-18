#include <iostream>
using namespace std;
class Vector 
{
    private : 
    int X ;
    int Y ;

    public : 
    Vector ()
    {
        X = 0;
        Y = 0;
    }
    Vector (int x, int y)
    {
        X = x ;
        Y = y ;
    }
    Vector operator-- ()
    { return (-x, -y)
    }
};
int main ()
{
    Vector v1 (5, 7);
    
return 0;
}