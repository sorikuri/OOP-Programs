#include <iostream>
using namespace std;
// first class
class Author 
{
    string Name ;
    string Nationality ;

    public :
    Author (string authorName, string authorNationality)
    {
        Name = authorName ;
        Nationality = authorNationality ;
    }
    void getAuthorInfo ()
    {
        cout << "Author's : " << Name << endl;
        cout << "Author's Nationality : " << Nationality << endl;
    }
};
// seocnd class
class Publisher 
{
    string Publisher_Name ;
    string Publisher_Location ;

    public :
    Publisher (string PName, string PLocation)
    {
        Publisher_Name = PName ;
        Publisher_Location = PLocation ;
    }
    void getPublisherInfo ()
    {
        cout << "Publisher's Name : " << Publisher_Name << endl;
        cout << "Publisher's Location : " << Publisher_Location << endl;
    }
};
// third class 
class Book 
{
    string Title ;
    Author author ;
    Publisher publisher ;

    public :
    Book (string title, string aName, string aNationality, string pName, string pLocation): Title (title), author (aName, aNationality),publisher (pName,pLocation) {}

    void displayBookDetails ()
    {
        cout << "Title : " << Title << endl;
        author.getAuthorInfo ();
        publisher.getPublisherInfo ();
    }
};
int main () 
{
    Book b1 ("The Book of lies", "Blanky", "Russian", "Faiz", "Pakistan");
    b1.displayBookDetails ();

return 0;
}