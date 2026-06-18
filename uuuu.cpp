#include <iostream>
using namespace std;
int square (int x)
{
    return x*x;
}
int SquareofSum (int x, int y)
{
    int z = square (x + y) ;
    return z;
}
int main ()
{
    int a, b;
    a = 5, b = 10;
    cout << SquareofSum (a,b);
    return 0;
}
