#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        marks = 0;
    }

    // Parameterized Constructor
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Copy Constructor
    Student(const Student &s) {
        cout << "Copy constructor called!" << endl;
        name = s.name;
        marks = s.marks;
    }

    // Display Function
    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    // Array of objects
    Student students[3] = {
        Student("Ali", 85),
        Student("Sara", 90),
        Student("John", 78)
    };

    cout << "Original Students:\n";
    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    cout << "\nCopying second student into a new object:\n";

    // Copy constructor called here
    Student copyStudent = students[0];

    copyStudent.display();

    return 0;
}
