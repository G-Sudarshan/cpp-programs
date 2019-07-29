#include<iostream>
using namespace std;
int fact(int no);
void fibo(int no1,int no2,int limit);

int main()
{

    int a,res,no1,no2,limit;
    cout << "Enter a no. : "<<endl;
    cin >> a;
    res=fact(a);

    cout<< "factorial is : "<<res<<endl;

    cout<< "Enter no1 , no2 and limit "<<endl;
    cin>>no1>>no2>>limit;
    fibo(no1,no2,limit);

    return 0;
}

int fact(int no)
{
    if(no==0)
        return 1;
    else
        return (no*fact(no-1));
}

void fibo(int no1,int no2,int limit)
{
    int no3;
    cout<<no1<<"  "<<no2<<"  ";
    no3=no1+no2;
    cout<<no3;
    if(no3=>limit)
    {
        return;
    }
    else
    {
        fibo(no2,no3,limit);
    }
}
