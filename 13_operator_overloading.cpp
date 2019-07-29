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
    void operator ++()
    {
        x=x+1;
    }
};

int main()
{
    overload obj1;
    obj1.getdata();
    ++obj1;
    obj1.putdata();


    return 0;
}
