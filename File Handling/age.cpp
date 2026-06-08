#include <iostream>
#include <stdexcept>
using namespace std;

void checkAge(int age) {
    if (age < 0)
        throw invalid_argument("Negative age");
    if (age > 150)
        throw out_of_range("Age too large");
    cout << "Valid age: " << age << endl;
}

int main() {
    try {
        checkAge(25);
        checkAge(-1);
        checkAge(200);
    }
    catch (invalid_argument& e) {
        cout << "Invalid: " << e.what() << endl;
    }
    catch (out_of_range& e) {
        cout << "Range: " << e.what() << endl;
    }
    cout << "Done" << endl;
    return 0;
}