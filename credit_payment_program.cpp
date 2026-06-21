#include <iostream>
using namespace std;
class Payment 
{
    public :
    virtual void pay ()
    {
        cout << "Your payement type" <<endl;
    }
};
class Credit : public Payment 
{
    public :
    void pay ()
    {
    cout << "Payment via credit card." <<endl;   
    }
};
class Paypal : public Payment
{
    public :
    void pay ()
    {
    cout << "Payment via Paypal." <<endl;   
    }
};
int main () 
{
    Payment* paymentPtr ;
    Credit credit ;
    Paypal paypal ;
    paymentPtr = &credit ;
    paymentPtr -> pay ();
    paymentPtr = &paypal ;
    paymentPtr -> pay ();
return 0;
}