#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector <int> v1,v2;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v2.push_back(10);
   

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<endl;
    }

    if (!v1.empty())
    {
        v1.clear();
    }
    cout<<"Vector v1 cleared\nChecking....."<<endl;

    if (v1.empty())
    {
        cout<<"Empty vector v1"<<endl;
    }
    
    v1.push_back(10);

    if (v1==v1)
    {
        cout<<"both the vectors are equal now"<<endl;
        v2.push_back(15); v2.push_back(20);
    }
    
    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<endl;
    }
    
    return 0;
}