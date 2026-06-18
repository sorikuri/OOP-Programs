#include <iostream>
using namespace std;
// ctrl + shift + l (for selection of multiple instances at once) 
class StringAddition {
private:
    string str;

public:
    StringAddition(string s) {
        str = s;
    }

    StringAddition operator + (const StringAddition obj1) {
        return StringAddition(str + obj1.str);
    }

    void display() {
        cout << "STRING AFTER ADDITION : " <<str << endl;
    }
};

int main() {
    StringAddition s1("Bruce ");
    StringAddition s2("Lee ");
    StringAddition s3 = s1 + s2 ;
    s3.display();

    return 0;
}