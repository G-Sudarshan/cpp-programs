#include<iostream>
using namespace std;

template <class T>

class relational
{
    T x,y;
    public : relational(T var1 , T var2)
    {
        x=var1;
        y=var2;
    }
    T getmin()
    {
        return((x<y) ? x : y);
    }
};

int main()
{
    relational<int> r1(11,10);
    relational<double> r2(234.23,23.34);

    int min = r1.getmin();
    double dmin = r2.getmin();

    cout<< min << "  "<< dmin<<endl;


    return 0;
}
