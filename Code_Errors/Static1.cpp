#include <iostream>
using namespace std;

class Student {
private:
    static int totalStudents;          // (1) declaration
    int rollNo;
    string name;

public:
    Student(string n) {                // (2) parameterized constructor
        rollNo = ++totalStudents;
        name = n;
    }

     void printTotal() {         // (3) static member function
        cout << "Total students: " << totalStudents << endl;
        cout << "Latest name: " << name << endl;   // Error A
    }

     void resetTotal(int val) {  // (4) another static function
        totalStudents = val;
        this->rollNo = 0;              // Error B
    }

    void introduce() {                 // (5) non‑static
        cout << "I am " << name << ", roll " << rollNo << endl;
    }
};

int Student::totalStudents = 0;     

int main() {
    Student s1("Alice");
    Student s2("Bob");

    // Student::printTotal();             // (7) should print total
    // Student::resetTotal(10);           // (8) reset counter
   s1.printTotal();    
   s2.printTotal();    
   s1.resetTotal(10);
   s1.resetTotal(13);
    return 0;
}
