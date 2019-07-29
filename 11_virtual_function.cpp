#include<iostream>
using namespace std;

class base
{
    public : virtual void display()
    {
     cout<< "This is base class"<<endl;
    }
};

class derrived : public base
{
    public : void display()
    {
        cout<< "This is derrived class "<<endl;
    };
};


int main()
{
    base b1;
    derrived d1;
    base *ptr;
    ptr=&b1;
    ptr->display();
    ptr=&d1;
    ptr->display();

    return 0;
}
