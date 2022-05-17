#include<iostream>

using namespace std;

int powerfunc(int m,int n=2)
{
    for (int i = 0; i < n-2; i++)
    {
        m*=m;
    }
    return m;
}
int main()
{
    int m,n,res;
    cout<<"Enter the Value of m and n :\n"; cin>>m>>n;

    if (n==2)
    {
        res=powerfunc(m);
    }
    else
    {
        res=powerfunc(m,n);
    }

    cout<<res<<"\n\n\n\n";

    return 0;
}