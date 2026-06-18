#include <iostream>
using namespace std;
class Time 
{
    int Hour, Minute, Second;
    public :
    Time (int H, int M, int S)
    {
        Hour = H;
        Minute = M;
        Second = S;
    }
    Time operator+ (const Time& T)
    {
        Time Sum (Hour + T.Hour, Minute + T.Minute, Second + T.Second);
        return Sum;
    }
    void calculate ()
    {
        if (Second > 59)
        {
            Minute = (Second / 60) + Minute ; 
            Second = (Second % 60)  ;
        }
        if (Minute > 59)
        {
            Hour = (Minute / 60 ) + Hour ;
            Minute = (Minute % 60 ) ;
        }
    }
    void display ()
    {
        cout << "Hour : " << Hour << "\t"<<"Minute :"<< Minute << "\t" << "Second :" <<Second <<endl;
    }
};
int main () 
{
    Time T1 (1,9,10);
    Time T2 (2, 8, 9);
    Time T3 = T1 + T2;
    T3.calculate ();
    T3.display();
return 0;
}