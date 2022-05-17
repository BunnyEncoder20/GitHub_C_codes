#include<bits/stdc++.h>
using namespace std;

void counting_sort(int arr[],int size,int div)
{
    int count[10]={0};  //initialize all counts = 0
    int output[size];   //output array
    
    for (int i = 0; i < size; i++)
        count[ (arr[i]/div)%10 ]++; //making counting array
    
    for(int i=1; i<10; i++)
        count[i]+=count[i-1];       //count -> position array
    
    for (int i = size-1; i>=0 ; i--)
    {
        output[count[ (arr[i]/div)%10 ]-1]=arr[i];  
        --count[ (arr[i]/div)%10 ];
    }
    
    for(int i=0;i<size;i++)         //initial ->output array
        arr[i]=output[i];
}

void radix_sort(int arr[],int size)
{
    int maxi=0;
    for (int i = 0; i < size; i++)
        maxi = max(maxi,arr[i]);
    
    for(int div=1;maxi/div>0;div*=10)
        counting_sort(arr,size,div);    //calling counting sort for each digit
}

int main()
{
    int size=9;
    int arr[]={58,1,4,333,105,6969,567,90,22};

    cout<<"\nBefore sorting :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    radix_sort(arr,size);

    cout<<"After sorting :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    return 0;
}