#include <iostream>
using namespace std;
// class CNIC 
// {
//     private : 
//     string Name;
//     int Age;
    
//     public :
//     CNIC ()
//     {
//         Name = "Unknown ";
//         Age = 0 ;
//     }
//     void setName (string name)
//     {
//         Name = name ;
//     }
// //     void setAge (int age)
// //     {
// //         if (age >= 18)
// //         {
// //             Age = age ;
// //         }
// //         if (age < 18) 
// //         {
// //             cout << "Invalid age for CNIC." << endl;
// //         }
// //     }
// //     string getName ()
// //     {
// //         return Name;
// //     }
// //     int getAge ()
// //     {
// //         return Age;
// //     }
// // };
// // int main () 
// // {
// //     CNIC C1;
// //     C1.setName ("Sobia");
// //     C1.setAge (17);
// //     cout << "Name : " << C1.getName () << endl;
// //     cout << "Age : " << C1.getAge () << endl;
// // return 0;
// // }
// class Point {
// private:
// int x;
// int y;
// public:
// Point() { x,y=0; }
// Point(int a, int b) {
// x = a;
// y = b;
// }
// Point operator+(Point p) {
// Point result;
// result.x = x + p.x;
// result.y = y + p.y;
// return result;
// }
// int getX() { return x; }
// int getY() { return y; }
// };

// int main()
// {
// // Create two Point objects
// Point p1(2, 3);
// Point p2(4, 5);
// // Add the two Point objects using the overloaded operator
// Point sum = p1 + p2;
// // Display the result
// cout << "Sum of Points: (" << sum.getX() << ", " << sum.getY() << ")" << endl;
// return 0;
// }
class item 
{
    private :
    static int x;

    public :
    int func ()
    {
        return x ;
    }
    static int Func ()
    {
        return x ;
    }

};
int item :: x = 1 ; 
int main ()
{
    item i1;
    cout << "with non static member function" <<i1.func ()  << endl;
    cout << "with static member function" << item :: Func () <<endl;
}