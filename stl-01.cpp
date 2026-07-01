#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main () 
{
    // adding vectors elements
   vector <int> Vector ;
   Vector.push_back(10);
   Vector.push_back(20);
   Vector.push_back(30);
   Vector.push_back(40);
    // accessing the vector elements
    cout << "First Element "<< Vector[0] <<endl;
    cout << "Second Element "<< Vector[1] <<endl;
    cout << "Third Element "<< Vector[2] <<endl;
    cout << "Fourth Element "<< Vector[3] <<endl;
return 0;
}