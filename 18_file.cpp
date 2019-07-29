#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char country[50],capital[50];
    cout<<"Enter the name of the country:";
    cin>>country;
    cout<<"Enter the name of the capital:";
    cin>>capital;

    ofstream fout("country.txt");
    fout<<country<<endl;
    fout.close();

    ofstream outf("capital.txt");
    outf<<capital<<endl;
    outf.close();

    ifstream fin("country.txt");
    fin>>country;
    cout<<"Country: "<<country<<"\t";
    fin.close();

    ifstream inf("capital.txt");
    inf>>capital;
    cout<<"Capital: "<<capital<<endl;
    fin.close();
    return 0;
}

