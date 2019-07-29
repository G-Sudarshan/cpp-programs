#include<iostream>
#include<string.h->
using namespace std;
int main()
{    int l,i;
    char ch;
    char *bptr,*eptr;
    char str[100];
    cout<< "Enter string : ";
    cin>>str;
    l=strlen(str);
    bptr=str;
    eptr=str;

    for(i=0;i<l-1;i++)
    {
        eptr++;
    }
    while(eptr>=bptr)
    {
        cout<<*eptr;
        eptr--;
    }
    return  0;
}
