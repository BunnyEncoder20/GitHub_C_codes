#include<bits/stdc++.h>
using namespace std;

void isort(int arr[])
{
    for (int i = 1; i < 51; i++)
    {
        int key = arr[i],j = i-1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j]; 
            j=j-1;
        }
        arr[j+1]=key;
    }
}

void printarr(int arr[])
{
    for (int i = 0; i < 51; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[100],odd_arr[51];

    for (int i = 0; i < 99; i++)
    {
        arr[i]=rand();
        if (i%2!=0)
        {
            odd_arr[i]=arr[i];
        }
    }

    //printarr(odd_arr);
    clock_t t1=clock();
    isort(odd_arr);
    printarr(odd_arr);
    clock_t t2=clock();
    double tt = double(t2-t1)/CLOCKS_PER_SEC;

    
    cout<<"\n\nTime taken by Insertion sort : "<<tt<<setprecision(5)<<endl;
    cout<<"\n";
    return 0;
}