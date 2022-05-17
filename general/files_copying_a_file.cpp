#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("sample1.txt",ios::in);
    ofstream fout("sample2.txt",ios::out);
    char ch[100]; 
    while (!fin.eof())
    {
        fin.getline(ch,100);    fout<<ch;
    }
    fin.close(); fout.close();
    cout<<"Program terminated"<<endl;
    return 0;
}
