#include<iostream>
using namespace std;

class sample
{

    public : static int cnt;
    void displayCounter()
    {
      cnt++;
      cout<<"Counter is : "<<cnt;
    }
};
int sample :: cnt;
int main()
{
    sample s1,s2,s3;
    s1.displayCounter();
    s2.displayCounter();
    s3.displayCounter();


    return 0;

}
