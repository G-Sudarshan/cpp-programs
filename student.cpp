#include<iostream>
using namespace std;

class student
{
    int rollno;
    string name;

    public : void getdata()
    {
        cout<<"ENter your roll no and name"<<endl;
        cin>>rollno>>name;
    }
    void putdata()
    {
        cout<< " rollno : "<<rollno<<" name : "<<name<<endl;
    }
};

int main()
{

    student s1;
    s1.getdata();
    s1.putdata();
}
