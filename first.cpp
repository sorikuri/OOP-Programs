#include <iostream>
// #include <string>
using namespace std;
class Family {
    private: 
    float income;

    public:
    int member;
    int siblings;
    string name ;

    Family (int m, int siblings, string n) {
    member = m;
    name = n;
    this ->siblings = siblings;

    }
};
int main ()
{
    Family Person1 (12, 7, "Son");
    cout << Person1.member << endl;
    cout << Person1.siblings << endl;
    cout << Person1.name << endl;

    return 0;
}