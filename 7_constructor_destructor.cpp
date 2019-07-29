#include<iostream>
using namespace std;

class sample
{
    private : int a,b,sum;
    public : sample()
    {
        a=10;
        b=20;
    };
    void display()
    {
        sum=a+b;
        cout<< " Sum is : "<<sum<<endl;
    }
    ~sample()
    {
        cout<< "Destructor is called "<<endl;
    }
};


int main()
{
    sample s1;
    s1.display();
    return 0;
}
