#include<iostream>
using namespace std;

class sum
{
    int no1,no2,res;
    public : sum()
    {
        no1=10;
        no2=20;
    }
    ~sum()
    {
        cout << "Destructor called " << endl;

    }
    void display()
    {
        res=no1+no2;
        cout<< "Sum is : "<<res<<endl;
    }
};


int main()
{
    sum s1;
    s1.display();
    return 0;
}
