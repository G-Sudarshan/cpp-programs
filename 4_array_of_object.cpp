#include<iostream>
using namespace std;

class student
{
    private : int rollno;
              string name;
    public : void getdata()
    {
        cout<<"Enter rol no and name : "<<endl;
        cin>>rollno>>name;

    }

    void display()
    {
        cout<<"roll no : "<<rollno<<"name  : "<<name<<endl;
    }
};

int main()
{
    student s1[5];
    int i;
    for(i=0;i<5;i++)
    {
        s1[i].getdata();
    }
    for(i=0;i<5;i++)
    {
        s1[i].display();
    }

    return 0;
}
