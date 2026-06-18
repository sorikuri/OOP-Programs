#include <iostream>
using namespace std;
class Complex 
{
    private :
    int realNo ;
    int imaginaryNo ;

    public :
    Complex ()
    {
        realNo = 0;
        imaginaryNo = 0;
    }
    Complex (int r, int im)
    {
        realNo = r;
        imaginaryNo = im ;
    }
    void displayNo ()
    {
        cout << "FIRST COMPLEX NUMBER SYNTAX :" << "(" << realNo << " , "<< imaginaryNo << " i" << ")"<< endl;     
    }
    void displayNo2 ()
    {
        cout << "SECOND COMPLEX NUMBER SYNTAX :" << "(" << realNo << " , "<< imaginaryNo << " i" << ")"<< endl;
    }
    Complex operator + ( const Complex &No )
    {
        Complex  result ;
        result.realNo = realNo + No.realNo ;
        result.imaginaryNo = imaginaryNo + No.imaginaryNo ;
        return result ;
    }
    int display_ComplexNo ()
    {
        cout << "THE SUM OOMPLEX NUMBER IS  : "<< "(" << realNo << " , " << imaginaryNo << " i" << ")" << endl;
    }
};
int main () {
    Complex c1 (12,45), c2 (23, 56);
    c1.displayNo ();
    c2.displayNo2 ();
    Complex c3 = c1 + c2 ;
    c3.display_ComplexNo ();
return 0;
}