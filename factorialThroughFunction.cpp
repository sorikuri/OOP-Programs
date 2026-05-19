#include <iostream>
using namespace std;
int factFunction (int n){
    int factorial = 1;
    for (int i = 1; i <=n ; i++){
        factorial = factorial * i ;
    }
    return factorial; 
}

int main () { 
    int n;
    cout << "Enter Number = ";
    cin >>  n;
   
    cout << factFunction  (n)  << endl;

return 0;
}