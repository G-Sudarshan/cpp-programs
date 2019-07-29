#include<iostream>
#include<fstream>
#include<conio.h>


using namespace std;

int main()
{
    int item_cost;
    char item_name[20];
    char line[80];
    cout<< "Enter name and cost of item : "<<endl;
    cin>>item_name>>item_cost;

    ofstream fout("item.txt");
    fout<<item_name<<item_cost;
    fout.close();
    ifstream fin("item.txt");
    while(fin)
    {
        fin.getline(line,80);
        cout<<line;
    }
    //fin>>item_name>>item_cost;
    //cout<<"item name : "<<item_name<< "  item cost : "<<item_cost<<endl;
    fin.close();

    getchar();


    return 0;
}
