#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("test.txt");
    out << "Line1" << endl;
    out << "Line2" << endl;
    out << "Line3" << endl;
    out.close();

    ifstream in("test.txt");
    string line;
    int count = 0;

    while (getline(in, line))
    {
        count++;
        if (count == 2)
            cout << line << endl;
    }

    cout << "Total lines: " << count << endl;
    return 0;
}