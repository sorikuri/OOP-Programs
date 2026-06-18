#include <iostream>
using namespace std;
class Time 
{
    public :
    int Hour;
    int Minute;
    int Second;
    Time (int T, int M, int S)
    {
        Hour = T ;
        Minute = M;
        Second = S;
    }
    Time T3 (Time &t1, Time &t2)
    {
        int Sec1;
        Hour = t1.Hour + t2.Hour ;
        Minute = t1.Minute + t2.Minute;
        Second = t1.Second + t2.Second ;
        if (Second > 59)
        {
            Sec1 = Second % 60;
            Second = Sec1 ;
            Second = Second / 60 ;
            Minute += Second ;
            cout << "Minute " << Minute << "Second " << Second << endl;
        }
    }
    

};
int main () {
    Time T1 (3, 34, 23);
    Time T2 (13, 89, 45);
   // Time T3 (t1, t2);
    

return 0;
}