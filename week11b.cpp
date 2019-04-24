/*
11. b. Write a program to define the class template for
calculating the square of given numbers with different
data types.

Name: Koppuravuri Sai Naga Rishmitha
Section: IT-A
Roll no: 18121A1245
*/

#include<iostream>
using namespace std;

template<class T>
T sq(T a)
{
    return a*a;
}

int main()
{
    short shn=3;
    int inn=6;
    float fln=8.4;
    double dln=7.2;
    
    cout<<"Initial values:\n";
    cout<<"short: "<<shn<<endl;
    cout<<"int: "<<inn<<endl;
    cout<<"float: "<<fln<<endl;
    cout<<"double: "<<dln<<endl;
    
    cout<<"\nSquares:\n";
    cout<<"short: "<<sq(shn)<<endl;
    cout<<"int: "<<sq(inn)<<endl;
    cout<<"float: "<<sq(fln)<<endl;
    cout<<"double: "<<sq(dln)<<endl;
}
/*
Output:
Initial values:
short: 3
int: 6
float: 8.4
double: 7.2

Squares:
short: 9
int: 36
float: 70.56
double: 51.84
*/
