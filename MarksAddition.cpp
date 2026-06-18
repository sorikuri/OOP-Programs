#include <iostream>
using namespace std;
class Student 
{
    int Eng, Maths, Bio;
    public :
    int Total = 0;
    // static int Total ;
    Student (int E, int M, int B)
    {
        Eng = E;
        Maths = M;
        Bio = B ;
    }
    Student operator+ (const Student& marks)
    {
        Student Marks ((Eng + marks.Eng ),(Maths + marks.Maths) ,(Bio + marks.Bio));
        return  Marks ;
    }
    void calTotal ()
    {
        Total = Eng + Maths + Bio;
        cout << "Total Marks are : " << Total << endl;
    }
    void getMarks ()
    {
        cout << "English Marks : " << Eng << "\t" << "Maths MArks : " << Maths << "\t" << "Biology Marks : " << Bio << endl;
    }
    void calculateAverage ()
    {
        Total = Total / 2 ;
        cout << "Average Marks are : " << Total << endl;
    }
};
// int Student :: Total = 0;
int main () 
{
    Student s1 (50, 30, 20);
    Student s2 (70, 60, 40);
    Student s3 = s1 + s2 ;
    s3.getMarks ();
    s3.calTotal ();
    s3.calculateAverage ();
return 0;
}