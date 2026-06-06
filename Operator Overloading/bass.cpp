#include <iostream>
#include <cstring>
using namespace std;

class myString {
    char* str;
    int length;
public:
    myString(const char* s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    bool operator<(const myString& s) {
        return length < s.length;
    }

    bool operator>(const myString& s) {
        return length > s.length;
    }

    void display() {
        cout << str << " (length: " << length << ")" << endl;
    }

    ~myString() { delete[] str; }
};

int main() {
    myString s1("Asim");       
    myString s2("Mardan");     

    if (s1 < s2)
        cout << "s1 is shorter" << endl;
    else
        cout << "s2 is shorter" << endl;
}