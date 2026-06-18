#include <iostream>
using namespace std;
class Book 
{
    private :
    int ID ;
    string TITLE ;
    string AUTHOR_NAME ;
    int PRICE ;

    public :
    static int totalBooks ;
    Book ()
    {
        ID = 0;
        TITLE = "UNKNOWN";
        AUTHOR_NAME = "UNKNOWN";
        PRICE = 0 ;
    }
    Book (int id, string title, string A_name, int price)
    {
        ID = id;
        TITLE = title ;
        AUTHOR_NAME = A_name ;
        PRICE = price ;
        totalBooks ++ ;
    }
    Book (Book& attibutes)
    {
        ID = attibutes.ID ;
        TITLE = attibutes.TITLE ;
        AUTHOR_NAME = attibutes.AUTHOR_NAME;
        PRICE = attibutes.PRICE ;
        totalBooks ++ ;
    }
    ~Book ()
    {
        cout << "I'm destructor ! " << endl ;
    }
    void setId (int Id)
    {
        ID = Id ;
    }
    int getId ()
    {
        return ID ;
    }
    void setTitle (string Title)
    {
        TITLE = Title ;
    }
    string getTitle ()
    {
        return TITLE ;
    }
    void setAuthorName (string Name)
    {
        AUTHOR_NAME = Name ;
    }
    string getAuthorName ()
    {
        return AUTHOR_NAME ;
    }
    void setPrice (int Price)
    {
        PRICE = Price ;
    }
    int getPrice ()
    {
        return PRICE ;
    }
    void calculateAmount ()
    {
        if (PRICE >= 5000)
        {
            cout << "You get 20 % of discount " << endl;
        }
        else if (PRICE > 3000 && PRICE < 5000)
        {
            cout << "You get 15 % of discount " << endl;
        }
        else if (PRICE > 1500 && PRICE < 3000)
        {
            cout << "You get 10 % of discount " << endl;
        }
        else 
        {
            cout << "You get 5 % of discount " << endl;
        }
    }
    void calculateAmount (int p)
    {
        PRICE = p ;
        if (PRICE >= 5000)
        {
            cout << "You get 20 % of discount " << endl;
        }
        else if (PRICE > 3000 && PRICE < 5000)
        {
            cout << "You get 15 % of discount " << endl;
        }
        else if (PRICE > 1500 && PRICE < 3000)
        {
            cout << "You get 10 % of discount " << endl;
        }
        else 
        {
            cout << "You get 5 % of discount " << endl;
        }
    }
    static int displayTotalBooks ()
    {
        cout << "Total Number of Books are : " << totalBooks <<endl;
    }
    void inputData ()
    {
        for (int i = 0; i < 1 ;i ++)
    {
        cout << "Enter Book Id : " << endl;
        cin >> ID ;
        cout << "Enter Title of Book : " << endl ;
        cin >> TITLE ;
        cout << "Enter Book Author : " << endl;
        cin >> AUTHOR_NAME ;
        cout << "Enter Book's Price : " << endl;
    }
    }
    void displayData ()
    {
        for (int i = 0; i < 1; i ++)
        cout << "ID : " << ID << endl ;
        cout << "Title of Book : " << TITLE << endl;
        cout << "AUthor : " << AUTHOR_NAME << endl;
        cout << "Price : " << PRICE << endl;
    }
};
int Book :: totalBooks = 0;
int main ()
{
    Book b1 (102923, "Killed", "Zack", 500);
    Book b2 = b1;
    Book b3 ;
    b1.setId (4563);
    b1.getId ();
    b1.setAuthorName ("Bilal");
    b1.getAuthorName ();
    b1.setTitle ("Horse man");
    b1.getTitle ();
    b1.setPrice (500);
    b1.getPrice (); 
    b1.displayData ();
    b2.displayData ();
    b3.displayTotalBooks();
    return 0;
}