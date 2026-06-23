#include <iostream>
using namespace std;
class A {
public:
    void print() { cout << "Class A" << endl; } // Normal function
};

class B : public A {
public:
    void print() { cout << "Class B"<< endl; } // Hides A's print()
};
class C {
public:
    virtual void print() { cout << "Class C"; } // Virtual function
};

class D : public C {
public:
    void print() override { cout << "Class D"; } // True Override!
};
int main () {
B myObject;
myObject.print(); // Output: "Class B" (Looks like it changed, right?)

A* ptr = &myObject; 
ptr->print();     // Output: "Class A" ⚠️ WARNING!

C *c;
D d ;
c = &d ;
c->print ();
return 0;
}