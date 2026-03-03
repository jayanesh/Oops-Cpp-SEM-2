/*Write a C++ program to create a Student Record System where one student object can
be created using the details of another student, and later one student record can be
replaced with another existing record. Display the details before and after these
operations.*/
#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
        cout << "\nCopy Constructor Used\n";
    }

    // Display Function
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(1, "Rahul", 85);
    cout << "Student 1 Details:\n";
    s1.display();
    Student s2 = s1;
    cout << "\nStudent 2 Details (After Copy):\n";
    s2.display();
    return 0;
}