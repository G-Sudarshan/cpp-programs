
#include<iostream>
using namespace std;

class A
{
    public : virtual void display()
    {
        cout<< "This is base class"<<endl;
    }
};

class B : public A
{
    public : void display()
    {
     cout<< "This is derrived class "<<endl;
    }
};

int main()
{
    A a;
    B b;
    A *ptr;
    ptr=&a;
    ptr->display();
    ptr=&b;
    ptr->display();

    return 0;
}
