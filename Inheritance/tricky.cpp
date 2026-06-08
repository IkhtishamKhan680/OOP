#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { cout << "Animal" << endl; }
    void breathe()       { cout << "Animal breathes" << endl; }
};

class Dog : public Animal {
public:
    void speak()   override { cout << "Dog" << endl; }
    void breathe()          { cout << "Dog breathes" << endl; }
};

int main() {
    Animal* a = new Dog();
    a->speak();
    a->breathe();

    Dog* d = new Dog();
    d->speak();
    d->breathe();

    delete a;
    delete d;
    return 0;
}