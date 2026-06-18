#include <iostream>
using namespace std;
// Task - 02
class Rectangle {
private:
    float Length;
    float Width;
    float Area ;

public:
    void inputData ()
    {
        cout << "Enter Length : " << endl;
        cin >> Length;
        cout << "Enter Width : " << endl;
        cin >> Width;
    }
    float calculateData (float Length, float Width)
    {
        return Length * Width;
        cout << Area; 
    }
    void showData ()
    {
        cout << "Length in meters: " << Length << endl;
        cout << "Width in meters: " << Width << endl;
        cout << "Area in meters: " << calculateData (Length, Width);
    }
};
int main () 
{
Rectangle r1;
    r1.inputData ();
    r1.showData ();
return 0;
}  
