#include<iostream>
#include<conio.h>

using namespace std;

int main(int argc,char *argv)
{
    int i;
    cout<< " Total no. of arguments :  "<<argc<<endl;
    for(i=0;i<argc;i++)
    {
        cout<<i<<". arguemnt : "<<argv[i];
        getche();
    }


    return 0;

}
