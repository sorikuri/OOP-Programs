#include <iostream>
using namespace std;

class Employee {
    int id, grade;
    float salary;
    string name;

public:
    Employee() {
        id = 0;
        name = "Unknown";
        grade = 0;
        salary = 0;
    }

    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }       

    float calculate() {
        return salary - (salary * 25 / 100);
    }

    float calculate(int a) {
        return salary - (salary * 15 / 100);
    }

    float calculate(int a, int b) {
        return salary - (salary * 5 / 100);
    }

    void display() {
        cout << "ID : " << id << endl;
        cout << "NAME : " << name << endl;
        cout << "GRADE : " << grade << endl;
        cout << "BASE SALARY: " << salary << endl;
    }

    void setGrade(int g) {
        grade = g;
    }

    int getGrade() {
        return grade;
    }

    float getSalary() {
        return salary;
    }
};

int main() {
    int grade;

    Employee e[3] = {
        Employee(101, "Anmol", 75000),
        Employee(102, "Sobia", 15000),
        Employee(103, "Amna", 24555)
    };

    for (int i = 0; i < 3; i++) {
        cout << "Set grade for employee "<<i+1<<" : ";
        cin >> grade;
        e[i].setGrade(grade);
    }

	cout<<"\n******* EMPLOYEE DETAILS *******"<<endl;
    for (int i = 0; i < 3; i++) {
        e[i].display();

        float finalSalary;

        if (e[i].getGrade() >= 18) {
            finalSalary = e[i].calculate();
            cout << "~~~~~~ 25% tax deducted ~~~~~~" << endl;
        }
        else if (e[i].getGrade() >= 16) {
            finalSalary = e[i].calculate(1);
            cout << "~~~~~~ 15% tax deducted ~~~~~~" << endl;
        }
        else {
            finalSalary = e[i].calculate(1, 2);
            cout << "~~~~~~ 5% tax deducted ~~~~~~" << endl;
        }

        cout << "Salary after deduction : " << finalSalary << endl << endl;
    }
}