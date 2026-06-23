#include <iostream>
using namespace std;
int main () 
{
    int n = 10, quotient, q;
   int i = 0;
   q = n / 2;
   while (q < 2)
   {
    // q = n / 2;
    n = q ;
    cout << "Hello" << endl;
    i ++;
   }
//    cout << q << endl;
return 0;
}