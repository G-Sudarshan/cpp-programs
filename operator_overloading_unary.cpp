#include<iostream>
using namespace std;

class overload
{
    int x,y;
    public : getdata()
    {
        cout<< "Enter x and y"<<endl;
        cin>>x>>y;
    }

    void operator ++()
    {
        x++;
        y++;
    }

    void display()
    {
        cout<< "x : "<<x<< " y : "<<y<<endl;
    }
};

int main()
{
    overload obj1;
    obj1.getdata();
    cout<< "before operator overloading : "<<endl;
    obj1.display();
    ++obj1;
    cout<< "after operator overloading : "<<endl;
    obj1.display();

    return 0;
}
