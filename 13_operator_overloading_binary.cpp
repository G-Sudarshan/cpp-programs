#include<iostream>

using namespace std;

class overload
{
    int x;
    public : void getdata()
    {
        cout<< "Enter x : "<<endl;
        cin>>x;

    }
    void putdata()
    {
        cout<< " x : "<<x<<endl;
    }
     overload operator +(overload obj1)
    {
        overload obj2;
        obj2.x=x+obj1.x;
        return obj2;
    }
};

int main()
{
    overload obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    obj3=obj1+obj2;
    obj3.putdata();

    return 0;
}
