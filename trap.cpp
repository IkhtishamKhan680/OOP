#include <iostream>
using namespace std;

int x = 10;

class Test {
    int x;
public:
    Test(int x) : x(x) {}

    void show(int x) {
        cout << x << endl;
        cout << this->x << endl;
        cout << ::x << endl;
    }
};

int main() {
    Test t(20);
    t.show(30);
    return 0;
}