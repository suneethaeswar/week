
/*
 10. a. Create a base class basic_info with data members
 name ,rollno, gender and two member functions getdata
 and display. Derive a class physical fit from basic_info
 which has data members height and weight and member
 functions getdata and display. Display all the information
 using object of derived class.
 
 Name: Koppuravuri Sai Naga Rishmitha
 Section: IT-A
 Roll no: 18121A1245
 */

#include<iostream>
using namespace std;

class basic_info{
    int rollno;
    string name;
    char gender;
public:
    void getdata();
    void display();
};

void basic_info::getdata(){
    cout<<"Enter Name:\n";
    cin>>name;
    cout<<"Enter Roll no:\n";
    cin>>rollno;
    cout<<"Enter Gender:(M/F/O)\n";
    cin>>gender;
}

void basic_info::display()
{
    cout<<"Name:\n";
    cout<<name<<endl;
    cout<<"Roll no:\n";
    cout<<rollno<<endl;
    cout<<"Gender:\n";
    cout<<gender<<endl;
}

class physical_fit: public basic_info{
public:
    float height, weight;
};

int main()
{
    physical_fit obj;
    obj.getdata();
    cout<<"Enter Height:\n";
    cin>>obj.height;
    cout<<"Enter weight:\n";
    cin>>obj.weight;
    cout<<"\nCandidate details:\n";
    obj.display();
    cout<<"Height: "<<endl;
    cout<<obj.height<<endl;
    cout<<"Weight: "<<endl;
    cout<<obj.weight<<endl;
}
/*
 Output:
 Enter Name:
 Rishmitha
 Enter Roll no:
 1245
 Enter Gender:(M/F/O)
 F
 Enter Height:
 157.5
 Enter weight:
 67
 
 Candidate details:
 Name:
 Rishmitha
 Roll no:
 1245
 Gender:
 F
 Height:
 157.5
 Weight:
 67
 */
