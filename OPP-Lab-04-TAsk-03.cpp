#include <iostream>
using namespace std;
// Task - 03
class Book {
    public :
    string Title;
    string Author;
    int Pages;

    Book ()
    {
        Title = "Unknown";
        Author = "Unknown";
        Pages = 0;
    }
    Book (string title, string author, int pages)
    {
        Title = title;
        Author = author;
        Pages = pages;
    }
    Book (string t, string a)
    {
        Title = t;
        Author = a;
        Pages = 0;
    }
    void display ()
    {
        cout << "Book Name ; " << Title << endl;
        cout << "Book's Author ; " << Author << endl;
        cout << "Book Pages ; " << Pages << endl;
        cout << "\n" << "\n" << endl;
    }
};
int main () {
    Book b1;
    Book b2 ("Out of Egypt", "Andre Aciman", 780);
    Book b3 ("Little Women", "Hehe");
    b1.display ();
    b2.display ();
    b3.display ();
return 0;
}