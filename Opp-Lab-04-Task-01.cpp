#include <iostream>
using namespace std;
// Task - 01
class Salary 
{
    public :
    int Basic_Salary;
    int Gross_Salary;
    float Tax;

    Salary (int x, float y)
    {
        Basic_Salary = x;
        Tax = y;
        }
    void calculate ()
    {
        int cal = 0 ;
        cal = Basic_Salary *  Tax ;
        Gross_Salary = Basic_Salary - cal;
    }
    void display ()
    {
        cout << "Gross_Salary : " << Gross_Salary;
    }
};
int main () 
{
    Salary s1 (10000, 0.6);
    s1.calculate ();
    s1.display ();
return 0;
}
// #include <iostream>
// using namespace std;
// class Time {
//    int hour;
//    int minute;
//    int second;
// public: 
//    Time()
//    {
//       hour=minute=second=0;
//    }
//    Time(int h,int m,int s)
//    {
//       hour=h;
//       minute=m;
//       second=s;
//    }
//    void sum(Time & x,Time & y)
//    {
//       int s=0,m=0;
//       s=x.second+y.second;
//       m=x.minute+y.minute;
//       if(s>59)
//       {
//         second=s%60;
//         m=m+(s/60);
//       }
     
//       if(m>59)
//       {
//          minute=m%60;
//          hour=hour+(m/60);
//       }
//       hour=hour+x.hour+y.hour;

//    }
//    void display()
//    {
//       cout<<"Hours = "<<hour<<endl;
//       cout<<"Minutes = "<<minute<<endl;
//       cout<<"Seconds = "<<second<<endl;
//    }
// };
// int main()
// {
//    Time t1(16,78,24),t2(10,90,45),t3;
//    t3.sum(t1,t2);
//    t3.display();
//    return 0;
// }