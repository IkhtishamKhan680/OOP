#include <iostream>
using namespace std;

class Counter {
public:
    static int count;
    Counter()  { count++; }
    ~Counter() { count--; }
};

int Counter::count = 0;

int main() {
    cout << Counter::count << endl;
    Counter a, b, c;
    cout << Counter::count << endl;
    {
        Counter d;
        cout << Counter::count << endl;
    }
    cout << Counter::count << endl;
    return 0;
}