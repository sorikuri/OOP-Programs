#include <iostream>
using namespace std;
// First class
class Date 
{
    int Day;
    int Month;
    int Year;

    public :
    Date (int d, int m, int y)
    {
        Day = d ;
        Month = m;
        Year = y;
    }
    void displayDate ()
    {
        cout << Day << "/" << Month << "/" << Year << endl;
    }
};
// Second class
class Address 
{
    int HouseNo ;
    int StreetNo ;
    string City ;

    public:
    Address (int HNo, int SNo, string c)
    {
        HouseNo = HNo ;
        StreetNo = SNo ;
        City = c;
    }
    void getAddress ()
    {
        cout << "House-No : " << HouseNo << ", " << "Street Number : " << StreetNo << ", " << "City : " << City << endl;
    }

};
// third class
class Person 
{
    string Name ;
    Date dob ;
    Address address ;

    public :
    // Person (int day, int month, int year) : dob (day, month ,year ) {}

    // Person (int hno, int sno ,string city) : address (hno, sno, city) {}

    Person (string n, int day, int month, int year, int hno, int sno ,string city): Name (n), dob(day, month, year),address (hno, sno, city){}
    void getPersonalInfo ()
    {
        cout << "Name : " << Name << endl;
        dob.displayDate ();
        address.getAddress ();
    }
};
int main () 
{
    Person p1 ("Sobia", 13 ,1, 2006, 156, 4, "Peshawar");
    p1.getPersonalInfo ();
return 0;
}