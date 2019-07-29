#include<iostream>
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    int space,nlc,tab;
    ifstream fin;
    fin.open("item.txt");
    space=0;
    nlc=0;
    tab=0;
    while(fin)
    {
        char ch;
        fin.get(ch);
        if(ch==' ')
            space++;
        else if(ch=='\n')
            nlc++;
        else if(ch=='\t')
            tab++;
    }
    cout<<"No of spaces:"<<space<<endl;
    cout<<"No of new line characters:"<<nlc<<endl;
    cout<<"No of tabs:"<<tab<<endl;
    fin.close();
    return 0;
}
