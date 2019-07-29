#include<iostream>
using namespace std;

class A
{
    int a1;
    public : void getdata()
    {
        cout<< " Enter a1"<<endl;
        cin>>a1;
    }
    friend void showA(A a1);

};

/*class B
{
    int b1;
    public : void getdata()
    {
        cout<< "Enter b1" <<endl;
        cin>>b1;
    }
    friend void mul(A a1,B b1);
}; */
 void showA(A a12)
{
    ;
    cout<< "a1 is : "<<a12.a1<<endl;

}

int main()
{
    A obj1;
   // B obj2;

    obj1.getdata();
    //obj2.getdata();

    showA(obj1);

    return 0;
}
