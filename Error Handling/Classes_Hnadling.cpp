#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream file("log.txt", ios::out);
    file << "First entry" << endl;
    file << "Second entry" << endl;
    file.close();

    fstream file2("log.txt", ios::out);
    file2 << "Third entry" << endl;
    file2.close();

    ifstream reader("log.txt");
    string line;
    while (getline(reader, line))
        cout << line << endl;

    return 0;
}