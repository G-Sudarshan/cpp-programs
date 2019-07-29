#include<iostream>
using namespace std;

class overload
{
    int x;
    public : void getdata()
    {
        cout<< "Enter x"<<endl;
        cin>>x;
    }
    void display()
    {
        cout<< "x : "<<x<<endl;

    }
    overload operator +(overload obj)
    {
        overload obj3;
        obj3.x=this->x+obj.x;
        return obj3;
    }
};


int main()
{
    overload obj1,obj2,obj3;

    obj1.getdata();
    obj2.getdata();

    obj3=obj1+obj2;

    obj3.display();


    return 0;
}
