#include <iostream>
using namespace std;
// Task 3
float BMIcalculator (int weight, float height)
{
    return weight / (height * height);
    
}
int main () { 
    int w;
    float h;
    cout << "Enter Weight : " << endl;
    cin >> w;
    cout << "Enter Height : " << endl;
    cin >> h;
    cout << "BMI IS : " << BMIcalculator (w,h);
    return 0;
}