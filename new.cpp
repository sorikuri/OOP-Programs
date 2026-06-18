#include <iostream>
using namespace std;
int main () 
{
    int *ptr = new int [4];
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    delete [] ptr ;
    for (int i = 0; i < 4; i ++)
    {
        cout << ptr [i] << endl;
    }
return 0;
}