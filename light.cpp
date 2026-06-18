#include <iostream>
using namespace std;
class Light 
{
    bool On;
    public :
    Light (bool o)
    {
        On = o ;
    }
    bool operator! ()
    {
        return (!On);
    }
    void display ()
    {
        cout << On << endl;
    }
};
int main () 
{
    Light L1 (1);
    Light L2 = !L1;
    L2.display ();
return 0;
}