#include <iostream>
using namespace std;
int inputMark (int *A, int size), i;
int inputMark (int *A, int size){
    cout << "\nEnter Marks = ";
    for ( i=0; i < size; i++){
        cin >> A[i];
        cout <<A[i] << endl ; 
    }
}
float calculateAverage (int *A, int size){
    inputMark (A, size);
    float Average=0, Sum = 0 ;
    int i;
    for (i =0; i< size; i++){
    Sum += A[i];
    }
    Average = Sum / (float)size; 
    cout << "Average = \n" ;
    return Average ;
}
int countPassed (int *A, int size){
    for (i =0; i< size; i++){
    if (A[i] >= 50){
        cout <<A[i] << " " <<"\nYou've Passed the Exam."<< endl;
    }
    else {
        cout <<A[i] << " " <<"\n You Failed Dumbass."<< endl;
    }
}
}
void displayMarks (int *A, int size){
    for ( i=0 ; i < size ; i++){
        cout << "\nStudent Marks #  "<< A[i] << endl;
    }  
}
int main (){
    int size, Sum;
    cout << "NUMBER OF STUDENTS =  ";
    cin >> size;
    int A[size];
    // inputMark (A, size); If we call this function in main function then we've to input the marks twice Hence I'm calling this function in the second only
    cout << calculateAverage ( A, size);
    cout << countPassed (A, size);
    displayMarks (A, size);
    return 0;
}
