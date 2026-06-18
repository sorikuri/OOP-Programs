#include <iostream>
#include <cmath>
using namespace std;

// DECLARATION OF SQUARE FUNCTION
int square_Function (int num);
// DECLARATION OF CUBIC FUNCTION
int cubic_Function (int num);

int main ()
{
    // TASK - 01
    //  INPUT OUTPUT BASICS
    string name;
    int age;
    cout << "Enter Name : " <<endl;
    cin >> name;
    cout << "Name :" << name << endl;
    cout << "Enter Age : " <<endl;
    cin >> age;
    cout << "Age : " << age << endl;

    // TASL - 02
    // FACTORIAL CALCULATION
    int n, factorial = 1;
    cout << "Enter Number for Factorial : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is : " << factorial << endl;


    // TASK - 03
    // CONDITIONAL STATEMENTS
    int num ;
    cout << "Enter Number : " << endl;
    cin >> num;
    if (num % 2 ==0)
    {
        cout << num << " is Even ";
    }
    else {
        cout << num << " is Odd ";
    }

    // TASK - 04
    // LOOP PRACTICE
    int sum =0 ;
    for (int i = 1; i <= 50 ; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of the Even Number is : " << sum << endl;

    // TASK - 05
    // ARRAY AND AVERAGE
    int num [5], sum = 0, Average;
    cout << "Enter Array Elements : " << endl;
    for (int i =0 ; i < 5; i++)
    {
        cin >> num [i];
        sum += num [i];
    }
    Average = sum / 5;
    cout << "Average of the Array Elements are : " << Average << endl;

    // TASK - 06
    // FUNCTION
    // SQUARE FUNCTION CALLING
    int n;
    cout << "Enter Number : "<< endl;
    cin >> n;
    cout << "Answer : " << square_Function (n) << endl;
    
    // CUBIC FUNCTION CALLING
    cout << "Enter Number : "<< endl;
    cin >> n;
    cout << "Answer : " << cubic_Function (n);
    return 0;
}
// DEFINITION OF SQUARE FUNCTION
int square_Function (int num)
{
    int Result;
    Result = num * num;
    return Result;
}
// DEFINITION OFCUBIC FUNCTION
 int cubic_Function (int num)
{
    int Result;
    Result = num * num * num;
    return Result;
}