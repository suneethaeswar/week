//</start>
/* 12. a. To write a program to write numbers
1 to 100 in a data file NOTES.TXT

Name: Koppuravuri Sai Naga Rishmitha
Section: IT-A
Roll no: 18121A1245
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("notes.txt");
    for(int i=1;i<=100;i++)
    {
        file<<i<<endl;
    }
    cout<<"File is created";
}

/*
Output:
File is created
*/
//<Stop>
