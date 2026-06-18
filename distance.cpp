#include <iostream>
using namespace std;
class Distance 
{
    public :
    int CM, Meter ;

    Distance ()
    {
        CM = 0;
        Meter = 0;
    }
    Distance (int cm, int m)
    {
        CM = cm;
        Meter = m;
    }
    void operation ()
    {
        if (CM >= 100)
        {
            CM = CM/100;
            Meter += CM;
            CM = CM%100;
            CM += CM ;
        }
        cout << CM << "\t" <<Meter << endl;
    }
    void display ()
    {
        cout << "Centimeter : " << CM << "\n" << "Meter : " << Meter << endl;
    }
};
int main () 
{
    Distance d1(156,0);
    d1.display ();
    d1.operation ();
return 0;
}