#include<iostream>
using namespace std;
template <class T>
class sample
{
    T a,b;
public:
    sample(T x)
    {
        a=x;
        b=x;
    }
    sample(T a,T b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"\nValues are "<<a<<" & "<<b;
    }
};
int main()
{
    sample<int>obj1(10);
    sample<char>obj2('a','b');
    obj1.display();
    obj2.display();
    return 0;
}
