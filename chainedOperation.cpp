#include <iostream>
using namespace std;
class operations 
{
    public :
    int Value1 ;
    int Value2 ;
    operations (int value1)
    {
        Value1 = value1 ;
    }
    operations operator+ (const operations& val1)
    {
        operations result1 = Value1 + val1.Value1;
        return result1;
    }
    operations operator* (const operations& val2)
    {
        operations result2 = Value1 * val2.Value1;
        return result2 ;
    }
    void display ()
    {
        cout << "dekh behan : " << Value1 <<endl;
    }
};
int main ()
{
    operations o1 (67);
    operations o2 (56) ;
    operations o3 = o1 + o2 ;
    operations o4 (2);
    operations o5 = o3 * o4;
    o5.display ();
return 0;
}