#include<iostream>
using namespace std;

class student
{
    protected :
    int rollno;
    string name;
    public : void getdata()
    {
        cout<< "Enter rollno and name : "<<endl;
        cin>>rollno>>name;
    }

};

class test : virtual public student
{
    protected : int mark1,mark2;
    public : void getdata()
    {
        cout<< " Enter mark 1 and mark 2"<<endl;
        cin>>mark1>>mark2;

    };

};

class sports : virtual public student
{
    protected : int score;
    public : void getdata()
    {
        cout<< "Enter score : "<<endl;
        cin>>score;
    };
};

class total : public test,public sports
{
    int sum;
    public : void display()
    {
        sum=mark1+mark2+score;
        cout<< "rollno : "<<rollno<< " name : "<<name<< " total : "<<sum<<endl;
    }
};

int main()
{
    total t1;
    t1.student::getdata();
    t1.test::getdata();
    t1.sports::getdata();
    t1.display();

    return 0;
}
