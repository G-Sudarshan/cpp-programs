#include<iostream>
using namespace std;

int main()
{
    int a,b;
    float c;
    string e;
    cout<< "Enter a : ";
    cin>>a;
    cout<< "Enter b : ";
    cin>>b;
    try{

    if(b==0)
    {
        throw exception();
    }

    c=a/b;

    cout<< "Division is : "<<c<<endl;

    }catch(exception &e)
    {
        cout<< " exception : "<<e.what()<<endl;
    }

    char s[40];
    cout<< "Enter string : ";
    cin>>s;
    cout<< "string is : "<<s<<endl;

    return 0;
}
