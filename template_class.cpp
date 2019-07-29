#include<iostream>
using namespace std;

template <class x>
x max(x a ,x b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a1,b1,e;
    char c,d,f;
    cout<< "Enter and b : "<<endl;
    cin>>a1>>b1;
    cout<<"Enter c and d : "<<endl;
    cin>>c>>d;
    //e=;
   // f=;
    cout<< "Greater in a and b : "<<max<int>(a1,b1)<<endl;
    cout<< "Greater in c and d : "<<max<char>(c,d)<<endl;


    return 0;
}
