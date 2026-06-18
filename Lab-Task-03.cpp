#include <iostream>
using namespace std;
// PROGRAM -01 
class Counter {
    public :
    static int tCounter ;
    int count = 0;
    void increment (){
    count ++ ;
    tCounter ++ ;
    }
    void decrement (){
    count -- ;
    tCounter -- ;
    }
    void reset (){
    tCounter -= count ;
    count = 0;
    }
    void display ()
    {
    cout << "Display : " << count << endl;
    }

    static void displayCount () {
        cout << "Display the count : " << tCounter << endl;
    }
};
int Counter :: tCounter = 0 ;
int main () {
    Counter c1, c2, c3, c4, c5;
    c1.increment ();
    c2.increment ();
    c3.increment ();
    c1.display ();
    c2.display ();
    c3.display ();
    Counter :: displayCount ();
    c1.reset ();
    Counter :: displayCount ();
    c1.reset ();
    c1.increment ();
    c1.display ();
    Counter :: displayCount ();
    return 0;
}