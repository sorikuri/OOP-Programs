#include <iostream>
using namespace std;
class Counter {
private:
int count;
public:
Counter() 
{ 
    count = 0;
}
Counter(int c) {
count = c;
}
void operator++() {
// pre-increment operator overloading
++count;
}
void operator++(int) {
// post-increment operator overloading
count++;
}
int getCount() const {
return count;
}
};

int main() {
Counter c(5);
++c; 
cout << "After pre-increment: " << c.getCount() << endl;
c++; 
cout << "After post-increment: " << c.getCount() << endl;
return 0;
}