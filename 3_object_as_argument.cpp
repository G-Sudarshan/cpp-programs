#include<iostream>

using namespace std;

class sample
{
    public : int x;
    void getdata()
    {
        cout<< "enter x  : "<<endl;
        cin>>x;
    }
    void sum(sample obj)
    {
        int sum;
        sum=x+obj.x;
        cout<< " Sum is : "<<sum;
    }
};

int main()
{
    sample obj1,obj2;
    obj1.getdata();
    obj2.getdata();
    obj1.sum(obj2);
    return 0;
}
