/*
11. a. Write a program to define the function template for
swapping two items of the various data types such as
integer, float, and characters.

Name: Koppuravuri Sai Naga Rishmitha
Section: IT-A
Roll no: 18121A1245
*/

#include<iostream>
using namespace std;

template<class T>
void mySwap(T &a, T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a1=6, a2=5;
    float b1=7.9, b2=4.67;
    char c1='v',c2='g';
    
    cout<<"Before Swapping:\n";
    cout<<"a1: "<<a1<<"\ta2: "<<a2<<endl;
    cout<<"b1: "<<b1<<"\tb2: "<<b2<<endl;
    cout<<"c1: "<<c1<<"\tc2: "<<c2<<endl;
    
    mySwap(a1,a2);
    mySwap(b1,b2);
    mySwap(c1,c2);
    
    cout<<"After Swapping:\n";
    cout<<"a1: "<<a1<<"\ta2: "<<a2<<endl;
    cout<<"b1: "<<b1<<"\tb2: "<<b2<<endl;
    cout<<"c1: "<<c1<<"\tc2: "<<c2<<endl;
}
/*
Output:
Before Swapping:
a1: 6   a2: 5
b1: 7.9 b2: 4.67
c1: v   c2: g
After Swapping:
a1: 5   a2: 6
b1: 4.67        b2: 7.9
c1: g   c2: v
*/
