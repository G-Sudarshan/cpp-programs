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
    student s1[5];
    int i;
    for(i=0;i<5;i++)
        s1[i].getdata();
    for(i=0;i<5;i++)
        s1[i].putdata();
    return 0;
}
