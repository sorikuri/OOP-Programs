#include <iostream>
using namespace std;
class product 
{
    string P_Name ;
    int Id;
    int Price;
    int Amount;

    public :
    product() {}
    product (string N, int id, int P, int A)
    {
        P_Name = N;
        Id = id;
        Price = P;  
        Amount = A;   
    }
    void inputData ()
    {
        cout << "Product Name " <<endl;
        cin >> P_Name;
        cout << "Product id " <<endl;
        cin >> Id;
        cout << "Product Price " <<endl;
        cin >> Price;

    }
    void discount ()
    {
        if (Price > 1000)
        {
            Amount = (Amount- (Amount * 0.1));
        }
        if (Price > 500)
        {
            Amount = (Amount-(Amount * 0.05));
        }
        else 
        {
            cout << "NO DISCOUNT FOR YOU BITCH!!!!!!!!" << endl;
        }
    }
    void displayAmount ()
    {
        cout << "-----------------------------------------"<<endl;
        cout << "Product Name :" << P_Name << endl;
        cout << "Product Id :" << Id << endl;
        cout << "Product Price :" << Price << endl;
        cout << "\t" << "\t" << endl;
    }
};
int main () 
{
    product p[3];
    for (int i =0; i < 3; i++)
    {
        p[i].inputData ();
    }
    for (int i =0; i < 3; i++)
    {
        p[i].displayAmount ();
    }
    for (int i =0; i < 3; i++)
    {
        p[i].discount ();
    }
return 0;
}