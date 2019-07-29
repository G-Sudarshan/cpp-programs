#include<iostream>
using namespace std;

class sample
{
    private : int a,b,sum;
    public : sample(int c ,int d)
    {
        a=c;
        b=d;
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
    int a,b;
    cout<< "Enter a and b"<<endl;
    cin>>a>>b;
    sample s1(a,b);
    s1.display();
    return 0;
}

