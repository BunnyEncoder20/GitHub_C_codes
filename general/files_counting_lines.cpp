#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream f("sample1.txt");
    char ch[100]; int count=0;
    while (!f.eof())
    {
        f.getline(ch,100);
        count++;
    }
    cout<<"The number of words in the file is : "<<count<<endl;
    
    cout<<"program completed"<<endl;
    f.close();
    return 0;
}
