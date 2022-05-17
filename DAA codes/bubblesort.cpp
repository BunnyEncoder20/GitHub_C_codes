//bubblesort with O(n^2) complexity
#include<bits/stdc++.h>
using namespace std;
int size = 5;

void bubblesort(int arr[])
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size-i-1; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[]={4,7,2,9,100};
    cout<<"Unsorted Array :\n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    bubblesort(arr);

    cout<<"\n\nSorted Array :\n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}