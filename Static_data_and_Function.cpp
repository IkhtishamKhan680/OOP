#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    static int count;   
public:
    Employee() {
        count++;
        id = count;
        name = "";
    }
    Employee(string n) {
        count++;
        id = count;
        name = n;
    }
    static int getCount() {   
        return count;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int Employee::count = 0;

int main() {
    Employee e1("John"), e2("Doe"), e3;
    cout << "Total employees: " << Employee::getCount() << endl;
    e1.display();
    e2.display();
    e3.display();
    return 0;
}