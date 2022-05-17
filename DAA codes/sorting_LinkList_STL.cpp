/*Sorting of numbers and find min max in a linked list*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;    //going to exploit STL 
    int n,n1,n2;
    cout<<"\nEnter the number of elements : \n";
    cin>>n;
    cout<<"\nEnter "<<n<<" elements : \n";
    for (int i = 0; i < n; i++)
    {
        cin>>n1; l.push_back(n1);
    }
    
    l.sort();
    cout<<"\nSorted List is : ";
    for (int i = 0; i < n; i++)
    {
        n2=l.front();
        l.pop_front();
        cout<<n2<<" ";
    }
    cout<<"\n";
    
    return 0;
}