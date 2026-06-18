#include <iostream>
using namespace std;

class Car {
private:
    string Name;
    int Price;
    float Mileage;
public:
    void setData ()
    {
        cout << "Enter Car name : " << endl;
        cin >> Name;
        cout << "Enter Car Price : " << endl;
        cin >> Price;
        cout << "Enter Car Mileage : " << endl;
        cin >> Mileage;
    }
    void showData ()
    {
        cout << "Name : " << Name << endl;
        cout << "Price : " << Price << endl;
        cout << "Mileage : " << Mileage << endl;
    }
};
int main () 
{
Car c1, c2, c3;
    c1.setData ();
    c2.setData ();
    c3.setData ();
    c1.showData ();
    c2.showData ();
    c3.showData ();
    return 0;
}

