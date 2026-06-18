#include <iostream>
using namespace std;
class Student {
    int roll ;
    public :
        Student (int r){
        roll = r ;
        cout << "roll : " << roll << endl;
        }
};
int main () {
    Student s1(101), s2(103);

return 0;
}