#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string str;
    ofstream file;
    char delim='$';
    file.open("notes.txt");
    if (!file.is_open())
    {
        cout<<"Fatal error: couldn't open file";
        exit(0);
    }
    cout<<"Enter text and terminate with $:\n";
    std::getline(std::cin, str, delim);
    file<<str;
}
