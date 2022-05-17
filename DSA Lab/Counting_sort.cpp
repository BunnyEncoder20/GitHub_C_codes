#include<bits/stdc++.h>
using namespace std;

void counting_sort(int arr[], int size)
{
    int maxi=0;
    for (int i = 0; i < size; i++)
    {
        if (maxi<arr[i])
        {
            maxi=arr[i];
        }
    }
    cout<<"Maximum = "<<maxi<<endl;

    int count[10]={0};        //making the count array
    cout<<"Count array : "<<endl;
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;        
    }
    for (int i = 0; i <size; i++)
    {
        cout<<count[i]<<" ";
    }
    cout<<"\n";
    for (int i = 0; i <size; i++)
    {
        cout<<i<<" ";
    }
    cout<<"\n\n";

    int position[maxi]={0};         //making the position array
    position[0]=count[0];
    cout<<"Position array : "<<endl;
    for (int i = 1; i <=maxi; i++)
    {
        position[i]=count[i]+position[i-1];
    }
    for (int i = 0; i <=maxi; i++)
    {
        cout<<position[i]<<" ";
    }
    cout<<"\n";
    for (int i = 0; i <=maxi; i++)
    {
        cout<<i<<" ";
    }
    cout<<"\n\n";

    int output[size];        //final output array
    for (int i=size-1; i>=0; i--)
    {
        output[--position[arr[i]]]=arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i]=output[i];
    }
}
int main()
{
    int arr[]={1,3,2,3,4,1,4,0,8},size=9;
    cout<<"Unsorted array :\n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
    
    counting_sort(arr,size);
    
    cout<<"Output array : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}