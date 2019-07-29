#include<iostream>
using namespace std;

class sum
{
    int add;
    public : void addition(int x,int y)
    {
        add=x+y;
        cout<< "addition is : "<<add<<endl;
    }
    void addition(int x,int y,int z)
    {
        add=x+y+z;
        cout<< "addition is : "<<add<<endl;
    }
    void addition(int x,int y,int z,int w)
    {
        add=x+y+z+w;
        cout<< "addition is : "<<add<<endl;
    }
};

int main()
{
    sum s1;
    s1.addition(40,50);
    s1.addition(34,243,43);
    s1.addition(123,34,53,34);

    return 0;
}
