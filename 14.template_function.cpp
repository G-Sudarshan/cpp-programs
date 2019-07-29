#include<iostream>
using namespace std;

template <class T>

void swapval(T &a ,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;

}

int main()
{
    int a=5,b=7;
    float x=34.3 ,y=234.3;
    char p='A' , q='B';

    cout<< " Before swapping : "<<endl;
    cout<<" a : "<<a<< " b : "<<b<<endl;
    cout<<" x : "<<x<< " y : "<<y<<endl;
    cout<<" p : "<<p<< " q : "<<q<<endl;

    swapval(a,b);
    swapval(x,y);
    swapval(p,q);


    cout<< " After swapping : "<<endl;
    cout<<" a : "<<a<< " b : "<<b<<endl;
    cout<<" x : "<<x<< " y : "<<y<<endl;
    cout<<" p : "<<p<< " q : "<<q<<endl;

    return 0;
}
