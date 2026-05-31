#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;
public:
    // Default constructor
    Student() {
        roll = 0;
        name = "Unknown";
        marks = 0.0;
    }

    // Parameterized constructor
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    // Copy constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
        cout << "Copy constructor called\n";
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;                      // default
    Student s2(101, "Alice", 92.5); // parameterized
    Student s3 = s2;                 // copy
    s1.display();
    s2.display();
    s3.display();
    return 0;
}