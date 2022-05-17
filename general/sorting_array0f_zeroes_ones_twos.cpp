#include<iostream>
using namespace std;

class solution
{
    public:

    void zeroarray(int a[],int n)
    {
        for (int i = 0; i < n; i++)
        {
            a[i]=0;
        }
    }
};

int main()
{
    int a[5]={1,2,3,4,5}; int n=5;
    solution obj;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
    obj.zeroarray(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}