#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int rollno;
    string name;
    char line[100];
    ofstream fout;
    fout.open("student.txt" ,ios::out);
    cout<< "Enter data : "<<endl;
    cin>>rollno>>name;
    fout<<rollno<<" "<<name;
    fout.close();

    ifstream fin;
    fin.open("student.txt", ios::in);
    while(fin)
    {
        fin.getline(line,80);
        cout<<line;
    }

    fin.close();

    return 0;
}
