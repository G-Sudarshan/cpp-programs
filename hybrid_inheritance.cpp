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

class marks : virtual public student
{
    protected : int m1,m2;
    public : void getdata()
    {
        cout<< "Enter the marks "<<endl;
        cin>>m1>>m2;

    }

};

class sport : virtual public student
{
    protected : int score;
    public : void getdata()
    {
        cout<< "Enter score"<<endl;
        cin>>score;
    };
};

class result : public marks , public sport
{
    int res;
    public : void display()
    {
        res=m1+m2+score;
        cout<< "roll no: "<<rollno<< "name : "<<name<<"\nTotal : "<<res<<endl;
    }
};

int main()
{
    result obj1;
    obj1.student::getdata();
    obj1.marks::getdata();
    obj1.sport::getdata();
    obj1.display();

    return 0;
}
