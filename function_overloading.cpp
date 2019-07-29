#include<iostream>
using namespace std;

class sum
{
    int res;
    public : void add(int a, int b)
    {
        res=a+b;
        cout<<"sum is : "<<res<<endl;

    }
    void add(int a, int b, int c)
    {
        res=a+b+c;
        cout<<"sum is : "<<res<<endl;
    }
    void add(int a,int b,int c,int d)
    {
        res=a+b+c+d;
        cout<<"sum is : "<<res<<endl;
    }
};

int main()
{
    sum a;
    a.add(10,20);
    a.add(10,20,30);
    a.add(10,20,30,40);

}
