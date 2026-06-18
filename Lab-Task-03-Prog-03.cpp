#include <iostream>
using namespace std;
class BankAccount {
    private:
    int AccountNum ;
    double Balance;

    public:
    static int initialAccountNum ;
    static double interestRate ;
    BankAccount ()
    {
        AccountNum = initialAccountNum++;
        Balance = 0.0;
    }
    static void setInterestRate(double rate) {
        interestRate = rate;
    }
    void depositAmount ()
    {
        int NewAmount;
        cout << "Enter Amount : " << endl;
        cin >> NewAmount;
        if (NewAmount >= 0)
        {
            Balance += NewAmount ;
        }
        else 
        {
            cout << "Can't Add to it !" << endl;
        }
    }
    void withDrawAmount ()
    {
        int WithDrawAmount;
        cout << "Enter withdraw Amount " << endl;
        cin >> WithDrawAmount;
        if (WithDrawAmount > 0 && WithDrawAmount <= Balance )
        {
            Balance -= WithDrawAmount ;
        }
        else 
        {
            cout << "Invalid Amount Entry! " << endl;
        }
    }
    void display ()
    {
        cout << "Account Number : " << AccountNum << endl;
        cout << "Display " << Balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "\n" << "\n" << endl; 
    }
};
double BankAccount :: interestRate = 24.6;
int BankAccount ::  initialAccountNum = 1001;

int main ()
{
    BankAccount c1,c2;
    BankAccount:: setInterestRate (24.6);
    c1.depositAmount();
    c1.withDrawAmount ();
    c1.display ();
    c2.depositAmount();
    c2.withDrawAmount ();
    c2.display ();

    return 0;
}