#include<iostream>
using namespace std;

class sample
{
    private : int a;
    public : void getdata()
    {
        cout<< "Enter a : "<<endl;
        cin>>a;

    };

    friend void showA(sample obj1);
};

void showA(sample obj1)
{
    cout<< " value of a : "<<obj1.a<<endl;
}

int main()
{
    sample s1;
    s1.getdata();
    showA(s1);



    return 0;
}
