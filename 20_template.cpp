#include<iostream>
using namespace std;
template <class T>
T compare(T a,T b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int x=5,y=6;
    float a=10.5,b=20.2;
    char c='a',d='b';
    cout<<"Biggest number between "<<x<<" & "<<y<<" is ";
    int ex1=compare(x,y);
    cout<<ex1<<endl;

    cout<<"Biggest number between "<<a<<" & "<<b<<" is ";
    float ex2=compare(a,b);
    cout<<ex2<<endl;

    cout<<"Biggest character between "<<c<<" & "<<d<<" is ";
    char ex3=compare(c,d);
    cout<<ex3<<endl;
    return 0;
}

