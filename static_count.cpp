#include<iostream>
using namespace std;

class student
{
    int rollno;
    string name;
    static int cnt;

    public :

        student()
    {
        student :: cnt++;
    }

    void getdata()
    {
        cout<<"ENter your roll no and name"<<endl;
        cin>>rollno>>name;
    }
    void putdata()
    {
        cout<< " rollno : "<<rollno<<" name : "<<name<<endl;
    }

    static void showcount()
    {
        cout<< "count is :"<<student::cnt<<endl;
    }
};

int student::cnt=0;

int main()
{
    student s1,s2,s3,s4;
    student::showcount();

    return 0;
}
