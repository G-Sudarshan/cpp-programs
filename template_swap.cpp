#include<iostream>
using namespace std;

template<class T>

void swap(T x,T y)
{
    T temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"x : "<<x<< " y : "<<y;
}

int main()
{
    int a,b;
    float x,y;
    cout<< "Enter a and b"<<endl;
    cin>>a>>b;
    cout<< "Enter x and y"<<endl;
    cin>>x>>y;

    swap(a,b);
    swap(x,y);
}
