#include <iostream>
using namespace std;
class Box 
{
    public :
    int volume ;
    int height ;
    void printVolume ()
    {
        cout << "Volume : " << volume << endl;
    }
    void printHeight ()
    {
        cout << "Height : " << height << endl;
    }
};
int main ()
{
    Box myBox;
    myBox.volume = 50;
    myBox.height = 60 ;
    myBox.printVolume ();
    myBox.printHeight ();
    Box *ptr = &myBox ;
    ptr-> volume = 100 ;
    ptr->printVolume();
    myBox.printHeight ();
return 0;
}