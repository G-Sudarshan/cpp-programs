#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int cost;
    char name[50];
    cout<<"Enter the name of the item:";
    cin>>name;
    cout<<"Enter the cost of the item:";
    cin>>cost;
    ofstream fout("item.txt");
    fout<<name<<endl;
    fout<<cost<<endl;
    fout.close();
    ifstream fin("item.txt");
    fin>>name>>cost;
    cout<<"Name: "<<name<<endl;
    cout<<"Cost: "<<cost<<endl;
    fin.close();
    return 0;
}
