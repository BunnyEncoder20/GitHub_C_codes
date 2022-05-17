#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter the N : \n";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        sum+=i;
    }
    cout<<"Sum of "<<n<<" numbers is = "<<sum<<endl;
}