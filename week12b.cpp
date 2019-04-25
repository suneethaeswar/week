//<start>
/*
12. b. To write a program to read a set of lines from
the keyboard and store it on a specified file

Name: Koppuravuri Sai Naga Rishmitha
Section: IT-A
Roll no: 18121A1245
*/

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
    cout<<"/n/nText write in file completed";
}

/*
Output:
I love studying human evolution
I can't solve the Rubik's
I love quantum physics$

Text write in file completed
*/
//<Stop>
