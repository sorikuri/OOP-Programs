#include <iostream>
using namespace std;
class Counter {
    public :
    static int totalCounter ;
    Counter () {
        totalCounter ++;
    }

    static void displayCount () {
        cout << "Display the count : " << totalCounter << endl;
    }
};
int Counter :: totalCounter = 0 ;
int main () {
    Counter c1, c2, c3, c4, c5;
    Counter :: displayCount ();
    return 0;
}