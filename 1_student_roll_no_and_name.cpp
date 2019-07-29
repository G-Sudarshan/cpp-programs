#include<iostream>
using namespace std;

class student
{
    private : int rollno;
              string name;
    public : void getdata()
    {
        cout<<"Enter rol no and name";
        cin>>rollno>>name;

    }

    void display()
    {
        cout<<"roll no : "<<rollno<<"name  : "<<name;
    }
};


int main()
{
    student s1;
    s1.getdata();
    s1.display();
}
